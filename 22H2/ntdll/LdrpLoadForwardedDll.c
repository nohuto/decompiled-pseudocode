/*
 * XREFs of LdrpLoadForwardedDll @ 0x180016C08
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180016E4C (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int appended; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v10[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v11; // [rsp+50h] [rbp-2B8h] BYREF
  int v12; // [rsp+58h] [rbp-2B0h]
  __int128 v13; // [rsp+60h] [rbp-2A8h]
  __int128 v14; // [rsp+70h] [rbp-298h]
  __int128 v15; // [rsp+80h] [rbp-288h]
  __int64 v16; // [rsp+90h] [rbp-278h]
  int v17; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v18; // [rsp+A8h] [rbp-260h]
  _WORD v19[128]; // [rsp+B0h] [rbp-258h] BYREF
  _UNICODE_STRING v20; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD v21[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v20.Buffer = v21;
  *(_DWORD *)&v20.Length = 0x1000000;
  v21[0] = 0;
  v18 = v19;
  v17 = 0x1000000;
  v19[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v17, a1);
  if ( appended >= 0 )
  {
    v11 = 72LL;
    v12 = 1;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    RtlActivateActivationContextUnsafeFast(&v11, *(_QWORD *)(a4 + 136));
    v10[0] = 0;
    appended = LdrpPreprocessDllName(&v17, &v20, a4, v10);
    if ( appended >= 0 )
      LdrpLoadDllInternal(&v20, a4, a3, a6, (__int64)&appended);
    RtlDeactivateActivationContextUnsafeFast(&v11);
  }
  if ( v19 != v18 )
    NtdllpFreeStringRoutine();
  v18 = v19;
  v17 = 0x1000000;
  v19[0] = 0;
  if ( v21 != v20.Buffer )
    NtdllpFreeStringRoutine();
  return (unsigned int)appended;
}
