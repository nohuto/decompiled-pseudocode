/*
 * XREFs of ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C0251F5C
 * Callers:
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01FA310 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C02516B4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceSupportedWaveforms(
        InteractiveControlManager *this,
        int a2,
        struct _WAVEFORM_INFO **a3,
        int *a4)
{
  int v4; // ebx
  int v5; // edi
  struct _WAVEFORM_INFO *v6; // rsi
  unsigned int v11; // edx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( (unsigned int)dword_1C032B2F8 > 4 )
  {
    LODWORD(v17) = a2;
    v18 = (__int64)"InteractiveControlManager::GetDeviceSupportedWaveforms entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032B2F8,
      byte_1C02F4156,
      (__int64)a3,
      (__int64)a4,
      (void **)&v18,
      (__int64)&v17);
  }
  v11 = 0;
  v12 = (__int64 *)((char *)this + 40);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 )
    {
      if ( a2 == *(_DWORD *)(v13 + 8) )
        break;
    }
    ++v11;
    ++v12;
    if ( v11 >= 5 )
      goto LABEL_11;
  }
  v14 = *(_QWORD *)(v13 + 384);
  if ( v14 )
  {
    v6 = *(struct _WAVEFORM_INFO **)(v14 + 80);
    v5 = *(_DWORD *)(v14 + 88);
  }
  v4 = 1;
LABEL_11:
  v15 = v4 == 0 ? 0xC000009D : 0;
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v5;
  if ( (unsigned int)dword_1C032B2F8 > 4 )
  {
    LODWORD(v17) = v15;
    v18 = (__int64)"InteractiveControlManager::GetDeviceSupportedWaveforms exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032B2F8,
      byte_1C02F411D,
      (__int64)a3,
      (__int64)a4,
      (void **)&v18,
      (__int64)&v17);
  }
  return v15;
}
