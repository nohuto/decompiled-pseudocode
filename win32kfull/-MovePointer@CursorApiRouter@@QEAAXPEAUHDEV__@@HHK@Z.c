/*
 * XREFs of ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001DD64 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C00F08A0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01430AC (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     HideMouseTrails @ 0x1C0145300 (HideMouseTrails.c)
 * Callees:
 *     GreMovePointer @ 0x1C001E270 (GreMovePointer.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0022210 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00DB69C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0225CD4 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z @ 0x1C0225E10 (-CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C0225E48 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

void __fastcall CursorApiRouter::MovePointer(CursorApiRouter *this, HDEV a2, int a3, int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  CursorApiRouter *v9; // rcx
  int v10; // edi
  int v11; // edx
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  __int64 v15; // [rsp+60h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h] BYREF

  v18 = (__int64)this;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v18, (struct _EX_PUSH_LOCK *)&qword_1C0362190);
  v8 = dword_1C0362188;
  qword_1C0362178 = a2;
  dword_1C0362180 = a3;
  dword_1C0362184 = a4;
  dword_1C0362188 = 2;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 == 1 )
    CursorApiRouter::DwmSetPointer(0LL, 0);
  GreMovePointer(a2, a3, a4, a5);
  if ( v8 != 2 )
  {
    CursorApiRouter::ForceSetCurrentCursorShape(v9);
    v10 = (unsigned __int8)byte_1C0362174;
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 8LL) )
      {
        LODWORD(v20) = v14;
        LODWORD(v21) = v10;
        LODWORD(v18) = v13;
        LOBYTE(v12) = gDWMCapable != 0;
        v15 = (__int64)"Move";
        LODWORD(v19) = v12;
        v16 = InputTraceLogging::Cursor::CursorApiToString((unsigned int)(v11 - 6));
        v17 = InputTraceLogging::Cursor::CursorApiToString(v8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C035C080,
          (int)&dword_1C031ED39,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v21,
          (__int64)&v20);
      }
    }
  }
}
