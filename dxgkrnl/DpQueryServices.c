/*
 * XREFs of DpQueryServices @ 0x1C0218A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpQueryServices(__int64 a1, int a2, unsigned __int16 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 (__fastcall *v11)(); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(); // rax

  v3 = 0;
  v4 = a2;
  if ( !a1
    || !a3
    || (v7 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v7 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v7 + 20) - 2) > 1 )
  {
    v3 = -1073741811;
LABEL_51:
    v13 = 2LL;
    v12 = -1073741811LL;
    goto LABEL_52;
  }
  if ( KeGetCurrentIrql() )
  {
    v3 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    goto LABEL_51;
  }
  switch ( (_DWORD)v4 )
  {
    case 0:
      v8 = a3[1];
      if ( (_WORD)v8 != 1 )
        goto LABEL_24;
      v8 = *a3;
      if ( (_DWORD)v8 != 56 )
        goto LABEL_24;
      if ( !*(_QWORD *)(v7 + 680) )
      {
        v12 = -1073741823LL;
        v3 = -1073741823;
        goto LABEL_30;
      }
      v9 = *(_QWORD *)(v7 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 6) = DpiAgpSetAgpCommand;
      *((_QWORD *)a3 + 4) = &DpiAgpAllocatePool;
      v11 = DpiAgpFreePool;
      goto LABEL_23;
    case 1:
      v8 = a3[1];
      if ( (_WORD)v8 != 1 )
        goto LABEL_24;
      v8 = *a3;
      if ( (_DWORD)v8 != 56 )
        goto LABEL_24;
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = DpiDbgReportCreate;
      *((_QWORD *)a3 + 5) = DpiDbgReportSecondaryData;
      v14 = DpiDbgReportComplete;
      goto LABEL_45;
    case 2:
      v8 = a3[1];
      if ( (_WORD)v8 != 1 )
        goto LABEL_24;
      v8 = *a3;
      if ( (_DWORD)v8 != 56 )
        goto LABEL_24;
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = TdrTimedOperationStart;
      *((_QWORD *)a3 + 5) = TdrTimedOperationDelay;
      v14 = (__int64 (__fastcall *)())TdrTimedOperationWaitForSingleObject;
LABEL_45:
      *((_QWORD *)a3 + 1) = 0LL;
      *((_QWORD *)a3 + 6) = v14;
      goto LABEL_17;
    case 3:
      v8 = a3[1];
      if ( (_WORD)v8 == 1 )
      {
        v8 = *a3;
        if ( (_DWORD)v8 == 72 )
        {
          v9 = *(_QWORD *)(v7 + 24);
          *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 4) = &DpOpenSpbResource;
          *((_QWORD *)a3 + 5) = DpCloseSpbResource;
          *((_QWORD *)a3 + 6) = &DpReadSpbResource;
          *((_QWORD *)a3 + 7) = &DpWriteSpbResource;
          *((_QWORD *)a3 + 8) = &DpSpbResourceIoControl;
          goto LABEL_16;
        }
      }
      goto LABEL_24;
  }
  if ( (_DWORD)v4 != 4 )
  {
    if ( (_DWORD)v4 != 5 )
    {
      if ( (_DWORD)v4 != 6 )
      {
        v3 = -1073741811;
        v12 = v4;
        goto LABEL_30;
      }
      if ( *(_BYTE *)(v7 + 1159) )
      {
        v8 = *a3;
        if ( (_DWORD)v8 == 80 )
        {
          v9 = *(_QWORD *)(v7 + 24);
          *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 4) = &DpiIndirectCbSendMessage;
          *((_QWORD *)a3 + 5) = DpiIndirectCbForceDisplaySwitch;
          *((_QWORD *)a3 + 6) = DpiIndirectCbDisableRenderD3Requests;
          *((_QWORD *)a3 + 7) = DpiIndirectCbNotifyCursorSupportChange;
          *((_QWORD *)a3 + 8) = DpiIndirectCbOpmSetSrmList;
          *((_QWORD *)a3 + 9) = DpiIndirectCbOpmGetSrmListVersion;
          goto LABEL_16;
        }
        goto LABEL_24;
      }
LABEL_32:
      v3 = -1073741816;
      WdLogSingleEntry1(3LL, a1);
      return v3;
    }
    v8 = a3[1];
    if ( (_WORD)v8 != 1 )
      goto LABEL_24;
    v8 = *a3;
    if ( (_DWORD)v8 != 48 )
      goto LABEL_24;
    v9 = *(_QWORD *)(v7 + 24);
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = &DpiEnumSystemFirmwareTables;
    v11 = (__int64 (__fastcall *)())DpiReadSystemFirmwareTable;
LABEL_23:
    *((_QWORD *)a3 + 5) = v11;
    goto LABEL_16;
  }
  if ( !*(_BYTE *)(v7 + 1154) )
    goto LABEL_32;
  v8 = *a3;
  if ( (_DWORD)v8 != 40 || (v8 = a3[1], (_WORD)v8 != 1) )
  {
LABEL_24:
    v3 = -1073741811;
    v12 = v8;
LABEL_30:
    v13 = 3LL;
LABEL_52:
    WdLogSingleEntry1(v13, v12);
    return v3;
  }
  v9 = *(_QWORD *)(v7 + 24);
  *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 4) = DpGetPostDisplayInfoPlusEdid;
LABEL_16:
  *((_QWORD *)a3 + 1) = v9;
LABEL_17:
  WdpInterfaceReferenceNop();
  return v3;
}
