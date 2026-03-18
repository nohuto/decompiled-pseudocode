/*
 * XREFs of ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003218
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003060 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002E3C (-WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003468 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003660 (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0003734 (_tlgKeywordOn.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0016934 (-WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00169EC (-WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0016B30 (-WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0016B78 (-WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00231A0 (-WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1C00509C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00511F4 (-WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051284 (-WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00513E4 (-WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051474 (-WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051504 (-WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051594 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051624 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00516B4 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051744 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00517D4 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051864 (-WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0051938 (-WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00519E0 (-WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

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
          if ( (unsigned int)dword_1C013F8E0 <= 4 )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, 0x200000000040LL) )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, v4) )
            return;
          v13 = &unk_1C00A815B;
          break;
        case '2':
          if ( (unsigned int)dword_1C013F8E0 <= 4 )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, 0x200000000080LL) )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, v6) )
            return;
          v13 = &unk_1C00A83F3;
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
      if ( (unsigned int)dword_1C013F8E0 <= 4 )
        return;
      if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, 0x200000000800LL) )
        return;
      if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, v5) )
        return;
      v13 = &unk_1C00A8054;
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
    if ( (unsigned int)dword_1C013F8E0 <= 4 )
      return;
    if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, 0x200000000020LL) )
      return;
    if ( !(unsigned __int8)tlgKeywordOn(&dword_1C013F8E0, v7) )
      return;
    v13 = &unk_1C00A81D3;
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
        *(_DWORD *)a1,
        0,
        0,
        0,
        0);
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
            *(_DWORD *)a1,
            0,
            0,
            0,
            0);
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
      *(_DWORD *)a1,
      0,
      0,
      0,
      0);
}
