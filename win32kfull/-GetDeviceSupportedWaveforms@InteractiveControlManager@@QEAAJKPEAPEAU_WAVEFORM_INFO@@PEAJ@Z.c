/*
 * XREFs of ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C02435F0
 * Callers:
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01D3030 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ @ 0x1C0248458 (-GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceSupportedWaveforms(
        InteractiveControlManager *this,
        int a2,
        struct _WAVEFORM_INFO **a3,
        int *a4)
{
  int v4; // ebx
  int v5; // edi
  struct _WAVEFORM_INFO *v6; // r15
  unsigned int v11; // eax
  InteractiveControlDevice **v12; // rdx
  InteractiveControlDevice *v13; // rcx
  struct _WAVEFORM_INFO *SupportedWaveforms; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v19) = a2;
    v20 = (__int64)"InteractiveControlManager::GetDeviceSupportedWaveforms entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F10E,
      (__int64)a3,
      (__int64)a4,
      (void **)&v20,
      (__int64)&v19);
  }
  v11 = 0;
  v12 = (InteractiveControlDevice **)((char *)this + 40);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 )
    {
      if ( a2 == *((_DWORD *)v13 + 2) )
        break;
    }
    ++v11;
    ++v12;
    if ( v11 >= 5 )
      goto LABEL_11;
  }
  SupportedWaveforms = InteractiveControlDevice::GetSupportedWaveforms(v13);
  v16 = *(_QWORD *)(v15 + 384);
  v6 = SupportedWaveforms;
  if ( v16 )
    v5 = *(_DWORD *)(v16 + 88);
  v4 = 1;
LABEL_11:
  v17 = v4 == 0 ? 0xC000009D : 0;
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v5;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v19) = v17;
    v20 = (__int64)"InteractiveControlManager::GetDeviceSupportedWaveforms exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      (__int64)a3,
      (__int64)a4,
      (void **)&v20,
      (__int64)&v19);
  }
  return v17;
}
