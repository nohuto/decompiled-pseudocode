/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C02514FC
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0250DC0 (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C023AA94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C023F024 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0250800 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  const struct tagPOINTER_INFO *v11; // [rsp+50h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  const char *v13; // [rsp+68h] [rbp+28h] BYREF

  v11 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, &v11, a3);
  v6 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v7 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)v11 + 2), 19) + 472);
    if ( *(_DWORD *)(v7 + 24) != 5 )
    {
      v6 = -1073741811;
      if ( (unsigned int)dword_1C0326250 > 2 )
      {
        LOBYTE(v11) = *(_BYTE *)(v7 + 24);
        v13 = "Not an integrated pen device";
        LODWORD(v12) = -1073741811;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
          v7,
          byte_1C02F19E2,
          v8,
          v9,
          (__int64)&v12,
          (void **)&v13,
          (__int64)&v11);
      }
    }
  }
  else if ( (unsigned int)dword_1C0326250 > 2 )
  {
    LODWORD(v11) = PointerInfoByPointerId;
    v12 = (__int64)"Wrong thread (or invalid pointer id)";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0326250,
      byte_1C02F1438,
      v4,
      v5,
      (__int64)&v11,
      (void **)&v12);
  }
  return v6;
}
