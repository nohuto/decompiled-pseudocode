/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x1409EBF78
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EBB50 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebp
  _DWORD *v5; // rdi
  unsigned int **Pool2; // rbx
  void *v7; // r15
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // r9d
  __int64 v11; // r12
  __int64 v12; // rbp
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  _QWORD *v17; // r14
  unsigned int *v18; // r11
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+38h] [rbp-40h]
  unsigned int v29; // [rsp+90h] [rbp+18h] BYREF
  int v30; // [rsp+98h] [rbp+20h] BYREF

  v2 = KeNumberProcessors_0;
  v3 = 0;
  v29 = 0;
  v26 = KeNumberProcessors_0;
  v30 = 0;
  v5 = 0LL;
  Pool2 = (unsigned int **)ExAllocatePool2(
                             64LL,
                             (unsigned int)(32 * (*(_DWORD *)((char *)&NlsMbCodePageTag + 6) + 1)),
                             1953985605LL);
  if ( !Pool2 )
    return;
  v27 = ExAllocatePool2(64LL, (unsigned int)(24 * *(_DWORD *)((char *)&NlsMbCodePageTag + 6)), 1953985605LL);
  v7 = (void *)v27;
  if ( !v27 )
    goto LABEL_24;
  v8 = *(_QWORD *)(a1 + 1016);
  if ( !*(_DWORD *)(v8 + 20) )
    goto LABEL_24;
  v9 = 0;
  v29 = *(_DWORD *)(v8 + 20);
  *Pool2 = &v29;
  Pool2[1] = (unsigned int *)4;
  v10 = v29;
  if ( v29 )
  {
    do
    {
      v30 = 0;
      v11 = v9;
      v12 = v27 + 24LL * v9;
      *(_DWORD *)v12 = *(_DWORD *)(*(_QWORD *)v8 + 4LL * v9);
      if ( ((int (__fastcall *)(__int64, __int64, __int64, int *))off_140C020E8[0])(1LL, 24LL, v12, &v30) < 0 )
        v13 = L"Unknown";
      else
        v13 = *(const WCHAR **)(v12 + 16);
      v14 = -1LL;
      v3 = 0;
      do
        ++v14;
      while ( v13[v14] );
      ++v9;
      v15 = 2 * (v11 + 1);
      Pool2[v15] = (unsigned int *)v13;
      Pool2[v15 + 1] = (unsigned int *)(unsigned int)(2 * v14 + 2);
      v10 = v29;
    }
    while ( v9 < v29 );
    v2 = v26;
  }
  EtwpLogKernelEvent((__int64)Pool2, EtwpHostSiloState, a2, v10 + 1, 0xF30u, 0x401802u);
  if ( *(_QWORD *)(a1 + 24) != 1LL )
    goto LABEL_24;
  v16 = 16 * v29 + 24;
  v5 = (_DWORD *)ExAllocatePool2(64LL, v16, 1953985605LL);
  if ( !v5 || !v2 )
    goto LABEL_24;
  v17 = (_QWORD *)(v8 + 24);
  while ( 1 )
  {
    if ( !*v17 )
      goto LABEL_22;
    *(_QWORD *)v5 = *v17;
    if ( ((int (__fastcall *)(__int64, _QWORD, _DWORD *, int *))off_140C020E8[0])(51LL, v16, v5, &v30) < 0 )
      goto LABEL_22;
    v18 = v5 + 4;
    Pool2[1] = (unsigned int *)4;
    Pool2[2] = v5 + 4;
    *Pool2 = v5 + 2;
    v19 = 0;
    Pool2[3] = (unsigned int *)4;
    v20 = v5[4];
    if ( v20 )
      break;
LABEL_21:
    EtwpLogKernelEvent((__int64)Pool2, EtwpHostSiloState, a2, 2 * v20 + 2, 0xF31u, 0x401802u);
LABEL_22:
    ++v3;
    ++v17;
    if ( v3 >= v2 )
      goto LABEL_23;
  }
  while ( 1 )
  {
    v21 = 4LL * v19;
    v22 = v19;
    if ( !BYTE1(v5[v21 + 9]) )
      break;
    v23 = 2 * v19++;
    v24 = 2 * (v23 + 2);
    Pool2[v24] = &v5[4 * v22 + 8];
    Pool2[v24 + 1] = (unsigned int *)4;
    v25 = 2 * ((unsigned int)v23 + 3LL);
    Pool2[v25] = &v5[v21 + 6];
    Pool2[v25 + 1] = (unsigned int *)8;
    v20 = *v18;
    if ( v19 >= *v18 )
      goto LABEL_21;
  }
LABEL_23:
  v7 = (void *)v27;
LABEL_24:
  ExFreePoolWithTag(Pool2, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
