/*
 * XREFs of LogPageFaultInformation @ 0x1C0037B4C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B040 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U4@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@646664666664AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0033D48 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_1C0033D48.c)
 */

void __fastcall LogPageFaultInformation(int a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // [rsp+B0h] [rbp-80h] BYREF
  int v12; // [rsp+B4h] [rbp-7Ch] BYREF
  int v13; // [rsp+B8h] [rbp-78h] BYREF
  int v14; // [rsp+BCh] [rbp-74h] BYREF
  int v15; // [rsp+C0h] [rbp-70h] BYREF
  int v16; // [rsp+C4h] [rbp-6Ch] BYREF
  int v17; // [rsp+C8h] [rbp-68h] BYREF
  int v18; // [rsp+CCh] [rbp-64h] BYREF
  int v19; // [rsp+D0h] [rbp-60h] BYREF
  void *v20; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int16 *v24; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v25; // [rsp+100h] [rbp-30h] BYREF
  __int16 v26; // [rsp+130h] [rbp+0h] BYREF
  int v27; // [rsp+138h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1C0076048 > 5 )
  {
    v4 = tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL);
    v8 = 0LL;
    if ( v4 )
    {
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 80);
        v20 = *(void **)(v6 + 96);
      }
      else
      {
        v20 = 0LL;
      }
      v9 = *(_DWORD *)(v7 + 60);
      v21 = v8;
      v27 = v9 & 1;
      v12 = *(_DWORD *)(v7 + 56);
      v13 = *(_DWORD *)(v7 + 52);
      v14 = *(_DWORD *)(v7 + 48);
      v22 = *(_QWORD *)(v7 + 40);
      v15 = *(_DWORD *)(v7 + 32);
      v16 = *(_DWORD *)(v7 + 28);
      v17 = *(_DWORD *)(v7 + 24);
      v23 = *(_QWORD *)(v7 + 16);
      v18 = *(_DWORD *)(v7 + 8);
      v11 = v9 >> 1;
      v10 = *(_QWORD *)(a2 + 16);
      v19 = a1;
      v24 = *(unsigned __int16 **)(v10 + 1744);
      v25 = *(_QWORD *)(v10 + 404);
      v26 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v10,
        byte_1C00569E2,
        v5,
        v8,
        (__int64)&v26,
        (__int64)&v25,
        &v24,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v23,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v22,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v27,
        (__int64)&v21,
        &v20);
    }
  }
}
