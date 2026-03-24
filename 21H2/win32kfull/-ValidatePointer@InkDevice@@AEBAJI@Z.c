/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0256570
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0255A70 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0243814 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024EF58 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0253908 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(InkDevice *this, unsigned int a2, const struct tagPOINTER_INFO **a3)
{
  __int64 v4; // rcx
  int PointerInfoByPointerId; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _BYTE v14[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v15[2]; // [rsp+48h] [rbp-38h] BYREF
  const char *v16; // [rsp+50h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)v15 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v15, a3);
  if ( PointerInfoByPointerId >= 0 )
  {
    v4 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v15 + 16LL), 19) + 480);
    if ( *(_DWORD *)(v4 + 24) == 5 )
    {
      v9 = *(_QWORD *)(v4 + 16);
      v10 = *(_DWORD *)(v9 + 1976);
      if ( v10 == 0x80000000 || v10 == 11 || v10 == 13 )
      {
        v11 = *(_QWORD *)(v9 + 464);
        if ( *(unsigned __int16 *)(v11 + 112) == *((_DWORD *)this + 34)
          && *(unsigned __int16 *)(v11 + 110) == *((_DWORD *)this + 33) )
        {
          v12 = *(_QWORD **)(v4 + 344);
          if ( v12 && *v12 )
          {
            if ( !byte_1C03419B8 )
            {
              if ( (unsigned int)dword_1C032B288 > 5
                && (qword_1C032B298 & 0x400000000000LL) != 0
                && (qword_1C032B2A0 & 0x400000000000LL) == qword_1C032B2A0 )
              {
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C032B288,
                  (unsigned __int8 *)dword_1C02F4836,
                  0LL,
                  0LL,
                  2u,
                  &v17);
              }
              byte_1C03419B8 = 1;
            }
            PointerInfoByPointerId = -1073741811;
            if ( (unsigned int)dword_1C032B288 > 2 )
            {
              v8 = "The pointer device contains calibration data";
              v15[0] = -1073741811;
              goto LABEL_26;
            }
          }
        }
        else
        {
          PointerInfoByPointerId = -1073741823;
          if ( (unsigned int)dword_1C032B288 > 2 )
          {
            v8 = "Pointer device not supported by the ink device";
            v15[0] = -1073741823;
            goto LABEL_26;
          }
        }
      }
      else
      {
        PointerInfoByPointerId = -1073741811;
        if ( (unsigned int)dword_1C032B288 > 2 )
        {
          v8 = "Pointer device not mapped to the integrated display";
          v15[0] = -1073741811;
          goto LABEL_26;
        }
      }
    }
    else
    {
      PointerInfoByPointerId = -1073741811;
      if ( (unsigned int)dword_1C032B288 > 2 )
      {
        v14[0] = *(_BYTE *)(v4 + 24);
        v16 = "Not an integrated pen device";
        v15[0] = -1073741811;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
          v4,
          byte_1C02F457D,
          v6,
          v7,
          (__int64)v15,
          (void **)&v16,
          (__int64)v14);
      }
    }
  }
  else if ( (unsigned int)dword_1C032B288 > 2 )
  {
    v8 = "Wrong thread (or invalid pointer id)";
    v15[0] = PointerInfoByPointerId;
LABEL_26:
    v16 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      byte_1C02F3FD3,
      v6,
      v7,
      (__int64)v15,
      (void **)&v16);
  }
  return (unsigned int)PointerInfoByPointerId;
}
