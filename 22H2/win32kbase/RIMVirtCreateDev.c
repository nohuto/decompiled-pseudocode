/*
 * XREFs of RIMVirtCreateDev @ 0x1C014FC98
 * Callers:
 *     RIMVirtDeviceClassNotify @ 0x1C016C954 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     rimDereferenceDev @ 0x1C0006708 (rimDereferenceDev.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C0055A8C (WPP_RECORDER_SF_S.c)
 *     rimCreateDev @ 0x1C0058AF4 (rimCreateDev.c)
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     RIMGetDeviceParent @ 0x1C006D900 (RIMGetDeviceParent.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00B3C90 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00B4840 (RIMFindSiblingPointerDeviceForMouse.c)
 *     ApiSetIsLegacyTouchPadDevice @ 0x1C00B4EC8 (ApiSetIsLegacyTouchPadDevice.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C00B8230 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C00B8250 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00BBC8C (RIMFreeSpecificDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161C70 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162C3C (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C01BA450 (FindRimDevByName.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        CDeviceIdentity **Object,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  char v8; // si
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v11; // rax
  unsigned int v12; // eax
  struct _KEVENT *v13; // rax
  int v14; // r9d
  __int64 v15; // r8
  __int64 HidDesc; // rax
  int v17; // edx
  __int64 v18; // rcx
  PVOID v19; // rsi
  char *v20; // rbx
  int IsLegacyTouchPadDevice; // ebx
  __int64 v22; // rcx
  int v23; // edx
  CDeviceIdentity *v24; // rcx
  CDeviceIdentity *v25; // rax
  CDeviceIdentity *v26; // rcx
  __int64 v29; // rdx
  PVOID Objecta[2]; // [rsp+30h] [rbp-38h] BYREF

  v8 = a2;
  if ( a2 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 994);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11 = Win32AllocPool(*(unsigned __int16 *)(a3 + 2), 0x70707352u);
    Dev[13].Buffer = (PWSTR)v11;
    if ( !v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          (_DWORD)gRimLog,
          2,
          1,
          23,
          (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
          *(_QWORD *)(a3 + 8));
      goto LABEL_54;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  v12 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  LODWORD(Dev[11].Buffer) = v12;
  if ( a4 )
  {
    LODWORD(Dev[11].Buffer) = v12 | 0x2020;
    LODWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1272);
    HIDWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1276);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(a5 + 1280);
    *(_DWORD *)(&Dev[83].MaximumLength + 1) = *(_DWORD *)(a5 + 1284);
    Dev[83].Buffer = (PWSTR)FindRimDevByName((PCUNICODE_STRING)(a5 + 1288));
    v13 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v13;
    if ( !v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 24;
LABEL_53:
        WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, v14, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
        goto LABEL_54;
      }
      goto LABEL_54;
    }
  }
  else
  {
    v13 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v13;
    if ( !v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 25;
        goto LABEL_53;
      }
      goto LABEL_54;
    }
  }
  KeInitializeEvent(v13, SynchronizationEvent, 0);
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc(Object, Dev, a5);
    *(_QWORD *)&Dev[29].Length = HidDesc;
    if ( !HidDesc )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 26;
        goto LABEL_53;
      }
LABEL_54:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev);
      rimDereferenceDev((__int64)Dev, v29);
      return 3221225495LL;
    }
  }
  if ( !LOBYTE(Dev[3].Length) )
  {
    Dev[29].Length = *(_WORD *)(a5 + 72);
    Dev[29].MaximumLength = *(_WORD *)(a5 + 76);
    *(&Dev[29].MaximumLength + 1) = *(_WORD *)(a5 + 80);
    LODWORD(Dev[29].Buffer) = *(_DWORD *)(a5 + 84);
    LOWORD(Dev[55].Buffer) = *(_WORD *)(a5 + 88);
    WORD1(Dev[55].Buffer) = *(_WORD *)(a5 + 92);
    WORD2(Dev[55].Buffer) = *(_WORD *)(a5 + 96);
    *(_DWORD *)&Dev[57].Length ^= (*(_DWORD *)&Dev[57].Length ^ *(_DWORD *)(a5 + 100)) & 1;
    if ( a4 )
    {
      LOWORD(Dev[55].Buffer) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v15)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 27, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse((__int64)Dev, Objecta) )
      {
        v19 = Objecta[0];
        v20 = (char *)Objecta[0] + 88;
        if ( !Objecta[0] )
          v20 = 0LL;
        if ( v20[48] != 2 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1119);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v20 + 58) + 40LL));
        ObfDereferenceObject(v19);
      }
      else
      {
        EtwTraceLegacyTouchPadDetectionStart(v18);
        IsLegacyTouchPadDevice = ApiSetIsLegacyTouchPadDevice((__int64)Dev);
        EtwTraceLegacyTouchPadDetectionStop(v22);
        if ( IsLegacyTouchPadDevice && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 28, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids);
        }
      }
    }
  }
  if ( LOBYTE(Dev[3].Length) == 1 )
  {
    LOBYTE(Dev[29].Length) = *(_BYTE *)(a5 + 72);
    HIBYTE(Dev[29].Length) = *(_BYTE *)(a5 + 76);
    Dev[29].MaximumLength = *(_WORD *)(a5 + 80);
    *(&Dev[29].MaximumLength + 1) = *(_WORD *)(a5 + 84);
    *(&Dev[29].MaximumLength + 2) = *(_WORD *)(a5 + 88);
    LOWORD(Dev[29].Buffer) = *(_WORD *)(a5 + 92);
    HIDWORD(Dev[29].Buffer) = *(_DWORD *)(a5 + 96);
    Dev[30].Length = *(_WORD *)(a5 + 100);
    Dev[30].MaximumLength = *(_WORD *)(a5 + 104);
    *(&Dev[30].MaximumLength + 1) = *(_WORD *)(a5 + 108);
    *(&Dev[30].MaximumLength + 2) = *(_WORD *)(a5 + 112);
    LOWORD(Dev[30].Buffer) = *(_WORD *)(a5 + 116);
    WORD1(Dev[30].Buffer) = *(_WORD *)(a5 + 120);
    HIDWORD(Dev[30].Buffer) = *(_DWORD *)(a5 + 124);
    *(_DWORD *)&Dev[31].Length = *(_DWORD *)(a5 + 128);
    *(_DWORD *)(&Dev[31].MaximumLength + 1) ^= (*(_DWORD *)(&Dev[31].MaximumLength + 1) ^ *(_DWORD *)(a5 + 132)) & 1;
  }
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_54;
  *(_QWORD *)&Dev[21].Length = Object;
  v25 = Object[53];
  if ( v25 )
  {
    do
    {
      v24 = v25;
      v25 = (CDeviceIdentity *)*((_QWORD *)v25 + 5);
    }
    while ( v25 );
    *((_QWORD *)v24 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v24, *(struct RawInputManagerDeviceObject **)&Dev[2].Length);
  v26 = Object[80];
  if ( !v26 || *((_DWORD *)Object + 216) || a4 == 0 )
  {
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1u);
    v26 = Object[80];
  }
  if ( !v26 && !*((_DWORD *)Object + 216) && a4 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2u);
  *a6 = Dev;
  return 0LL;
}
