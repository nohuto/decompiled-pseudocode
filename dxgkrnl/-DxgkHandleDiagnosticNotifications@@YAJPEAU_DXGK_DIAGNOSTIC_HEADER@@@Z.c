__int64 __fastcall DxgkHandleDiagnosticNotifications(struct _DXGK_DIAGNOSTIC_HEADER *a1)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // ecx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09 v6; // edx
  int v7; // edx
  int v8; // r8d
  struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D v9; // r10d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 *v18; // rdx
  D3DDDI_VIDEO_PRESENT_TARGET_ID *p_TargetId; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // r10
  bool v31; // [rsp+80h] [rbp+27h] BYREF
  bool v32; // [rsp+81h] [rbp+28h] BYREF
  bool v33; // [rsp+82h] [rbp+29h] BYREF
  bool v34; // [rsp+83h] [rbp+2Ah] BYREF
  _BYTE v35[4]; // [rsp+84h] [rbp+2Bh] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId; // [rsp+88h] [rbp+2Fh] BYREF
  UINT SequenceNumber; // [rsp+8Ch] [rbp+33h] BYREF
  _DWORD v38[8]; // [rsp+90h] [rbp+37h] BYREF
  bool v39; // [rsp+C0h] [rbp+67h] BYREF
  bool v40; // [rsp+C8h] [rbp+6Fh] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID v41; // [rsp+D0h] [rbp+77h] BYREF
  UINT v42; // [rsp+D8h] [rbp+7Fh] BYREF

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 4 )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)&Value, 0LL);
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
          L"Notifications category diagnostic reported with undefined diagnostic type 0x%I64x. (%d)",
          a1->Type.Notifications.Value,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225485LL;
  }
  v6 = (struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09)a1->Value;
  if ( *(_WORD *)&v6 < 0x18u )
  {
    WdLogSingleEntry3(2LL, *(_WORD *)&v6, 24LL, 1LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned __int16)*(_DWORD *)&a1->0,
        v7,
        v8,
        0LL,
        0,
        -1,
        L"PanelSelfRefresh diagnostic reported with incorrect size 0x%I64x, should be at least 0x%I64x. (%d)",
        (unsigned __int16)*(_DWORD *)&a1->0,
        24LL,
        1LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  v9 = (struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D)a1[1].Category.Value;
  if ( *(unsigned int *)&v9 >= 0x80 )
  {
    WdLogSingleEntry2(2LL, (unsigned __int64)*(unsigned int *)&v9 >> 7, 2LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v11,
        v10,
        v12,
        0LL,
        0,
        -1,
        L"PanelSelfRefresh diagnostic reported with non-zero reserved bits 0x%I64x (%d)",
        (unsigned __int64)a1[1].Category.Value >> 7,
        2LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Value & 1) != 0 )
  {
    if ( v9 )
    {
      if ( (unsigned int)dword_1C013A988 > 4
        && tlgKeywordOn((__int64)&dword_1C013A988, 1LL)
        && tlgKeywordOn((__int64)&dword_1C013A988, v20) )
      {
        v34 = 1;
        v35[0] = 1;
        v39 = (v24 & 4) != 0;
        v38[0] = 1;
        v40 = (v24 & 0x20) != 0;
        LOBYTE(v41) = v24 & 1;
        LOBYTE(v42) = (v24 & 0x40) != 0;
        v31 = (v24 & 2) != 0;
        v32 = (v24 & 8) != 0;
        TargetId = a1->TargetId;
        SequenceNumber = a1->SequenceNumber;
        v33 = (v24 & 0x10) != 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v21,
          byte_1C009E93C,
          v22,
          v23,
          (__int64)v38,
          (__int64)&SequenceNumber,
          (__int64)&TargetId,
          (__int64)v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39);
      }
      return 0LL;
    }
    if ( (unsigned int)dword_1C013A988 > 4
      && tlgKeywordOn((__int64)&dword_1C013A988, 1LL)
      && tlgKeywordOn((__int64)&dword_1C013A988, v14) )
    {
      v18 = (unsigned __int8 *)&unk_1C009E9F1;
      v41 = a1->TargetId;
      v42 = a1->SequenceNumber;
      p_TargetId = &TargetId;
      v40 = 1;
      TargetId = 1;
LABEL_29:
      v39 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v15,
        v18,
        v16,
        v17,
        (__int64)p_TargetId,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39);
    }
  }
  else
  {
    if ( v9 )
    {
      if ( (unsigned int)dword_1C013A988 > 4
        && tlgKeywordOn((__int64)&dword_1C013A988, 2LL)
        && tlgKeywordOn((__int64)&dword_1C013A988, v26) )
      {
        v32 = 1;
        v31 = v29;
        v39 = (v30 & 4) != 0;
        TargetId = 1;
        v40 = (v30 & 0x20) != 0;
        LOBYTE(v41) = v30 & 1;
        LOBYTE(v42) = (v30 & 0x40) != 0;
        v35[0] = (v30 & 2) != 0;
        v34 = (v30 & 8) != 0;
        v38[0] = a1->TargetId;
        SequenceNumber = a1->SequenceNumber;
        v33 = (v30 & 0x10) != 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v27,
          byte_1C009E83F,
          v28,
          v29,
          (__int64)&TargetId,
          (__int64)&SequenceNumber,
          (__int64)v38,
          (__int64)&v31,
          (__int64)&v32,
          (__int64)&v33,
          (__int64)&v34,
          (__int64)v35,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39);
      }
      return 0LL;
    }
    if ( (unsigned int)dword_1C013A988 > 4
      && tlgKeywordOn((__int64)&dword_1C013A988, 2LL)
      && tlgKeywordOn((__int64)&dword_1C013A988, v25) )
    {
      v18 = (unsigned __int8 *)&unk_1C009E8F4;
      v41 = a1->TargetId;
      v42 = a1->SequenceNumber;
      p_TargetId = v38;
      v40 = v17;
      v38[0] = 1;
      goto LABEL_29;
    }
  }
  return 0LL;
}
