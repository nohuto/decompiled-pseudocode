/*
 * XREFs of RIMResetPointerDevices @ 0x1C01A7E40
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00397E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage @ 0x1C00DF2DC (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage.c)
 *     RIMEndAllActiveContacts @ 0x1C01A4BE0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 */

__int64 __fastcall RIMResetPointerDevices(char *a1, int a2)
{
  int v2; // r14d
  int v4; // edx
  int v5; // esi
  int v6; // r8d
  _QWORD *v7; // rdi
  int v8; // edx
  __int64 i; // rbx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      155,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v5 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v7 + 81) || *((_BYTE *)v7 + 82) )
    {
      v5 = -1073741637;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          156,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v7 + 95));
      for ( i = v7[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
        {
          if ( (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage() )
          {
            if ( v2 == 1 )
            {
              RIMSuppressAllActiveContacts((struct RawInputManagerObject *)v7);
            }
            else
            {
              if ( v2 )
              {
                v5 = -1073741811;
                break;
              }
              RIMEndAllActiveContacts((__int64)v7);
            }
          }
          else
          {
            rimEndAllActiveContactsWorker((struct RawInputManagerObject *)v7);
          }
        }
      }
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v7 + 95));
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v7 + 13));
    ObfDereferenceObject(v7);
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      157,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
