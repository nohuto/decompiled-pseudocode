/*
 * XREFs of DpiIndirectCbForceDisplaySwitch @ 0x1C039FF80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0311340 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall DpiIndirectCbForceDisplaySwitch(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD v3[10]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 || !*(_BYTE *)(v1 + 1159) )
    return 3221225485LL;
  memset(v3, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v3[1]);
  v3[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v3[3]) = 56;
  LOBYTE(v3[6]) = -1;
  return DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v3, *(_QWORD *)(v1 + 5744));
}
