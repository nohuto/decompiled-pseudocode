/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C01548A0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0168074 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0168340 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0054178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00541A0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0054500 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0058230 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(char *a1, __int64 a2, int a3, _OWORD *a4, int a5, _QWORD *a6)
{
  int v8; // edx
  int v10; // edx
  int v11; // ebx
  CDeviceIdentity **v12; // rsi
  int v13; // edx
  _QWORD *v14; // r13
  unsigned int v15; // eax
  ULONG64 v16; // rax
  int v17; // ecx
  WCHAR *v18; // rdx
  ULONG64 v19; // r8
  _BYTE **v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // r9d
  int v24; // [rsp+44h] [rbp-134h]
  __int64 v25; // [rsp+48h] [rbp-130h] BYREF
  int v26; // [rsp+50h] [rbp-128h]
  PVOID Object; // [rsp+58h] [rbp-120h] BYREF
  int v28; // [rsp+60h] [rbp-118h]
  __int64 v29; // [rsp+68h] [rbp-110h]
  __int64 p_DestinationString; // [rsp+70h] [rbp-108h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-100h] BYREF
  _QWORD *v32; // [rsp+88h] [rbp-F0h]
  UNICODE_STRING SourceString; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v34[18]; // [rsp+A0h] [rbp-D8h] BYREF

  v26 = a3;
  v25 = a2;
  v32 = a6;
  v28 = a3;
  v29 = (__int64)a6;
  Object = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 40, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 41, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    }
    return 3221225485LL;
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v11 >= 0 )
  {
    v12 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v12) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v26) & *((_DWORD *)v12 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = v25;
          *(_OWORD *)v34 = *a4;
          *(_OWORD *)&v34[2] = a4[1];
          *(_OWORD *)&v34[4] = a4[2];
          *(_OWORD *)&v34[6] = a4[3];
          *(_OWORD *)&v34[8] = a4[4];
          *(_OWORD *)&v34[10] = a4[5];
          *(_OWORD *)&v34[12] = a4[6];
          *(_OWORD *)&v34[14] = a4[7];
          *(_OWORD *)&v34[16] = a4[8];
          v14 = (_QWORD *)v29;
          v15 = v26;
LABEL_27:
          if ( v11 >= 0 )
          {
            v25 = 0LL;
            v11 = RIMCreateDev(v12, v15, p_DestinationString, 0, 1, (__int64)v34, &v25);
            if ( v11 >= 0 )
            {
              if ( a5 )
              {
                v21 = v25;
                if ( (unsigned __int64)v14 >= MmUserProbeAddress )
                  v14 = (_QWORD *)MmUserProbeAddress;
                *v14 = *(_QWORD *)(v25 + 16);
              }
              else
              {
                v21 = v25;
                if ( (v34[1] & 0x400000000LL) != 0 )
                  v22 = *(_QWORD *)(v25 + 24);
                else
                  v22 = *(_QWORD *)(v25 + 16);
                *v32 = v22;
              }
              if ( v12[80] || *((_DWORD *)v12 + 216) )
                *(_DWORD *)(v21 + 184) |= 0x20000u;
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_47;
        }
        v16 = v25;
        if ( v25 >= MmUserProbeAddress )
          v16 = MmUserProbeAddress;
        v17 = *(_DWORD *)v16;
        v24 = *(_DWORD *)v16;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)v16;
        v18 = *(WCHAR **)(v16 + 8);
        SourceString.Buffer = v18;
        if ( ((unsigned __int8)v18 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
        v20 = (_BYTE **)MmUserProbeAddress;
        if ( v19 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v24) )
        {
          if ( (v17 & 1) != 0 )
            goto LABEL_21;
          if ( v19 > (unsigned __int64)v18 )
          {
LABEL_23:
            DestinationString.MaximumLength = SourceString.Length;
            DestinationString.Length = SourceString.Length;
            DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
            if ( DestinationString.Buffer )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = (__int64)&DestinationString;
            }
            else
            {
              v11 = -1073741801;
            }
            v12 = (CDeviceIdentity **)Object;
            v14 = (_QWORD *)v29;
            v15 = v26;
            goto LABEL_27;
          }
        }
        if ( (v17 & 1) == 0 )
        {
LABEL_22:
          **v20 = 0;
          goto LABEL_23;
        }
LABEL_21:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1227);
        v20 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_22;
      }
      v11 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 42;
LABEL_46:
        LOBYTE(v13) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, v23, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v11 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 43;
        goto LABEL_46;
      }
    }
LABEL_47:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v12 + 13));
    ObfDereferenceObject(v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v10, 1, 44, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v11);
  }
  return (unsigned int)v11;
}
