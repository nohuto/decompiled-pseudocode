/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C0185D28
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001ADA0 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00A726C (HmgIsObjectOwnedByW32Pid.c)
 *     Feature_439792958__private_IsEnabledDeviceUsage @ 0x1C00DC850 (Feature_439792958__private_IsEnabledDeviceUsage.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C017F2E4 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C017F36C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0185A30 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(struct OBJECT **this, unsigned int a2)
{
  struct OBJECT *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct HPATH__ *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v13[2]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-39h] BYREF
  struct OBJECT *v15; // [rsp+58h] [rbp-31h]
  int v16; // [rsp+F0h] [rbp+67h] BYREF
  int v17; // [rsp+100h] [rbp+77h] BYREF
  int v18; // [rsp+108h] [rbp+7Fh] BYREF

  SGDGetSessionState(this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[17], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[18], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[19], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[11], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[141], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[148], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[20], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[147], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[21], a2) )
    return 1LL;
  v4 = DC::prgnRao((DC *)this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v4, a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(this[62], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(this[262], a2) )
  {
    return 1LL;
  }
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[12], a2) )
  {
    if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
    {
      v16 = 0;
      v17 = 1;
      v13[0] = 0x1000000LL;
      v18 = 83417;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_1C0295566,
        v6,
        v7,
        (__int64)&v18,
        (__int64)v13,
        (__int64)&v17,
        (__int64)&v16);
    }
    return 1LL;
  }
  if ( (unsigned int)Feature_439792958__private_IsEnabledDeviceUsage() )
  {
    v9 = this[25];
    if ( v9 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v14, v9);
      if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v15, a2) )
      {
        if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
        {
          v16 = 1;
          v17 = 1;
          v13[0] = 0x1000000LL;
          v18 = 86327;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v10,
            byte_1C0295566,
            v11,
            v12,
            (__int64)&v18,
            (__int64)v13,
            (__int64)&v17,
            (__int64)&v16);
        }
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v14);
        return 1LL;
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v14);
    }
  }
  return 0LL;
}
