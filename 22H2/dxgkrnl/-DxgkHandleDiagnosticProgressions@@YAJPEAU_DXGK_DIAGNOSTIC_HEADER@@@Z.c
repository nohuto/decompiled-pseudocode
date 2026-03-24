/*
 * XREFs of ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C004CE20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C004C5F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall DxgkHandleDiagnosticProgressions(struct _DXGK_DIAGNOSTIC_HEADER *a1, __int64 a2)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // eax
  _QWORD *v4; // rax
  __int64 v6; // rdx
  char v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 *v11; // rdx
  char v12; // [rsp+60h] [rbp+20h] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId; // [rsp+68h] [rbp+28h] BYREF
  UINT SequenceNumber; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 2 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v4[3] = a1->Type.Notifications.Value;
    v4[4] = 608LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Value & 1) == 0 )
    return 3221225485LL;
  if ( (unsigned __int16)*(_DWORD *)&a1->0 < 0x18u )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v4[3] = (unsigned __int16)*(_DWORD *)&a1->0;
    v4[4] = 24LL;
    v4[5] = 617LL;
    goto LABEL_3;
  }
  if ( (((unsigned __int8)*(_DWORD *)&a1[1].Category.0 ^ (unsigned __int8)(a1[1].Category.Value >> 1)) & 2) == 0 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v4[3] = 625LL;
    goto LABEL_3;
  }
  if ( (unsigned int)dword_1C00B1AC8 > 4 && tlgKeywordOn((__int64)&dword_1C00B1AC8, 1LL) )
  {
    if ( (v7 & 2) != 0 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C00B1AC8 <= 4 || !tlgKeywordOn((__int64)&dword_1C00B1AC8, 1LL) )
        return 0LL;
      v11 = (unsigned __int8 *)&unk_1C007FF39;
      v12 = *(_BYTE *)&a1[1].Category.0 & 1;
      goto LABEL_18;
    }
    if ( tlgKeywordOn((__int64)&dword_1C00B1AC8, v6) )
    {
      LOBYTE(v10) = v10 & 1;
      v11 = (unsigned __int8 *)&unk_1C007FF85;
      v12 = v10;
LABEL_18:
      TargetId = a1->TargetId;
      SequenceNumber = a1->SequenceNumber;
      v15 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v8,
        v11,
        v9,
        v10,
        (__int64)&v15,
        (__int64)&SequenceNumber,
        (__int64)&TargetId,
        (__int64)&v12);
    }
  }
  return 0LL;
}
