/*
 * XREFs of _lambda_cd4ceeda7ae5b80651f3e170997747c4_::operator() @ 0x1C00DF1E8
 * Callers:
 *     _lambda_cd4ceeda7ae5b80651f3e170997747c4_::_lambda_invoker_cdecl_ @ 0x1C00DF1D0 (_lambda_cd4ceeda7ae5b80651f3e170997747c4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00397E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0039A94 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall lambda_cd4ceeda7ae5b80651f3e170997747c4_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  int v4; // edx
  int v5; // r8d

  if ( !*(_DWORD *)(a2 + 1056) )
  {
    RIMLockExclusive(a2 + 104);
    if ( !*(_BYTE *)(a2 + 81) && !*(_BYTE *)(a2 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a2, i) < 0 )
        {
          LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v4,
              v5,
              (_DWORD)gRimLog,
              4,
              1,
              127,
              (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
              a2);
          }
        }
      }
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a2 + 104));
  }
}
