/*
 * XREFs of ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C039CEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGet(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int16 v6; // ax
  __int64 v7; // rsi
  int v8; // edi
  int v9; // eax

  v2 = a1[8];
  v3 = 0LL;
  v6 = *(_WORD *)(v2 + 4682);
  if ( v6 == 2 )
    v3 = (_QWORD *)(v2 + 4680);
  v7 = 0LL;
  if ( v6 == 1 )
    v7 = v2 + 4680;
  if ( (!v3 || !v3[6]) && (!v7 || !*(_QWORD *)(v7 + 48)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v2 + 4408), Executive, 0, 0, 0LL);
  v8 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  if ( v8 >= 0 )
  {
    if ( *(_BYTE *)(v2 + 4401) )
    {
      v8 = 0;
      *a2 = *(_BYTE *)(v2 + 4403);
    }
    else
    {
      if ( v3 && v3[4] )
        v9 = ((__int64 (__fastcall *)(_QWORD, unsigned __int8 *))v3[6])(v3[1], a2);
      else
        v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(v7 + 48))(*(_QWORD *)(v7 + 8), a2);
      v8 = v9;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4408), 0);
  return (unsigned int)v8;
}
