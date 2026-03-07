void __fastcall FxIFRReplay(unsigned __int64 LoggerHandle)
{
  signed int v2; // ebx
  signed int v3; // eax
  wchar_t *Pool2; // rax
  wchar_t *v5; // rdi
  const wchar_t *v6; // rsi
  unsigned int v7; // r8d
  _WDF_IFR_HEADER *v8; // r14
  int globals; // eax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  __int64 v12; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-E0h]
  unsigned int multiStringLength; // [rsp+40h] [rbp-C0h] BYREF
  _STRING currentDriverAnsi; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *v17; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING currentDriverUnicode; // [rsp+60h] [rbp-A0h] BYREF
  _FX_DRIVER_GLOBALS fxGlobalsForReplay; // [rsp+70h] [rbp-90h] BYREF
  char driverChar[32]; // [rsp+270h] [rbp+170h] BYREF

  multiStringLength = 0;
  memset(&fxGlobalsForReplay, 0, 24);
  fxGlobalsForReplay.DestroyEvent.m_DbgFlagIsInitialized = 0;
  currentDriverUnicode = 0LL;
  currentDriverAnsi = 0LL;
  memset(&fxGlobalsForReplay.WdfHandleMask, 0, 224);
  memset(&fxGlobalsForReplay.ThreadTableLock.m_Lock, 0, 224);
  fxGlobalsForReplay.ThreadTableLock.m_DbgFlagIsInitialized = 1;
  fxGlobalsForReplay.WdfLogHeader = 0LL;
  if ( LoggerHandle )
  {
    if ( unk_1C009FF60 )
      WPP_IFR_SF_(&fxGlobalsForReplay, 2u, 0x16u, 0xEu, WPP_TracingIfrReplay_cpp_Traceguids);
    v3 = FxIFRGetDriverMultiString(0, 0LL, &multiStringLength);
    v2 = v3;
    if ( v3 == -2147483643 || v3 == -1073741789 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, multiStringLength, 1733064774LL);
      v17 = Pool2;
      v5 = Pool2;
      if ( Pool2 )
      {
        v2 = FxIFRGetDriverMultiString(multiStringLength, Pool2, &multiStringLength);
        if ( v2 >= 0 )
        {
          v6 = v5;
          if ( *v5 )
          {
            do
            {
              RtlInitUnicodeString(&currentDriverUnicode, v6);
              *(_QWORD *)&currentDriverAnsi.Length = 0x200000LL;
              currentDriverAnsi.Buffer = driverChar;
              memset(driverChar, 0, sizeof(driverChar));
              v2 = RtlUnicodeStringToAnsiString(&currentDriverAnsi, &currentDriverUnicode, 0);
              if ( v2 >= 0 )
              {
                v8 = FxIFRCreateSnapshot(currentDriverAnsi.Buffer, &fxGlobalsForReplay);
                if ( v8 )
                {
                  WPP_IFR_SF_s(&fxGlobalsForReplay, 4u, v7, 0xFu, traceGuid, driverChar);
                  globals = FxIFRSendRecordsToWpp(LoggerHandle, v8);
                  v2 = globals;
                  if ( globals >= 0 )
                    WPP_IFR_SF_s(&fxGlobalsForReplay, 4u, v11, 0x11u, traceGuida, driverChar);
                  else
                    WPP_IFR_SF_sd(
                      &fxGlobalsForReplay,
                      v10,
                      0x16u,
                      0x10u,
                      WPP_TracingIfrReplay_cpp_Traceguids,
                      driverChar,
                      globals);
                  ExFreePoolWithTag(v8, 0x674C7846u);
                }
              }
              v12 = -1LL;
              do
                ++v12;
              while ( v6[v12] );
              v6 += v12 + 1;
            }
            while ( *v6 );
            v5 = v17;
          }
        }
        ExFreePoolWithTag(v5, 0x674C7846u);
      }
      else
      {
        v2 = -1073741670;
      }
    }
  }
  else
  {
    v2 = -1073741816;
  }
  WPP_IFR_SF_D(&fxGlobalsForReplay, 4u, 0x16u, 0x12u, WPP_TracingIfrReplay_cpp_Traceguids, v2);
}
