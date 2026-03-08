/*
 * XREFs of DpiVerifyResources @ 0x1C0212368
 * Callers:
 *     DpMapMemory @ 0x1C02120E0 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C01E7D58 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiVerifyResources(__int64 a1, __int64 *a2, __int64 a3, char a4, char a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r13
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned int *v12; // r12
  __int64 v13; // rax
  unsigned int i; // ebp
  unsigned int v15; // r15d
  unsigned int *v16; // r13
  unsigned int v17; // r8d
  unsigned int *v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  signed __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 *v24; // r8
  signed __int64 v25; // rcx
  signed __int64 v26; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int8 (__fastcall *v30)(_QWORD, __int64, __int64, _QWORD **, __int64 *); // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+80h] [rbp+18h]
  char v36; // [rsp+88h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = a7;
  v9 = 0;
  v10 = a3;
  v34 = 0LL;
  *a7 = 0LL;
  v12 = *(unsigned int **)(v7 + 1288);
  if ( !v12 )
  {
    v9 = -1073741811;
    v28 = *a2;
    goto LABEL_31;
  }
  v13 = *a2;
  if ( *a2 != 786432 && v13 != 655360 && v13 != 944 && v13 != 960 )
  {
    for ( i = 0; ; ++i )
    {
LABEL_7:
      if ( i >= *v12 )
      {
        v9 = -1073741811;
        v28 = *a2;
LABEL_31:
        v29 = 3LL;
LABEL_45:
        WdLogSingleEntry1(v29, v28);
        return v9;
      }
      v15 = 0;
      v16 = &v12[8 * i + 3 + i];
      v17 = v16[1];
      if ( v17 )
        break;
    }
    while ( 1 )
    {
      v18 = &v16[4 * v15 + 2 + v15];
      if ( a4 == 1 && *(_BYTE *)v18 == 1 )
        break;
      v19 = v17;
      if ( !a4 && (*(_BYTE *)v18 == 3 || *(_BYTE *)v18 == 7) )
      {
        v20 = *(_QWORD *)(v18 + 1);
        v21 = DpiDecodeResourceDescriptorLength((unsigned __int8 *)v18);
        v19 = v16[1];
        a4 = v36;
LABEL_13:
        v22 = v20 + v21;
        if ( *a2 >= v20 && *a2 + v35 <= v22 )
        {
          v10 = v35;
          v8 = a7;
          goto LABEL_16;
        }
      }
      ++v15;
      v17 = v19;
      if ( v15 >= v19 )
      {
        ++i;
        goto LABEL_7;
      }
    }
    v20 = *(_QWORD *)(v18 + 1);
    v19 = v17;
    v21 = v18[3];
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v7 + 1156) != 1 )
  {
    v9 = -1073741811;
    v28 = -1073741811LL;
    v29 = 2LL;
    goto LABEL_45;
  }
  if ( v13 != 786432 )
  {
    v30 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD **, __int64 *))(v7 + 592);
    if ( v30 )
    {
      v31 = *a2;
      v34 = 0LL;
      LODWORD(a7) = a4 != 0;
      if ( v30(*(_QWORD *)(v7 + 568), v31, a3, &a7, &v34) == 1 )
        *a2 = v34;
    }
  }
LABEL_16:
  KeWaitForSingleObject((PVOID)(v7 + 2520), Executive, 0, 0, 0LL);
  v23 = *(__int64 **)(v7 + 2504);
  v24 = v23;
  if ( (__int64 *)*v23 != v23 )
  {
    v25 = *a2;
    while ( 1 )
    {
      v26 = v23[4];
      if ( v25 < v26 + *((unsigned int *)v23 + 10) && v25 + v10 > v26 )
        break;
      v23 = (__int64 *)*v23;
      if ( (__int64 *)*v23 == v24 )
        goto LABEL_21;
    }
    v32 = *((unsigned int *)v23 + 14);
    *a6 = v32;
    if ( v23[4] == *a2
      && *((_DWORD *)v23 + 10) == v10
      && *((_BYTE *)v23 + 45) == a5
      && (!a5 || v23[6] == PsGetCurrentProcess(v32)) )
    {
      v33 = v23[8];
      ++*((_DWORD *)v23 + 6);
      *v8 = v33;
    }
  }
LABEL_21:
  KeReleaseMutex((PRKMUTEX)(v7 + 2520), 0);
  return v9;
}
