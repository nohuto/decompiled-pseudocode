/*
 * XREFs of MiScrubMemoryWorker @ 0x140A46670
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x14035CCEC (KeSignalGate.c)
 *     MiInitializeScrubPacket @ 0x140A4609C (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140A463A4 (MiReleaseScrubPacket.c)
 *     MiScrubNode @ 0x140A466E0 (MiScrubNode.c)
 */

__int64 __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned __int64 v4; // rax
  __int64 result; // rax

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
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate(v1 + 8, 1u);
  return result;
}
