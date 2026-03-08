/*
 * XREFs of MiScrubMemoryWorker @ 0x140A439A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     MiInitializeScrubPacket @ 0x140A433C8 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140A436D0 (MiReleaseScrubPacket.c)
 *     MiScrubNode @ 0x140A43A10 (MiScrubNode.c)
 */

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
