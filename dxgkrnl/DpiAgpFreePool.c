/*
 * XREFs of DpiAgpFreePool @ 0x1C03A2AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpFreePool(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  char v4; // bp
  __int64 v5; // rsi
  unsigned int *v6; // rdi
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  void *v9; // rcx
  unsigned int *v11; // rcx
  void **v12; // rax

  v2 = 0;
  v4 = 0;
  if ( !a1 || !a2 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5
    || *(_DWORD *)(v5 + 16) != 1953656900
    || *(_DWORD *)(v5 + 20) != 2
    || !*(_QWORD *)(v5 + 720)
    || !*(_QWORD *)(v5 + 736) )
  {
    return (unsigned int)-1073741811;
  }
  KeWaitForSingleObject((PVOID)(v5 + 2600), Executive, 0, 0, 0LL);
  v6 = *(unsigned int **)(v5 + 2584);
  v7 = v6;
  v8 = *(unsigned int **)v6;
  if ( *(unsigned int **)v6 != v6 )
  {
    while ( 1 )
    {
      v9 = (void *)*((_QWORD *)v6 + 9);
      if ( v9 == a2 )
        break;
      v6 = v8;
      v8 = *(unsigned int **)v8;
      if ( v8 == v7 )
        goto LABEL_11;
    }
    v4 = 1;
    if ( *((_BYTE *)v6 + 60) == 1 )
      MmUnmapIoSpace(v9, v6[14]);
    else
      MmUnmapLockedPages(v9, *((PMDL *)v6 + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v5 + 736))(
      *(_QWORD *)(v5 + 680),
      *((_QWORD *)v6 + 3),
      (v6[14] >> 12) + ((v6[14] & 0xFFF) != 0),
      0LL);
    IoFreeMdl(*((PMDL *)v6 + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD))(v5 + 720))(*(_QWORD *)(v5 + 680), *((_QWORD *)v6 + 3));
    v11 = *(unsigned int **)v6;
    if ( *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6 || (v12 = (void **)*((_QWORD *)v6 + 1), *v12 != v6) )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    ExFreePoolWithTag(v6, 0x74727044u);
  }
LABEL_11:
  KeReleaseMutex((PRKMUTEX)(v5 + 2600), 0);
  if ( !v4 )
  {
LABEL_12:
    v2 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v2;
}
