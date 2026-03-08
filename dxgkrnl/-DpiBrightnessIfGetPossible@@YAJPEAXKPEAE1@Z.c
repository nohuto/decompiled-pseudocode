/*
 * XREFs of ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C039D210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetPossible(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int16 v10; // ax
  _QWORD *v11; // rbx
  int v12; // esi
  __int64 (__fastcall *v13)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *); // rax
  __int64 v14; // rcx

  v4 = a1[8];
  v7 = 0LL;
  v8 = 0LL;
  v10 = *(_WORD *)(v4 + 4682);
  if ( v10 == 2 )
    v7 = v4 + 4680;
  if ( v10 == 1 )
    v8 = v4 + 4680;
  v11 = (_QWORD *)(v7 + 32);
  if ( (!v7 || !*v11) && (!v8 || !*(_QWORD *)(v8 + 32)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v4 + 4408), Executive, 0, 0, 0LL);
  v12 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  if ( v12 >= 0 )
  {
    if ( v7 && (v13 = (__int64 (__fastcall *)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *))*v11) != 0LL )
    {
      v14 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *))(v8 + 32);
      v14 = *(_QWORD *)(v8 + 8);
    }
    v12 = v13(v14, a2, a3, a4);
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  KeReleaseMutex((PRKMUTEX)(v4 + 4408), 0);
  return (unsigned int)v12;
}
