/*
 * XREFs of ?NotifyUnpinComplete@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x180257FA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012A09C (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyUnpinComplete(CGlobalCompositionSurfaceInfo *this)
{
  int v1; // r9d

  v1 = *((_DWORD *)this + 104) - 1;
  *((_DWORD *)this + 104) = v1;
  if ( !v1 )
    *((_BYTE *)this + 420) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)this, (__int64)&Pinning_OutstandingUnpinCount, *((_QWORD *)this + 5), v1);
}
