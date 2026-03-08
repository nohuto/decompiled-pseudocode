/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02452F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C024475C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0244A40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0244B38 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C0244D34 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C0244DFC (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C0244EA8 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C0245044 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C024574C (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ProcessInkFeedbackCommand(__int64 a1, int a2, int *a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  int *v8; // rax
  int v9; // eax
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v24[4]; // [rsp+54h] [rbp-15h] BYREF
  __int64 v25; // [rsp+58h] [rbp-11h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+60h] [rbp-9h] BYREF
  const char *v27; // [rsp+68h] [rbp-1h] BYREF
  const char *v28; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+78h] [rbp+Fh] BYREF
  int *v30; // [rsp+98h] [rbp+2Fh]
  int v31; // [rsp+A0h] [rbp+37h]
  int v32; // [rsp+A4h] [rbp+3Bh]

  v6 = (unsigned int)(a2 - 3);
  if ( a2 == 3 )
  {
    if ( (_DWORD)a4 == 4 )
    {
      if ( (unsigned int)dword_1C03570E0 > 4 )
      {
        v14 = *a3;
        v23 = 0;
        LODWORD(v25) = v14;
        v28 = *(const char **)(a1 + 48);
        v27 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...";
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v6,
          byte_1C031F64C,
          (__int64)a3,
          (unsigned int)dword_1C03570E0,
          (__int64)&v23,
          (void **)&v27,
          (void **)&v28,
          (__int64)&ActiveCommandByTargetPointerId,
          (__int64)&v25);
      }
      if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 3, *a3) )
      {
        v7 = -1073741823;
        if ( (unsigned int)v12 <= 2 )
          return v7;
        v13 = "The specified pointer id already has an active IFC_HIDE_INK_CURSOR_START command";
LABEL_22:
        v23 = -1073741823;
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)v13;
        LODWORD(v25) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)v13,
          byte_1C031F6BA,
          v11,
          v12,
          (__int64)&v23,
          (void **)&ActiveCommandByTargetPointerId,
          (__int64)&v25);
        return v7;
      }
      v15 = Win32AllocPoolZInit(32LL, 1349217865LL);
      v19 = (void *)v15;
      if ( v15 )
      {
        *(_DWORD *)(v15 + 20) = 0;
        *(_QWORD *)(v15 + 24) = 0LL;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)v15 = 0LL;
        *(_DWORD *)(v15 + 16) = 3;
        *(_DWORD *)(v15 + 20) = *a3;
        *(_QWORD *)(v15 + 24) = KeGetCurrentThread();
        v7 = HideInkCursorProvider::DoHideInkCursorStart((HideInkCursorProvider *)a1, v16, v17, v18);
        if ( (v7 & 0x80000000) != 0 )
          Win32FreePool(v19);
        else
          InkFeedbackProviderBase::AddActiveCommand(
            (InkFeedbackProviderBase *)a1,
            (struct InkFeedbackProviderBase::ActiveCommand *)v19,
            v20,
            v21);
        return v7;
      }
      v7 = -1073741801;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v7;
      LODWORD(v25) = -1073741801;
    }
    else
    {
      v7 = -1073741811;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v7;
      LODWORD(v25) = -1073741811;
    }
    v8 = (int *)&v25;
    goto LABEL_30;
  }
  if ( a2 != 4 )
  {
    v7 = -1073741637;
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v27 = *(const char **)(a1 + 48);
      v28 = "Unsupported command";
      v24[0] = a2;
      v25 = a1;
      v23 = -1073741637;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v6,
        byte_1C031F5EE,
        (__int64)a3,
        a4,
        (__int64)&v23,
        (void **)&v28,
        (void **)&v27,
        (__int64)&v25,
        (__int64)v24);
    }
    return v7;
  }
  if ( (_DWORD)a4 != 4 )
  {
    v7 = -1073741811;
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      return v7;
    v23 = -1073741811;
    v8 = &v23;
LABEL_30:
    v32 = 0;
    v30 = v8;
    v31 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v29);
    return v7;
  }
  if ( (unsigned int)dword_1C03570E0 > 4 )
  {
    v9 = *a3;
    LODWORD(v25) = 0;
    v23 = v9;
    v27 = *(const char **)(a1 + 48);
    ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)"Processing ink feedback command: I"
                                                                                      "FC_HIDE_INK_CURSOR_STOP...";
    v28 = (const char *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v6,
      byte_1C031F64C,
      (__int64)a3,
      (unsigned int)dword_1C03570E0,
      (__int64)&v25,
      (void **)&ActiveCommandByTargetPointerId,
      (void **)&v27,
      (__int64)&v28,
      (__int64)&v23);
  }
  ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                      a1,
                                                                                      3,
                                                                                      *a3);
  if ( ActiveCommandByTargetPointerId )
  {
    v7 = HideInkCursorProvider::DoHideInkCursorStop((HideInkCursorProvider *)a1, v10, v11, v12);
    InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
      (InkFeedbackProviderBase *)a1,
      &ActiveCommandByTargetPointerId);
    return v7;
  }
  v7 = -1073741823;
  if ( (unsigned int)v12 > 2 )
  {
    v13 = "Active IFC_HIDE_INK_CURSOR_START command not found for the specified pointer id";
    goto LABEL_22;
  }
  return v7;
}
