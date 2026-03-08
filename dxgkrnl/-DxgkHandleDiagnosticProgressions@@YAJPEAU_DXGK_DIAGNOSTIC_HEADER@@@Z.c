/*
 * XREFs of ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C004E6C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C004DDE0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall DxgkHandleDiagnosticProgressions(struct _DXGK_DIAGNOSTIC_HEADER *a1)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09 v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  char v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 *v18; // rdx
  char v19; // [rsp+80h] [rbp+20h] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId; // [rsp+88h] [rbp+28h] BYREF
  UINT SequenceNumber; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+98h] [rbp+38h] BYREF

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 2 )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)&Value, 608LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0LL,
          0,
          -1,
          L"Progressions category diagnostic reported with undefined diagnostic type 0x%I64x. (%d)",
          a1->Type.Notifications.Value,
          608LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Value & 1) == 0 )
    return 3221225485LL;
  v7 = (struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09)a1->Value;
  if ( *(_WORD *)&v7 < 0x18u )
  {
    WdLogSingleEntry3(2LL, *(_WORD *)&v7, 24LL, 617LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned __int16)*(_DWORD *)&a1->0,
        v8,
        v9,
        0LL,
        0,
        -1,
        L"SyncLock Resync diagnostic reported with incorrect size 0x%I64x, should be at least 0x%I64x. (%d)",
        (unsigned __int16)*(_DWORD *)&a1->0,
        24LL,
        617LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  if ( (((unsigned __int8)*(_DWORD *)&a1[1].Category.0 ^ (unsigned __int8)(a1[1].Category.Value >> 1)) & 2) == 0 )
  {
    WdLogSingleEntry1(2LL, 625LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v11,
        v10,
        v12,
        0LL,
        0,
        -1,
        L"Driver should set either EnableSyncStart or EnableSyncEnd in SyncLock Resync diagnostic reported. (%d)",
        625LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  if ( (unsigned int)dword_1C013A950 > 4 && tlgKeywordOn((__int64)&dword_1C013A950, 1LL) )
  {
    if ( (v14 & 1) != 0 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C013A950 <= 4 || !tlgKeywordOn((__int64)&dword_1C013A950, 1LL) )
        return 0LL;
      v18 = (unsigned __int8 *)&unk_1C009E7F3;
      v19 = *(_BYTE *)&a1[1].Category.0 & 1;
      goto LABEL_23;
    }
    if ( tlgKeywordOn((__int64)&dword_1C013A950, v13) )
    {
      LOBYTE(v17) = v17 & 1;
      v18 = (unsigned __int8 *)&unk_1C009E7A7;
      v19 = v17;
LABEL_23:
      TargetId = a1->TargetId;
      SequenceNumber = a1->SequenceNumber;
      v22 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v15,
        v18,
        v16,
        v17,
        (__int64)&v22,
        (__int64)&SequenceNumber,
        (__int64)&TargetId,
        (__int64)&v19);
    }
  }
  return 0LL;
}
