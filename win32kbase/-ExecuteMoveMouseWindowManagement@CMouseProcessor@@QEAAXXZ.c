void __fastcall CMouseProcessor::ExecuteMoveMouseWindowManagement(CMouseProcessor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[16]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v10[96]; // [rsp+40h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-28h]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029DD6E, 0, 0, 2u, &v11);
  v12 = 0LL;
  v11 = 0LL;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v10, (__int64)&v11, 4, 0x900u);
  if ( IS_USERCRIT_OWNED_AT_ALL(v3, v2, v4, v5) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9, v6, v7, v8);
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v10, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  }
  else
  {
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v10, 0LL);
  }
}
