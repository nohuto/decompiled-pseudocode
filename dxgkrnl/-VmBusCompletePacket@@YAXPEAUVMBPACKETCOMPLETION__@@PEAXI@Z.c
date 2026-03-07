void __fastcall VmBusCompletePacket(struct VMBPACKETCOMPLETION__ *a1, void *a2, unsigned int a3)
{
  __int64 v4; // r8

  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  v4 = 0x20000LL;
  if ( a3 <= 0x20000 )
    v4 = a3;
  ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, void *, __int64))qword_1C013CE98)(a1, a2, v4);
}
