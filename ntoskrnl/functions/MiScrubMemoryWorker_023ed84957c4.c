char __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned __int64 v4; // rax
  signed __int32 v5; // eax

  v1 = *(_QWORD *)a1;
  v3 = MiInitializeScrubPacket((__int64 *)a1);
  if ( v3 >= 0 )
  {
    MiScrubNode(a1);
    MiReleaseScrubPacket(a1);
  }
  v4 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 12) = v3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 40), v4);
  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( v5 == 1 )
    LOBYTE(v5) = KeSignalGate(v1 + 8, 1u);
  return v5;
}
