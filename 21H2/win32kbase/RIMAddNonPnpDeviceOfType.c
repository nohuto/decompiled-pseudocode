/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0154F10
 * Callers:
 *     <none>
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
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0058230 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  struct _UNICODE_STRING *v5; // r15
  int v7; // edx
  int v8; // ebx
  CDeviceIdentity **v9; // rsi
  int v10; // edx
  int v11; // ecx
  WCHAR *Buffer; // rdx
  ULONG64 v13; // r8
  _BYTE **v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // rdx
  int v17; // r9d
  int v19; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v5 = a2;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 31, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v9) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v9 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a4 )
        {
          p_DestinationString = v5;
LABEL_23:
          if ( v8 >= 0 )
          {
            v22 = 0LL;
            v8 = RIMCreateDev(v9, a3, (__int64)p_DestinationString, 1, 0, 0LL, &v22);
            if ( v8 >= 0 )
            {
              v15 = v22;
              *(_DWORD *)(v22 + 184) |= 1u;
              v8 = rimOnPnpArrived(v9, v15, (void *)0xFFFFFFFFFFFFFFFFLL);
              if ( v8 >= 0 )
              {
                if ( a4 )
                {
                  v16 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v16 = (_QWORD *)MmUserProbeAddress;
                  *v16 = *(_QWORD *)(v15 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v15 + 16);
                }
              }
              if ( v8 < 0 )
                RIMFreeDev((__int64)v9, v15);
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_40;
        }
        if ( (unsigned __int64)v5 >= MmUserProbeAddress )
          v5 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v11 = *(_DWORD *)&v5->Length;
        v19 = *(_DWORD *)&v5->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v5->Length;
        Buffer = v5->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (ULONG64)Buffer + (unsigned __int16)v11 + 2;
        v14 = (_BYTE **)MmUserProbeAddress;
        if ( v13 < MmUserProbeAddress && (unsigned __int16)v11 <= HIWORD(v19) )
        {
          if ( (v11 & 1) != 0 )
            goto LABEL_17;
          if ( v13 > (unsigned __int64)Buffer )
          {
LABEL_19:
            DestinationString.MaximumLength = SourceString.Length;
            DestinationString.Length = SourceString.Length;
            DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
            if ( DestinationString.Buffer )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
            }
            else
            {
              v8 = -1073741801;
            }
            v9 = (CDeviceIdentity **)Object;
            goto LABEL_23;
          }
        }
        if ( (v11 & 1) == 0 )
        {
LABEL_18:
          **v14 = 0;
          goto LABEL_19;
        }
LABEL_17:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 899);
        v14 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_18;
      }
      v8 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 32;
LABEL_39:
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, v17, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v8 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 33;
        goto LABEL_39;
      }
    }
LABEL_40:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v9 + 13));
    ObfDereferenceObject(v9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v7, 1, 34, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v8);
  }
  return (unsigned int)v8;
}
