/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C0178980
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0174E60 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, _OWORD *a3)
{
  _OWORD *v3; // r12
  int v5; // edi
  _BYTE *v6; // r13
  char *v7; // r14
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  PVOID v11; // rsi
  char *v12; // rcx
  _UNKNOWN **v13; // r8
  char v14; // dl
  PVOID Object[7]; // [rsp+50h] [rbp-38h] BYREF
  char *v17; // [rsp+98h] [rbp+10h]
  PVOID v18; // [rsp+A8h] [rbp+20h] BYREF

  v17 = a2;
  v3 = a3;
  v18 = 0LL;
  Object[0] = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      141,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v18);
  if ( v5 >= 0 )
  {
    v6 = v18;
    v7 = (char *)v18 + 104;
    Object[1] = (char *)v18 + 104;
    RIMLockExclusive((__int64)v18 + 104);
    if ( v6[81] )
    {
      v5 = -1073741637;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (_DWORD)gRimLog,
          3,
          1,
          143,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
    }
    else
    {
      v5 = RawInputManagerDeviceObjectResolveHandle(v17, 3u, 1, Object);
      if ( v5 >= 0 )
      {
        v11 = Object[0];
        if ( Object[0] )
          v12 = (char *)Object[0] + 72;
        else
          v12 = 0LL;
        if ( (*((_DWORD *)v12 + 50) & 0x80u) == 0 )
        {
          v5 = -1073741637;
          LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v13 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              (_DWORD)v13,
              (_DWORD)gRimLog,
              3,
              1,
              142,
              (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
          }
        }
        else
        {
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_OWORD *)MmUserProbeAddress;
          *v3 = *(_OWORD *)(*((_QWORD *)v12 + 59) + 140LL);
        }
        ObfDereferenceObject(v11);
      }
    }
    *((_QWORD *)v7 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x90u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v5);
  return (unsigned int)v5;
}
