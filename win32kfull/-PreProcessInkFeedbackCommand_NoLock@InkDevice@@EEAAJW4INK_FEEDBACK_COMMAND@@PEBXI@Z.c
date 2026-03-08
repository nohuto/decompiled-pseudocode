/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0246C50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0244B38 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0247670 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::PreProcessInkFeedbackCommand_NoLock(__int64 a1, int a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // ebx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+58h] [rbp-9h] BYREF
  char v12; // [rsp+5Ch] [rbp-5h] BYREF
  __int64 v13; // [rsp+60h] [rbp-1h] BYREF
  __int64 v14; // [rsp+68h] [rbp+7h] BYREF
  void *v15; // [rsp+70h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp+17h] BYREF
  int *v17; // [rsp+98h] [rbp+37h]
  int v18; // [rsp+A0h] [rbp+3Fh]
  int v19; // [rsp+A4h] [rbp+43h]

  v5 = 0;
  if ( a2 == 1 )
  {
    if ( (_DWORD)a4 != 64 )
    {
      v5 = -1073741811;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v5;
      goto LABEL_14;
    }
    v5 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), *a3);
    if ( (v5 & 0x80000000) == 0 || (unsigned int)dword_1C03570E0 <= 2 )
      return v5;
LABEL_17:
    v11 = v5;
    v13 = (__int64)"ValidatePointer failed";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      v8,
      v9,
      (__int64)&v11,
      (void **)&v13);
    return v5;
  }
  if ( a2 == 2 )
  {
    if ( (_DWORD)a4 != 4 )
    {
      v5 = -1073741811;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v5;
LABEL_14:
      v19 = 0;
      v11 = -1073741811;
      v18 = 4;
      v17 = &v11;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v16);
      return v5;
    }
    v7 = PtiCurrentShared(a1);
    if ( (unsigned int)IsProcessDwm(**((_QWORD **)v7 + 53)) )
      return v5;
    v5 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), *a3);
    if ( (v5 & 0x80000000) == 0 || (unsigned int)dword_1C03570E0 <= 2 )
      return v5;
    goto LABEL_17;
  }
  v5 = -1073741637;
  if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v12 = a2;
    v11 = -1073741637;
    v15 = *(void **)(a1 + 48);
    v13 = (__int64)"Unsupported command";
    v14 = a1 & -(__int64)(a1 != 32);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v14,
      byte_1C031F5EE,
      (unsigned int)(a2 - 1),
      a4,
      (__int64)&v11,
      (void **)&v13,
      &v15,
      (__int64)&v14,
      (__int64)&v12);
  }
  return v5;
}
