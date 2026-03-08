/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0247670
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0246C50 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C022AA30 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0244C30 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(InkDevice *this, unsigned int a2, const struct tagPOINTER_INFO **a3)
{
  unsigned int PointerInfoByPointerId; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _BYTE v14[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v15[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)v15 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, (const struct tagPOINTER_INFO **)v15, a3);
  if ( (PointerInfoByPointerId & 0x80000000) != 0 )
  {
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v7 = "Wrong thread (or invalid pointer id)";
LABEL_25:
      v15[0] = PointerInfoByPointerId;
      goto LABEL_26;
    }
    return PointerInfoByPointerId;
  }
  v8 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v15 + 16LL), 19) + 472);
  if ( *(_DWORD *)(v8 + 24) != 5 )
  {
    PointerInfoByPointerId = -1073741811;
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v14[0] = *(_BYTE *)(v8 + 24);
      v16 = (__int64)"Not an integrated pen device";
      v15[0] = -1073741811;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        3221225485LL,
        byte_1C031F535,
        v5,
        v6,
        (__int64)v15,
        (void **)&v16,
        (__int64)v14);
    }
    return PointerInfoByPointerId;
  }
  v9 = *(_QWORD *)(v8 + 16);
  v10 = *(_DWORD *)(v9 + 1968);
  if ( v10 != 0x80000000 && v10 != 11 && v10 != 13 )
  {
    PointerInfoByPointerId = -1073741811;
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      return PointerInfoByPointerId;
    v7 = "Pointer device not mapped to the integrated display";
    v15[0] = -1073741811;
    goto LABEL_26;
  }
  v11 = *(_QWORD *)(v9 + 456);
  if ( *(unsigned __int16 *)(v11 + 112) == *((_DWORD *)this + 34)
    && *(unsigned __int16 *)(v11 + 110) == *((_DWORD *)this + 33) )
  {
    v12 = *(_QWORD **)(v8 + 392);
    if ( !v12 || !*v12 )
      return PointerInfoByPointerId;
    if ( !byte_1C03629A0 )
    {
      if ( (unsigned int)dword_1C03570E0 > 5 && tlgKeywordOn((__int64)&dword_1C03570E0, 0x400000000000LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C03570E0,
          (unsigned __int8 *)dword_1C031F7EE,
          0LL,
          0LL,
          2u,
          &v17);
      byte_1C03629A0 = 1;
    }
    PointerInfoByPointerId = -1073741811;
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      return PointerInfoByPointerId;
    v7 = "The pointer device contains calibration data";
    v15[0] = -1073741811;
LABEL_26:
    v16 = (__int64)v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      v5,
      v6,
      (__int64)v15,
      (void **)&v16);
    return PointerInfoByPointerId;
  }
  PointerInfoByPointerId = -1073741823;
  if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v7 = "Pointer device not supported by the ink device";
    goto LABEL_25;
  }
  return PointerInfoByPointerId;
}
