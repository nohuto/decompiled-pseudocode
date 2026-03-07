void __fastcall CGlobalCompositionSurfaceInfo::NotifyUnpinPending(CGlobalCompositionSurfaceInfo *this)
{
  int v1; // r9d

  v1 = *((_DWORD *)this + 104) + 1;
  *((_DWORD *)this + 104) = v1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)this, (__int64)&Pinning_OutstandingUnpinCount, *((_QWORD *)this + 5), v1);
}
