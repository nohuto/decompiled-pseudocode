/*
 * XREFs of sub_1800291D4 @ 0x1800291D4
 * Callers:
 *     sub_180028F24 @ 0x180028F24 (sub_180028F24.c)
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 * Callees:
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

__int64 __fastcall sub_1800291D4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // ebx
  int v10; // r8d
  __int64 i; // rbp
  __int64 *v12; // rdx
  int v13; // r10d
  int v14; // ecx
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // rdx
  int v19; // eax
  int v20; // esi
  __int64 v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  if ( v4 <= 0 )
    return 0LL;
  v10 = *(_DWORD *)(a2 + 8);
  for ( i = 0LL; ; i += 16LL )
  {
    v12 = *(__int64 **)(a1 + 16);
    if ( v12 )
    {
      if ( v5 < 0 || v5 >= v10 )
      {
        sub_1800BB2C8(3221225612LL);
        JUMPOUT(0x18008FB66LL);
      }
      v13 = *((_DWORD *)v12 + 2);
      v14 = 0;
      v15 = *(_QWORD *)a2;
      v16 = 16LL * v5;
      if ( v13 <= 0 )
      {
LABEL_24:
        v14 = -1;
      }
      else
      {
        v17 = *v12;
        while ( 1 )
        {
          v18 = *(_QWORD *)(v17 + 16LL * v14) - *(_QWORD *)(v16 + v15);
          if ( !v18 )
            v18 = *(_QWORD *)(v17 + 16LL * v14 + 8) - *(_QWORD *)(v16 + v15 + 8);
          if ( !v18 )
            break;
          if ( ++v14 >= v13 )
            goto LABEL_24;
        }
      }
      if ( v14 != -1 )
        break;
    }
    v24 = (_OWORD *)sub_180023320(a2, v5);
    if ( !(unsigned int)sub_1800273F8(a4, v24) )
    {
      v25 = 257LL;
      goto LABEL_31;
    }
LABEL_22:
    v4 = *(_DWORD *)(a2 + 8);
    ++v5;
    v10 = v4;
    if ( v5 >= v4 )
      return 0LL;
  }
  if ( v5 >= v4 )
  {
    sub_1800BB2C8(3221225612LL);
    __debugbreak();
  }
  v19 = *(_DWORD *)(a3 + 8);
  if ( v19 != *(_DWORD *)(a3 + 12) )
  {
LABEL_19:
    v22 = (_OWORD *)(*(_QWORD *)a3 + 16LL * v19);
    if ( v22 )
    {
      *v22 = *(_OWORD *)(v15 + i);
      v19 = *(_DWORD *)(a3 + 8);
    }
    *(_DWORD *)(a3 + 8) = v19 + 1;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a3 + 12) )
  {
    v20 = 2 * v19;
    if ( (v19 & 0x40000000) != 0 )
      goto LABEL_30;
  }
  else
  {
    v20 = 1;
  }
  if ( (unsigned __int64)v20 <= 0x7FFFFFF )
  {
    v21 = o__recalloc(*(_QWORD *)a3, v20, 16LL);
    if ( v21 )
    {
      *(_QWORD *)a3 = v21;
      v19 = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a3 + 12) = v20;
      goto LABEL_19;
    }
  }
LABEL_30:
  v25 = 252LL;
LABEL_31:
  sub_18004BD84(retaddr, v25, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
  return 2147942414LL;
}
