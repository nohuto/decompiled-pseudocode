/*
 * XREFs of ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x1C039C0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3GetNitRanges(
        _QWORD *a1,
        unsigned int a2,
        struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *); // rax

  v3 = a1[8];
  KeWaitForSingleObject((PVOID)(v3 + 4408), Executive, 0, 0, 0LL);
  v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    if ( *(_WORD *)(v3 + 4682) == 3 )
      v9 = v3 + 4680;
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *))(v9 + 56);
      if ( v10 )
        v8 = v10(*(_QWORD *)(v9 + 8), a2, a3);
      else
        v8 = -1073741661;
    }
    else
    {
      v8 = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4408), 0);
  return v8;
}
