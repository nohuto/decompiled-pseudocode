/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0254080
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C025334C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0253718 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0253810 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C0253A04 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C0253ACC (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C0253B78 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C0253D14 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C0254558 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ProcessInkFeedbackCommand(
        HideInkCursorProvider *a1,
        int a2,
        int *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  struct _EVENT_DATA_DESCRIPTOR *v8; // rax
  int v9; // eax
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE v26[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+5Ch] [rbp-A4h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+64h] [rbp-9Ch] BYREF
  int v32; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+6Ch] [rbp-94h] BYREF
  int v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+74h] [rbp-8Ch] BYREF
  int v36; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+7Ch] [rbp-84h] BYREF
  int v38; // [rsp+80h] [rbp-80h] BYREF
  HideInkCursorProvider *v39; // [rsp+88h] [rbp-78h] BYREF
  void *v40; // [rsp+90h] [rbp-70h] BYREF
  const char *v41; // [rsp+98h] [rbp-68h] BYREF
  HideInkCursorProvider *v42; // [rsp+A0h] [rbp-60h] BYREF
  void *v43; // [rsp+A8h] [rbp-58h] BYREF
  const char *v44; // [rsp+B0h] [rbp-50h] BYREF
  const char *v45; // [rsp+B8h] [rbp-48h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+C0h] [rbp-40h] BYREF
  HideInkCursorProvider *v47; // [rsp+C8h] [rbp-38h] BYREF
  void *v48; // [rsp+D0h] [rbp-30h] BYREF
  const char *v49; // [rsp+D8h] [rbp-28h] BYREF
  const char *v50; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+E8h] [rbp-18h] BYREF
  int *v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+114h] [rbp+14h]
  char v55; // [rsp+118h] [rbp+18h] BYREF
  int *v56; // [rsp+138h] [rbp+38h]
  int v57; // [rsp+140h] [rbp+40h]
  int v58; // [rsp+144h] [rbp+44h]
  char v59; // [rsp+148h] [rbp+48h] BYREF
  int *v60; // [rsp+168h] [rbp+68h]
  int v61; // [rsp+170h] [rbp+70h]
  int v62; // [rsp+174h] [rbp+74h]

  v6 = (unsigned int)(a2 - 3);
  if ( a2 == 3 )
  {
    if ( (_DWORD)a4 != 4 )
    {
      v7 = -1073741811;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v7;
      v58 = 0;
      v33 = -1073741811;
      v56 = &v33;
      v8 = (struct _EVENT_DATA_DESCRIPTOR *)&v55;
      v57 = 4;
      goto LABEL_17;
    }
    if ( (unsigned int)dword_1C032B288 > 4 )
    {
      v14 = *a3;
      v35 = 0;
      v34 = v14;
      v48 = (void *)*((_QWORD *)a1 + 6);
      v49 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...";
      v47 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v6,
        byte_1C02F46D1,
        (__int64)a3,
        (unsigned int)dword_1C032B288,
        (__int64)&v35,
        (void **)&v49,
        &v48,
        (__int64)&v47,
        (__int64)&v34);
    }
    if ( !InkFeedbackProviderBase::FindActiveCommandByTargetPointerId((__int64)a1, 3, *a3) )
    {
      v18 = Win32AllocPoolZInit(32LL, 1349217865LL);
      v22 = v18;
      if ( v18 )
      {
        *(_DWORD *)(v18 + 16) = 0;
        *(_DWORD *)(v18 + 20) = 0;
        *(_QWORD *)(v18 + 24) = 0LL;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)v18 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      if ( v22 )
      {
        *(_DWORD *)(v22 + 16) = 3;
        *(_DWORD *)(v22 + 20) = *a3;
        *(_QWORD *)(v22 + 24) = KeGetCurrentThread();
        v7 = HideInkCursorProvider::DoHideInkCursorStart(a1, v19, v20, v21);
        if ( (v7 & 0x80000000) != 0 )
          Win32FreePool((void *)v22);
        else
          InkFeedbackProviderBase::AddActiveCommand(a1, (struct InkFeedbackProviderBase::ActiveCommand *)v22, v23, v24);
        return v7;
      }
      v7 = -1073741801;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v7;
      v62 = 0;
      v60 = &v38;
      v8 = (struct _EVENT_DATA_DESCRIPTOR *)&v59;
      v38 = -1073741801;
      v61 = 4;
LABEL_17:
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032B288, (unsigned __int8 *)dword_1C02F2FAC, 0LL, 0LL, 3u, v8);
      return v7;
    }
    v7 = -1073741823;
    if ( (unsigned int)v17 > 2 )
    {
      v36 = v16;
      v50 = "The specified pointer id already has an active IFC_HIDE_INK_CURSOR_START command";
      v37 = -1073741823;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v15,
        byte_1C02F4636,
        v16,
        v17,
        (__int64)&v37,
        (void **)&v50,
        (__int64)&v36);
    }
  }
  else
  {
    if ( a2 != 4 )
    {
      v7 = -1073741637;
      if ( (unsigned int)dword_1C032B288 > 2 )
      {
        v40 = (void *)*((_QWORD *)a1 + 6);
        v41 = "Unsupported command";
        v26[0] = a2;
        v39 = a1;
        v27 = -1073741637;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v6,
          byte_1C02F4673,
          (__int64)a3,
          a4,
          (__int64)&v27,
          (void **)&v41,
          &v40,
          (__int64)&v39,
          (__int64)v26);
      }
      return v7;
    }
    if ( (_DWORD)a4 != 4 )
    {
      v7 = -1073741811;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v7;
      v54 = 0;
      v28 = -1073741811;
      v52 = &v28;
      v8 = &v51;
      v53 = 4;
      goto LABEL_17;
    }
    if ( (unsigned int)dword_1C032B288 > 4 )
    {
      v9 = *a3;
      v30 = 0;
      v29 = v9;
      v43 = (void *)*((_QWORD *)a1 + 6);
      v44 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_STOP...";
      v42 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v6,
        byte_1C02F46D1,
        (__int64)a3,
        (unsigned int)dword_1C032B288,
        (__int64)&v30,
        (void **)&v44,
        &v43,
        (__int64)&v42,
        (__int64)&v29);
    }
    ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                        (__int64)a1,
                                                                                        3,
                                                                                        *a3);
    if ( ActiveCommandByTargetPointerId )
    {
      v7 = HideInkCursorProvider::DoHideInkCursorStop(a1, v10, v12, v13);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(a1, &ActiveCommandByTargetPointerId);
    }
    else
    {
      v7 = -1073741823;
      if ( (unsigned int)v13 > 2 )
      {
        v31 = v12;
        v45 = "Active IFC_HIDE_INK_CURSOR_START command not found for the specified pointer id";
        v32 = -1073741823;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v11,
          byte_1C02F4636,
          v12,
          v13,
          (__int64)&v32,
          (void **)&v45,
          (__int64)&v31);
      }
    }
  }
  return v7;
}
