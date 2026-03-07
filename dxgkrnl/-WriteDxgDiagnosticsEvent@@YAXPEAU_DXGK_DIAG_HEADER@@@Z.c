void __fastcall WriteDxgDiagnosticsEvent(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rcx
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  void *v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  struct _DXGK_DIAG_HEADER *v26; // [rsp+60h] [rbp-10h] BYREF
  __int16 v27; // [rsp+68h] [rbp-8h]
  int v28; // [rsp+80h] [rbp+10h] BYREF
  int v29; // [rsp+88h] [rbp+18h] BYREF

  v2 = *(int *)a1;
  if ( (int)v2 > 25 )
  {
    if ( (int)v2 > 40 )
    {
      if ( (int)v2 <= 46 )
      {
        if ( (_DWORD)v2 != 46 )
        {
          if ( (_DWORD)v2 == 41 )
          {
            WriteDxgDiagnosticsEvent_ADAPTER_START2(a1);
            return;
          }
          if ( (_DWORD)v2 != 42 )
          {
            if ( (_DWORD)v2 == 43 )
            {
              WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket(a1);
              return;
            }
            if ( (_DWORD)v2 != 44 )
            {
              WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket(a1);
              return;
            }
          }
LABEL_64:
          WdLogSingleEntry1(3LL, v2);
          return;
        }
        goto LABEL_88;
      }
      switch ( (_DWORD)v2 )
      {
        case '/':
          WriteDxgDiagnosticsEvent_SDC(a1);
          return;
        case '0':
          WriteDxgDiagnosticsEvent_QDC(a1);
          return;
        case '1':
          if ( (unsigned int)dword_1C013A8E0 <= 4 )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000040LL) )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v4) )
            return;
          v13 = &unk_1C009EDA6;
          break;
        case '2':
          if ( (unsigned int)dword_1C013A8E0 <= 4 )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000080LL) )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v6) )
            return;
          v13 = &unk_1C009F03E;
          break;
        case '3':
          goto LABEL_64;
        default:
          goto LABEL_97;
      }
    }
    else
    {
      if ( (_DWORD)v2 == 40 )
      {
        WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3(a1);
        return;
      }
      if ( (int)v2 <= 33 )
      {
        if ( (_DWORD)v2 == 33 )
          goto LABEL_88;
        if ( (_DWORD)v2 == 27 || (_DWORD)v2 == 28 || (_DWORD)v2 == 29 )
          goto LABEL_64;
        v3 = v2 - 30;
        if ( (_DWORD)v2 == 30 )
        {
          WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(a1);
          return;
        }
        goto LABEL_86;
      }
      if ( (_DWORD)v2 == 34 )
      {
        WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(a1);
        return;
      }
      if ( (_DWORD)v2 != 36 )
      {
        v3 = v2 - 37;
        if ( (_DWORD)v2 == 37 )
        {
          WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(a1);
          return;
        }
LABEL_86:
        v11 = v3 - 1;
        if ( v11 )
          goto LABEL_87;
        goto LABEL_88;
      }
      if ( (unsigned int)dword_1C013A8E0 <= 4 )
        return;
      if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000800LL) )
        return;
      if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v5) )
        return;
      v13 = &unk_1C009EC9F;
    }
LABEL_102:
    v27 = *((_WORD *)a1 + 2);
    v28 = *((_DWORD *)a1 + 10);
    v29 = 8;
    v26 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v23,
      (_DWORD)v13,
      v24,
      v25,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v26);
    return;
  }
  if ( (_DWORD)v2 == 25 )
  {
    if ( (unsigned int)dword_1C013A8E0 <= 4 )
      return;
    if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000020LL) )
      return;
    if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v7) )
      return;
    v13 = &unk_1C009EE1E;
    goto LABEL_102;
  }
  if ( (int)v2 > 12 )
  {
    if ( (int)v2 > 18 )
    {
      if ( (_DWORD)v2 == 19 )
      {
        WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START(a1);
        return;
      }
      if ( (_DWORD)v2 != 21 && (_DWORD)v2 != 22 && (_DWORD)v2 != 23 )
      {
        if ( (_DWORD)v2 == 24 )
        {
          WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(a1);
          return;
        }
        goto LABEL_97;
      }
      goto LABEL_88;
    }
    if ( (_DWORD)v2 == 18 )
    {
      WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE(a1);
      return;
    }
    if ( (_DWORD)v2 != 13 && (_DWORD)v2 != 14 )
    {
      if ( (_DWORD)v2 == 15 )
      {
        WriteDxgDiagnosticsEvent_OUTPUTDUPL(a1);
        return;
      }
      v11 = v2 - 16;
      if ( (_DWORD)v2 == 16 )
      {
        WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS(a1);
        return;
      }
      goto LABEL_87;
    }
LABEL_88:
    WdLogSingleEntry1(1LL, v2);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v15,
        v14,
        v16,
        0,
        2,
        -1,
        (__int64)L"Obsolete diag type 0x%lx, being logged",
        *(int *)a1,
        0LL,
        0LL,
        0LL,
        0LL);
    return;
  }
  if ( (_DWORD)v2 == 12 )
    goto LABEL_88;
  if ( (int)v2 > 6 )
  {
    if ( (_DWORD)v2 != 7 )
    {
      if ( (_DWORD)v2 == 8 )
      {
        WriteDxgDiagnosticsEvent_MONITOR_MGR(a1);
        return;
      }
      if ( (_DWORD)v2 == 9 )
      {
        WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(a1);
        return;
      }
      v11 = v2 - 10;
      if ( (_DWORD)v2 == 10 )
        goto LABEL_64;
LABEL_87:
      if ( v11 == 1 )
        goto LABEL_88;
LABEL_97:
      WdLogSingleEntry1(1LL, v2);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v19,
            v18,
            v20,
            0,
            2,
            -1,
            (__int64)L"Unrecognized diag type 0x%lx, being logged",
            *(int *)a1,
            0LL,
            0LL,
            0LL,
            0LL);
      }
      return;
    }
    goto LABEL_88;
  }
  if ( (_DWORD)v2 == 6 )
  {
    WriteDxgDiagnosticsEvent_CODE_POINT(a1);
    return;
  }
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 != 1 )
    {
      switch ( (_DWORD)v2 )
      {
        case 2:
          WriteDxgDiagnosticsEvent_HPD(a1);
          return;
        case 3:
          WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN(a1);
          return;
        case 4:
          WriteDxgDiagnosticsEvent_USER_CDS(a1);
          return;
        case 5:
          WriteDxgDiagnosticsEvent_DRV_CDS(a1);
          return;
      }
      goto LABEL_97;
    }
    goto LABEL_88;
  }
  WdLogSingleEntry1(1LL, v2);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      v9,
      v8,
      v10,
      0,
      2,
      -1,
      (__int64)L"DXGK_DIAG_TYPE_NONE (0x%lx), being logged but it never should",
      *(int *)a1,
      0LL,
      0LL,
      0LL,
      0LL);
}
