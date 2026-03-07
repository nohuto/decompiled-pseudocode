void __fastcall DisplayDiagnostics::Initialize(char *Context)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  v2 = DXGBLACKBOX::Initialize((DXGBLACKBOX *)Context);
  if ( v2 < 0 )
  {
    v6 = v2;
    WdLogSingleEntry1(2LL, v2);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          0,
          -1,
          (__int64)L"DXGBLACKBOX::Initialize() failed with Status : 0x%I64x",
          v6,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v3 = ExSubscribeWnfStateChange(Context + 64, &WNF_PO_POWER_BUTTON_STATE, 1LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    LongPowerButtonHoldListener::Stop((LongPowerButtonHoldListener *)(Context + 64));
    WdLogSingleEntry1(2LL, v4);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0,
          0,
          -1,
          (__int64)L"LongPowerButtonHoldListener::Start() failed with Status : 0x%I64x",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v5 = PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LIDSWITCH_STATE_RELIABILITY,
         DisplayDiagnostics::LidStateReliabilityChangeCallback,
         Context,
         0LL);
  if ( v5 < 0 )
  {
    v13 = v5;
    WdLogSingleEntry1(2LL, v5);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v15,
          v14,
          v16,
          0,
          0,
          -1,
          (__int64)L"PoRegisterPowerSettingCallback for GUID_LIDSWITCH_STATE_RELIABILITY failed with status:0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
