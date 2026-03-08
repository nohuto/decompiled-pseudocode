/*
 * XREFs of ?CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004D3F0
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18004D474 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@34344@Z @ 0x1801CE524 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U2@@-$_tlgWriteTemplat.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::CheckAndNotifyAboutLongFrames(CPartitionVerticalBlankScheduler *this)
{
  unsigned int v1; // eax
  __int64 v3; // rsi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  DWORD CurrentProcessId; // r15d
  signed int LastError; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  DWORD v16; // [rsp+60h] [rbp-9h] BYREF
  __int64 v17; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v20[8]; // [rsp+80h] [rbp+17h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  DWORD pSessionId; // [rsp+D0h] [rbp+67h] BYREF
  int v23; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v24; // [rsp+E0h] [rbp+77h] BYREF
  DWORD v25; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *((_DWORD *)this + 1051);
  if ( v1 != -1 )
  {
    v3 = (unsigned int)CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS;
    v4 = (unsigned __int64)v1 << 8;
    v5 = *(_QWORD *)((char *)this + v4 + 120);
    v6 = (*(_QWORD *)((char *)this + v4 + 192) - *(_QWORD *)((char *)this + v4 + 168))
       / g_qpcFrequencyPerMillisecond.QuadPart;
    if ( *((_BYTE *)this + v4 + 269) && v6 > (unsigned int)CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS )
    {
      v7 = *((_DWORD *)this + 2338) + 1;
      *((_DWORD *)this + 2338) = v7;
      v8 = CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed;
      if ( !(v7 % CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed) )
      {
        v9 = *((_QWORD *)this + 8);
        if ( v5 > *(_QWORD *)(v9 + 296) )
        {
          *(_QWORD *)(v9 + 296) = v5;
          CurrentProcessId = GetCurrentProcessId();
          if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
          {
            LastError = GetLastError();
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
            if ( LastError >= 0 )
              LastError = -2003304445;
            ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
          }
          if ( (unsigned int)dword_1803E0B40 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803E0B40, 0x400000000000LL) )
          {
            v15 = *((_DWORD *)this + 2338) / v8;
            v17 = 0x1000000LL;
            v23 = v15;
            v25 = pSessionId;
            v18 = v6;
            v19 = v5;
            v24 = v8;
            v20[0] = v3;
            v16 = CurrentProcessId;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v12,
              (unsigned int)&unk_18037BF2B,
              v13,
              v14,
              (__int64)&v16,
              (__int64)&v25,
              (__int64)v20,
              (__int64)&v24,
              (__int64)&v19,
              (__int64)&v23,
              (__int64)&v18,
              (__int64)&v17);
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 2338) = 0;
    }
  }
}
