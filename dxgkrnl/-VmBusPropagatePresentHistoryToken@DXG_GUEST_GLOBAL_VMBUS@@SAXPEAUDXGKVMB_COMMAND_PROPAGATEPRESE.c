void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(
        struct DXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN *a1)
{
  void *v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // [rsp+20h] [rbp-38h]
  bool v7; // [rsp+28h] [rbp-30h]
  bool v8; // [rsp+30h] [rbp-28h]

  v2 = (void *)*((_QWORD *)a1 + 5);
  v3 = 0;
  if ( (!v2 || (unsigned __int64)v2 > MmUserProbeAddress)
    && *((_QWORD *)a1 + 3) > MmUserProbeAddress
    && *((_QWORD *)a1 + 4) > MmUserProbeAddress )
  {
    if ( v2 )
      CRefCountedBuffer::RefCountedBufferRelease(v2);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x18u )
      v3 = *((_BYTE *)a1 + 48) & 1;
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
      *((PKSPIN_LOCK *)a1 + 3),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a1 + 4),
      v4,
      v5,
      v6,
      v7,
      v8,
      v3);
  }
}
