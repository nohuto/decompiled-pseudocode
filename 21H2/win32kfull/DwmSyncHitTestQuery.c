/*
 * XREFs of DwmSyncHitTestQuery @ 0x1C00CA230
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0205BE8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00CCA80 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  _BYTE v17[92]; // [rsp+40h] [rbp-71h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    if ( !gbInVideoPnpCallout )
    {
      memset(v17, 0, sizeof(v17));
      *(_DWORD *)v17 = 6029364;
      *(_WORD *)&v17[4] = 0x8000;
      *(_QWORD *)&v17[64] = a5;
      *(_QWORD *)&v17[72] = a6;
      *(_DWORD *)&v17[80] = a7;
      *(_DWORD *)&v17[40] = 1073741848;
      *(_QWORD *)&v17[44] = a2;
      *(_DWORD *)&v17[52] = a3;
      *(_QWORD *)&v17[56] = a4;
      v16 = 92LL;
      v14 = ((__int64 (__fastcall *)(PVOID, __int64, _BYTE *, _BYTE *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
              Object,
              0x20000LL,
              v17,
              v17,
              &v16,
              0LL);
      v13 = SyncLpcCheckNtStatus(v14, (struct _PORT_MESSAGE *)v17);
      if ( v13 >= 0 )
      {
        *a8 = *(_DWORD *)&v17[84];
        *a9 = *(_DWORD *)&v17[88];
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
