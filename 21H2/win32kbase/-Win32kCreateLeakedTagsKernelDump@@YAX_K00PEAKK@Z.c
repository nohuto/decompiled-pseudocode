/*
 * XREFs of ?Win32kCreateLeakedTagsKernelDump@@YAX_K00PEAKK@Z @ 0x1C0146710
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Win32kCreateLeakedTagsKernelDump(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, unsigned int a5)
{
  unsigned int *v5; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp-10h]
  int v7; // [rsp+5Ch] [rbp-Ch]

  v7 = 0;
  v5 = a4;
  v6 = 4 * a5;
  DbgkWerCaptureLiveKernelDump(
    L"win32k.sys",
    171LL,
    (unsigned int)gSessionId,
    a1,
    a2,
    a3,
    &v5,
    Win32kLeakTrackingLiveDumpCallback,
    0);
}
