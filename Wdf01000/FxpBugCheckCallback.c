/*
 * XREFs of FxpBugCheckCallback @ 0x1C0088E70
 * Callers:
 *     <none>
 * Callees:
 *     FxpBugCheckCallbackFilter @ 0x1C0088F20 (FxpBugCheckCallbackFilter.c)
 */

void __fastcall FxpBugCheckCallback(
        _KBUGCHECK_CALLBACK_REASON Reason,
        _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _GUID *ReasonSpecificData,
        unsigned int ReasonSpecificLength)
{
  unsigned int v4; // eax
  _FX_DRIVER_GLOBALS *p_Component; // rbx
  unsigned __int64 Checksum; // rcx
  unsigned int v8; // esi

  v4 = *(_DWORD *)&ReasonSpecificData->Data4[4];
  if ( v4 >= 0x1000 )
  {
    p_Component = (_FX_DRIVER_GLOBALS *)&Record[-8].Component;
    Checksum = Record[-6].Checksum;
    if ( Checksum )
    {
      v8 = *(_DWORD *)(Checksum + 24) + 72;
      if ( v8 <= v4 )
      {
        if ( FxpBugCheckCallbackFilter((_FX_DRIVER_GLOBALS *)&Record[-8].Component) )
        {
          unk_1C009FF10 = p_Component;
LABEL_9:
          *(_QWORD *)&ReasonSpecificData[2].Data1 = p_Component->WdfLogHeader;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v8;
          ReasonSpecificData[1] = WdfDumpGuid;
          return;
        }
        if ( !unk_1C009FF10
          && p_Component->FxTrackDriverForMiniDumpLog
          && *(_FX_DRIVER_GLOBALS **)((char *)&stru_1C009FEF8.m_DriverUsage->FxDriverGlobals
                                    + stru_1C009FEF8.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) == p_Component )
        {
          goto LABEL_9;
        }
      }
    }
  }
}
