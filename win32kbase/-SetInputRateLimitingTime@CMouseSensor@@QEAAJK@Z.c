__int64 __fastcall CMouseSensor::SetInputRateLimitingTime(CMouseSensor *this, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  _InterlockedExchange64((volatile __int64 *)this + 176, gliQpcFreq.QuadPart * (unsigned __int64)(a2 / 0x3E8) / 0x3E8);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 64LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v3;
    v7 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029C984, 0, 0, 3u, &v5);
  }
  return 0LL;
}
