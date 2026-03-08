/*
 * XREFs of DwmSyncHitTestQuery @ 0x1C0270AE0
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BBA1C (xxxDCETrackCaptionButton.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E6300 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C001D800 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C001D830 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmSyncHitTestQuery(
        PVOID Object,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v13; // edi
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-81h] BYREF
  struct _PORT_MESSAGE v17; // [rsp+40h] [rbp-71h] BYREF
  int v18; // [rsp+68h] [rbp-49h]
  __int64 v19; // [rsp+6Ch] [rbp-45h]
  int v20; // [rsp+74h] [rbp-3Dh]
  __int64 v21; // [rsp+78h] [rbp-39h]
  __int64 v22; // [rsp+80h] [rbp-31h]
  __int64 v23; // [rsp+88h] [rbp-29h]
  int v24; // [rsp+90h] [rbp-21h]
  int v25; // [rsp+94h] [rbp-1Dh]
  int v26; // [rsp+98h] [rbp-19h]

  v13 = -1073741823;
  if ( Object )
  {
    v13 = DwmSyncLPCAllowed();
    if ( v13 >= 0 )
    {
      memset_0(&v17, 0, 0x5CuLL);
      v17.u1.Length = 6029364;
      v17.u2.s2.Type = 0x8000;
      v22 = a5;
      v23 = a6;
      v24 = a7;
      v18 = 1073741848;
      v19 = a2;
      v20 = a3;
      v21 = a4;
      v16 = 92LL;
      v14 = LpcSendWaitReceivePort(Object, 0x20000LL, &v17, &v17, &v16, 0LL);
      v13 = SyncLpcCheckNtStatus(v14, &v17);
      if ( v13 >= 0 )
      {
        *a8 = v25;
        *a9 = v26;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
