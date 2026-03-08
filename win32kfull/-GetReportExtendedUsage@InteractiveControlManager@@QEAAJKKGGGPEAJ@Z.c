/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C0243814
 * Callers:
 *     NtUserInteractiveControlQueryUsage @ 0x1C01D6AC0 (NtUserInteractiveControlQueryUsage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0242DEC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$01@@55@Z @ 0x1C0243040 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$01@@U3@U3@@-$_tlgWrit.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C02433CC (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0248400 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1C024D65C (-ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportExtendedUsage(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int *a7)
{
  unsigned __int16 v7; // si
  unsigned __int16 v8; // di
  int Device; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  unsigned __int16 v16; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int16 v17; // [rsp+52h] [rbp-2Eh] BYREF
  __int16 v18; // [rsp+54h] [rbp-2Ch] BYREF
  int v19; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+5Ch] [rbp-24h] BYREF
  struct InteractiveControlDevice *v21; // [rsp+60h] [rbp-20h] BYREF
  struct InteractiveControlInput *v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23[2]; // [rsp+70h] [rbp-10h] BYREF

  v21 = 0LL;
  v7 = a4;
  v22 = 0LL;
  v8 = a3;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v20 = a2;
    v23[0] = (__int64)"InteractiveControlManager::GetReportExtendedUsage entry";
    v16 = a6;
    v17 = a5;
    v18 = a4;
    v19 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      (__int64)this,
      byte_1C031F3C5,
      a3,
      a4,
      (void **)v23,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v21, 0LL);
  v14 = Device;
  if ( Device < 0 )
  {
    if ( (unsigned int)dword_1C0357150 <= 2 )
      goto LABEL_11;
LABEL_10:
    v20 = Device;
    v23[0] = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F148,
      v12,
      v13,
      (void **)v23,
      (__int64)&v20);
    goto LABEL_11;
  }
  if ( !(unsigned int)InteractiveControlDevice::GetInputReport(v21, v8, &v22) )
  {
    v14 = -1073741811;
    goto LABEL_11;
  }
  Device = InteractiveControlParser::ExtractCustomUsage(
             *(PHIDP_PREPARSED_DATA *)(*((_QWORD *)v22 + 5) + 256LL),
             *((PCHAR *)v22 + 10),
             *((_DWORD *)v22 + 22),
             v7,
             a5,
             a6,
             a7);
  v14 = Device;
  if ( Device < 0 && (unsigned int)dword_1C0357150 > 2 )
    goto LABEL_10;
LABEL_11:
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v20 = *a7;
    v19 = v14;
    v23[0] = (__int64)"InteractiveControlManager::GetReportExtendedUsage exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F32E,
      v12,
      v13,
      (void **)v23,
      (__int64)&v19,
      (__int64)&v20);
  }
  return v14;
}
