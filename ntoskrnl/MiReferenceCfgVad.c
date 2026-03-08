/*
 * XREFs of MiReferenceCfgVad @ 0x140727250
 * Callers:
 *     MiCfgInitializeProcess @ 0x140727724 (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1407291A8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiUnlockVadShared @ 0x1402A5B30 (MiUnlockVadShared.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 */

char __fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v7 = 32LL * a3;
  v8 = *(_QWORD *)(v3 + 1680);
  v9 = MiObtainReferencedVadEx(a2, 2, &v13);
  v10 = (((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12) | 0xFFF) + 1;
  MiUnlockVadShared(a1, v9);
  v11 = 0;
  *(_QWORD *)(v7 + v8 + 424) = a2;
  *(_QWORD *)(v7 + v8 + 440) = v9;
  *(_QWORD *)(v7 + v8 + 432) = v10 - a2;
  *(_DWORD *)(v7 + v8 + 448) = 0;
  if ( a3 == 1 )
  {
    LOBYTE(v11) = *(_WORD *)(v3 + 2412) == 452;
    *(_DWORD *)(v7 + v8 + 448) = v11;
  }
  return v11;
}
