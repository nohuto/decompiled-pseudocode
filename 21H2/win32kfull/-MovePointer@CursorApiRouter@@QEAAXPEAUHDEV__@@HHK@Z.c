/*
 * XREFs of ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C009BF80 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C011CC20 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C016A9CA (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     HideMouseTrails @ 0x1C01D04A0 (HideMouseTrails.c)
 * Callees:
 *     ?UpdateStateWorker@CursorApiRouter@@AEAAXXZ @ 0x1C0072EF0 (-UpdateStateWorker@CursorApiRouter@@AEAAXXZ.c)
 *     GreSetPointer @ 0x1C0073040 (GreSetPointer.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     GreMovePointer @ 0x1C0086EF0 (GreMovePointer.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00FCE3C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0239F70 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z @ 0x1C023A0AC (-CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A0E4 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

void __fastcall CursorApiRouter::MovePointer(CursorApiRouter *this, HDEV a2, int a3, int a4, unsigned int a5)
{
  unsigned int v8; // edi
  CursorApiRouter *v9; // rcx
  unsigned int v10; // r15d
  int v11; // ebx
  CursorApiRouter *v12; // rcx
  int v14; // r9d
  int v15; // r10d
  int v16; // r11d
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+58h] BYREF

  v20 = (__int64)this;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v20, (struct _EX_PUSH_LOCK *)&qword_1C03374D8);
  v8 = dword_1C03374D0;
  qword_1C03374C0 = (__int64)a2;
  dword_1C03374C8 = a3;
  dword_1C03374CC = a4;
  CursorApiRouter::UpdateStateWorker(v9);
  v10 = dword_1C03374D0;
  ExReleasePushLockExclusiveEx(v20, 0LL);
  KeLeaveCriticalRegion();
  v11 = 0;
  v12 = (CursorApiRouter *)(v10 - 1);
  if ( v10 == 1 )
  {
    if ( v8 == 2 )
      GreSetPointer(0LL, gCursorApiRouter, 0, 0);
    if ( !(unsigned __int8)IsKSTThread(v12) )
    {
      v20 = __PAIR64__(a4, a3);
      SendPositionChanged(&v20);
    }
  }
  else if ( v10 == 2 )
  {
    if ( v8 == 1 )
      CursorApiRouter::DwmSetPointer(0LL, 0);
    GreMovePointer(a2, a3, a4, a5);
  }
  if ( v10 != v8 )
  {
    CursorApiRouter::ForceSetCurrentCursorShape(v12);
    if ( (unsigned int)dword_1C032BE20 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 8LL) )
      {
        LODWORD(v22) = v15;
        LODWORD(v23) = v16;
        LODWORD(v20) = v14;
        LOBYTE(v11) = gDWMCapable != 0;
        v17 = (__int64)"Move";
        LODWORD(v21) = v11;
        v18 = InputTraceLogging::Cursor::CursorApiToString(v10);
        v19 = InputTraceLogging::Cursor::CursorApiToString(v8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C032BE20,
          (int)&dword_1C02F124C,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v23,
          (__int64)&v22);
      }
    }
  }
}
