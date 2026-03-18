/*
 * XREFs of ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5660
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0097320 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void __fastcall W32kBaseInputEnableCallback(const struct _GUID *a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CBaseInput *v4; // r9
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v5);
    if ( gpHidInput
      && CBaseInput::_sessionInitialized
      && dword_1C028D610
      && tlgKeywordOn((__int64)&dword_1C028D610, 1LL) )
    {
      CBaseInput::EnumDevices(
        v4,
        0LL,
        (unsigned __int8 (__fastcall *)(struct DEVICEINFO *, void *))lambda_ad107b90562675b8db474da7ac515daa_::_lambda_invoker_cdecl_);
    }
    CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v5, v2, v3);
  }
}
