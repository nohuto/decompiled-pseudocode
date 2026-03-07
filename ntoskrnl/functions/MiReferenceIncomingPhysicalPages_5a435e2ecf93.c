__int64 __fastcall MiReferenceIncomingPhysicalPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // r15d
  __int64 v10; // r13
  int v11; // esi
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 PteAddress; // r12
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // r11
  unsigned __int64 AweViewPageSize; // r14
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r8
  _QWORD *AweNode; // rax
  __int64 v24; // rax
  __int64 v25; // r11
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  int v32; // [rsp+20h] [rbp-68h]
  __int64 AwePageSize; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned int VadCacheAttribute; // [rsp+B8h] [rbp+30h]

  v7 = 0LL;
  v8 = a2;
  v9 = 0;
  v10 = *(_QWORD *)(a6 + 24);
  v11 = *(_DWORD *)(v10 + 48) & 0x2200000;
  v32 = v11;
  VadCacheAttribute = MiGetVadCacheAttribute(v10);
  v34 = 0LL;
  AwePageSize = MiGetAwePageSize(v12);
  PteAddress = a7;
  AweViewPageSize = MiGetAweViewPageSize(v13);
  v19 = 0LL;
  if ( !AweViewPageSize )
    AweViewPageSize = v15;
  v35 = AweViewPageSize;
  if ( v16 )
  {
    v20 = a4;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v8 + 8 * v19);
      if ( !v20 )
        goto LABEL_23;
      if ( v21 )
        break;
      ++v19;
LABEL_17:
      v11 = v32;
      v8 = a2;
      if ( v19 >= v16 )
      {
        v7 = v34;
        goto LABEL_19;
      }
    }
    PteAddress = MiGetPteAddress(*(_QWORD *)(v20 + 8 * v19));
    if ( v22 >= (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12
      && v22 <= (((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) )
    {
LABEL_23:
      v28 = VadCacheAttribute;
    }
    else
    {
      AweNode = MiGetAweNode(v22);
      v24 = MiGetAweViewPageSize((__int64)AweNode);
      if ( !v24 )
        v24 = AwePageSize;
      if ( v24 != AweViewPageSize )
        goto LABEL_15;
      v10 = *(_QWORD *)(v25 + 24);
      if ( (*(_DWORD *)(v10 + 48) & 0x2200000) == 0x2200000 )
      {
        if ( v11 != 35651584 )
          goto LABEL_15;
      }
      else if ( v11 == 35651584 )
      {
        goto LABEL_15;
      }
      v27 = MiGetVadCacheAttribute(*(_QWORD *)(v25 + 24));
      v28 = VadCacheAttribute;
      if ( VadCacheAttribute != v27 )
        goto LABEL_15;
      v17 = a1;
    }
    v29 = v21 & 0x7FFFFFFFFFFFFFFFLL;
    if ( ((AweViewPageSize - 1) & v29) == 0 )
    {
      v30 = 0LL;
      if ( v9 < 0 )
      {
        if ( AweViewPageSize )
        {
          do
          {
            MiDecrementAweMapCount(v17, v29, &v34, 0);
            v17 = a1;
            v29 += AwePageSize;
            v30 += AwePageSize;
          }
          while ( v30 < AweViewPageSize );
        }
      }
      else if ( AweViewPageSize )
      {
        while ( 1 )
        {
          v9 = MiIncrementAweMapCount(v17, v29, v28, PteAddress);
          if ( v9 < 0 )
            break;
          v29 += AwePageSize;
          v30 += AwePageSize;
          v17 = a1;
          v28 = VadCacheAttribute;
          if ( v30 >= AweViewPageSize )
            goto LABEL_36;
        }
        if ( v30 )
        {
          v31 = v29 - v30;
          do
          {
            v30 -= AwePageSize;
            MiDecrementAweMapCount(a1, v31 + v30, &v34, 0);
          }
          while ( v30 );
          AweViewPageSize = v35;
        }
        goto LABEL_15;
      }
LABEL_36:
      v16 = a3;
      PteAddress += 8 * AweViewPageSize;
      ++v19;
      goto LABEL_16;
    }
LABEL_15:
    PteAddress = a7;
    v16 = v19;
    a3 = v19;
    v9 = -1073741800;
    v19 = 0LL;
LABEL_16:
    v20 = a4;
    v17 = a1;
    goto LABEL_17;
  }
LABEL_19:
  *a5 = v7;
  return (unsigned int)v9;
}
