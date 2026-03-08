/*
 * XREFs of WmipProcessLegacyEtwRegister @ 0x14084DA68
 * Callers:
 *     WmipLegacyEtwWorker @ 0x14084D950 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     EtwRegisterClassicProvider @ 0x140796FC0 (EtwRegisterClassicProvider.c)
 */

LONG __fastcall WmipProcessLegacyEtwRegister(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbp
  REGHANDLE v5; // rbx
  LONG result; // eax
  int v7; // ebx
  LARGE_INTEGER v8; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = a1[14];
  if ( v4 == a2 )
    a1[14] = -1LL;
  v5 = a1[13];
  a1[13] = 0LL;
  v8.QuadPart = v5;
  result = KeReleaseMutex(&WmipSMMutex, 0);
  if ( v5 )
    result = EtwUnregister(v5);
  if ( v4 == a2 )
  {
    v7 = EtwRegisterClassicProvider(
           a1 + 9,
           0LL,
           (void (__fastcall *)(ULONG_PTR, __int64, __int64 *, __int64))WmipLegacyEtwCallback,
           (__int64)a1,
           (__int128 **)&v8);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v7 < 0 )
      a1[14] = 0LL;
    else
      a1[13] = v8.QuadPart;
    return KeReleaseMutex(&WmipSMMutex, 0);
  }
  return result;
}
