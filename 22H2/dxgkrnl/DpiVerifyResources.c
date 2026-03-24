/*
 * XREFs of DpiVerifyResources @ 0x1C01990B4
 * Callers:
 *     DpMapMemory @ 0x1C0198E30 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C017A1A8 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiVerifyResources(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rdi
  signed __int64 v10; // rbx
  unsigned int v11; // r12d
  __int64 *v12; // r14
  char v13; // bp
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int *v16; // r13
  unsigned int v17; // r12d
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 *v20; // rbx
  __int64 *v21; // r8
  signed __int64 v22; // rdx
  signed __int64 v23; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD, __int64, _QWORD, BOOL *, __int64 *); // rax
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  BOOL v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v34; // [rsp+40h] [rbp-48h]
  __int64 v35; // [rsp+48h] [rbp-40h]
  __int64 v36; // [rsp+90h] [rbp+8h]
  unsigned int v37; // [rsp+A0h] [rbp+18h]
  char v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v35 = *(_QWORD *)(a1 + 64);
  v7 = v35;
  v11 = a3;
  v12 = (__int64 *)a2;
  v13 = 0;
  LOBYTE(a3) = 0;
  *a7 = 0LL;
  v34 = *(unsigned int **)(v7 + 1288);
  if ( !v34 )
  {
LABEL_33:
    v8 = -1073741811;
    v25 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v25 + 24) = *v12;
    WdLogEvent5_WdWarning(v25);
    return v8;
  }
  v14 = *(_QWORD *)a2;
  a1 = 786432LL;
  if ( *(_QWORD *)a2 == 786432LL || v14 == 655360 || v14 == 944 || v14 == 960 )
  {
    if ( *(_BYTE *)(v7 + 1155) != 1 )
    {
      v8 = -1073741811;
      v31 = WdLogNewEntry5_WdError(786432LL, a2);
      *(_QWORD *)(v31 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v31);
      return v8;
    }
    if ( v14 != 786432 )
    {
      v26 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, __int64 *))(v7 + 592);
      if ( v26 )
      {
        v27 = *(_QWORD *)a2;
        v33 = 0LL;
        v32 = a4 != 0;
        v28 = v26(*(_QWORD *)(v7 + 568), v27, v11, &v32, &v33);
        a4 = v38;
        LOBYTE(a3) = 0;
        if ( v28 == 1 )
          *v12 = v33;
      }
    }
    v13 = 1;
  }
  v15 = 0;
  if ( v13 == 1 )
    goto LABEL_20;
  v16 = v34;
  do
  {
    if ( v15 >= *v16 )
      break;
    v17 = 0;
    a1 = 9LL * v15;
    a2 = (__int64)&v16[9 * v15 + 3];
    v36 = a2;
    if ( !*(_DWORD *)(a2 + 4) )
      goto LABEL_18;
    while ( 1 )
    {
      a1 = a2 + 4 * (v17 + 4LL * v17 + 2);
      if ( a4 == 1 )
        break;
      if ( !a4 && ((*(_BYTE *)a1 - 3) & 0xFB) == 0 )
      {
        v9 = *(_QWORD *)(a1 + 4);
        v18 = DpiDecodeResourceDescriptorLength((unsigned __int8 *)a1, a2, a3);
        a2 = v36;
        LOBYTE(a3) = 1;
        a4 = v38;
        v10 = v9 + v18;
      }
LABEL_14:
      if ( (_BYTE)a3 == 1 )
        goto LABEL_15;
LABEL_31:
      if ( ++v17 >= *(_DWORD *)(a2 + 4) )
        goto LABEL_18;
    }
    if ( *(_BYTE *)a1 != 1 )
      goto LABEL_14;
    v9 = *(_QWORD *)(a1 + 4);
    v10 = v9 + *(unsigned int *)(a1 + 12);
LABEL_15:
    a1 = *v12;
    LOBYTE(a3) = 0;
    if ( *v12 < v9 || a1 + v37 > v10 )
      goto LABEL_31;
    v13 = 1;
LABEL_18:
    ++v15;
  }
  while ( v13 != 1 );
  v7 = v35;
  v11 = v37;
LABEL_20:
  if ( !v13 )
    goto LABEL_33;
  KeWaitForSingleObject((PVOID)(v7 + 2520), Executive, 0, 0, 0LL);
  v20 = *(__int64 **)(v7 + 2504);
  v21 = v20;
  if ( (__int64 *)*v20 != v20 )
  {
    v22 = *v12;
    while ( 1 )
    {
      v23 = v20[4];
      if ( v22 < v23 + *((unsigned int *)v20 + 10) && v22 + v11 > v23 )
        break;
      v20 = (__int64 *)*v20;
      if ( (__int64 *)*v20 == v21 )
        goto LABEL_26;
    }
    v29 = *((unsigned int *)v20 + 14);
    *a6 = v29;
    if ( v20[4] == *v12
      && *((_DWORD *)v20 + 10) == v11
      && *((_BYTE *)v20 + 45) == a5
      && (!a5 || v20[6] == PsGetCurrentProcess(v29, v22, v21, v19)) )
    {
      v30 = v20[8];
      ++*((_DWORD *)v20 + 6);
      *a7 = v30;
    }
  }
LABEL_26:
  KeReleaseMutex((PRKMUTEX)(v7 + 2520), 0);
  return v8;
}
