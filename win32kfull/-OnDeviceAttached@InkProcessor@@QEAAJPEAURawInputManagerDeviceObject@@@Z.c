/*
 * XREFs of ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0240D1C
 * Callers:
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200C6C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00F81C0 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C02409F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1C0240B7C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWriteTe.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0240C50 (--_EInkDevice@@UEAAPEAXI@Z.c)
 *     ??0InkDevice@@QEAA@XZ @ 0x1C0245D10 (--0InkDevice@@QEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0246650 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessor::OnDeviceAttached(InkProcessor ***this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  InkDevice *v7; // rax
  InkDevice *v8; // rax
  InkDevice *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  InkProcessor **v14; // rdx
  InkProcessor *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-21h] BYREF
  const char *v22; // [rsp+60h] [rbp-19h] BYREF
  InkDevice *v23; // [rsp+68h] [rbp-11h] BYREF
  const char *v24; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+78h] [rbp-1h] BYREF
  __int64 *v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+A0h] [rbp+27h]
  int v28; // [rsp+A4h] [rbp+2Bh]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    v7 = (InkDevice *)Win32AllocPoolZInit(168LL, 1349217865LL);
    if ( v7 && (v8 = InkDevice::InkDevice(v7), (v9 = v8) != 0LL) )
    {
      v10 = InkDevice::Initialize(v8, a2);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v14 = this[3];
        v15 = (InkDevice *)((char *)v9 + 88);
        if ( *v14 != (InkProcessor *)(this + 2) )
          __fastfail(3u);
        *((_QWORD *)v9 + 12) = v14;
        *(_QWORD *)v15 = this + 2;
        *v14 = v15;
        this[3] = (InkProcessor **)v15;
        InkFeedbackServer::AddInkFeedbackProvider((InkFeedbackServer *)(this + 12), (InkDevice *)((char *)v9 + 32));
        if ( (unsigned int)dword_1C03570E0 > 4 )
        {
          v22 = (const char *)a2;
          v24 = "Ink device attached";
          v21 = (__int64)v9 + 32;
          v23 = v9;
          LODWORD(v20) = v6;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v16,
            byte_1C031EFBD,
            v17,
            v18,
            (__int64)&v20,
            (void **)&v24,
            (__int64)&v23,
            (__int64)&v21,
            (__int64)&v22);
        }
      }
      else
      {
        if ( (unsigned int)dword_1C03570E0 > 2 )
        {
          v21 = (__int64)a2;
          v22 = "Failed to initialize ink device";
          LODWORD(v20) = v10;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
            v11,
            byte_1C031F086,
            v12,
            v13,
            (__int64)&v20,
            (void **)&v22,
            (__int64)&v21);
        }
        InkDevice::`vector deleting destructor'(v9, 1);
      }
    }
    else
    {
      v6 = -1073741801;
      if ( (unsigned int)dword_1C03570E0 > 2 )
      {
        v28 = 0;
        v26 = &v20;
        LODWORD(v20) = -1073741801;
        v27 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C03570E0,
          (unsigned __int8 *)dword_1C031DA06,
          0LL,
          0LL,
          3u,
          &v25);
      }
    }
  }
  else
  {
    v6 = -1073741823;
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      LODWORD(v20) = -1073741823;
      v21 = (__int64)"Ink processor not enabled";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)&dword_1C03570E0,
        byte_1C031EF8B,
        v4,
        v5,
        (__int64)&v20,
        (void **)&v21);
    }
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
  return v6;
}
