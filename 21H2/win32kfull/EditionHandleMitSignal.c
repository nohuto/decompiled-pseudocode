/*
 * XREFs of EditionHandleMitSignal @ 0x1C00C1400
 * Callers:
 *     <none>
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0005EBC (xxxComputeInputSinkInfo.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C14A4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C14D0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D4BD8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall EditionHandleMitSignal(HANDLE a1)
{
  int v1; // ebx
  int v2; // ebx
  int v3; // ebx
  __int64 v4; // rcx
  const char *v5; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 == ghDITEvent )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v7,
      "HandleMitSignal",
      0LL);
    while ( 1 )
    {
      v1 = gdwDITWakeReason & -gdwDITWakeReason;
      if ( !v1 )
        break;
      _InterlockedAnd(&gdwDITWakeReason, ~v1);
      if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 2) != 0 && (qword_1C0330B38 & 2) == qword_1C0330B38 )
      {
        switch ( v1 )
        {
          case 1:
            v5 = "Mouse";
            break;
          case 2:
            v5 = "InputSinkFromPoint";
            break;
          case 4:
            v5 = "MouseInterceptCallout";
            break;
          default:
            v5 = "UNKNOWN";
            break;
        }
        v6 = (__int64)v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_1C0330B20,
          (__int64)&v6);
      }
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 == 2 )
            ExecuteMarshaledInterceptRequest();
        }
        else
        {
          EnterCrit(0LL, 1LL);
          xxxComputeInputSinkInfo();
          UserSessionSwitchLeaveCrit(v4);
        }
      }
      else
      {
        ProcessMouseEvent();
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
  }
}
