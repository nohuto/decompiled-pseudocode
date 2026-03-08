/*
 * XREFs of MmLockPhysicalPagesByVa @ 0x140A2AA04
 * Callers:
 *     VmpLockMemoryForPin @ 0x1409DA418 (VmpLockMemoryForPin.c)
 * Callees:
 *     MiProbeAndLockComplete @ 0x140267C70 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiCheckLockUnlockByVa @ 0x14061A2D0 (MiCheckLockUnlockByVa.c)
 */

__int64 __fastcall MmLockPhysicalPagesByVa(__int64 a1, __int64 a2, __int64 a3, signed __int32 a4)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // eax
  signed __int32 v14; // [rsp+28h] [rbp-E0h]
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B8h]
  __int128 v17; // [rsp+54h] [rbp-B4h]
  int v18; // [rsp+64h] [rbp-A4h]
  unsigned __int64 v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  _QWORD v21[22]; // [rsp+78h] [rbp-90h] BYREF

  memset(v21, 0, sizeof(v21));
  v18 = 0;
  v8 = (a1 & 0xFFF) + a2 + 4095;
  v17 = 0LL;
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !MiCheckLockUnlockByVa(v11, v10, a3) )
    return 3221225659LL;
  v15 = 0LL;
  v16 = 56;
  v19 = v9;
  v20 = 1LL;
  LOBYTE(v14) = 1;
  result = MiProbeAndLockPrepare((__int64)v21, (__int64)&v15, v9, v8 & 0xFFFFFFFFFFFFF000uLL, v14, a4, 3);
  if ( (int)result >= 0 )
  {
    v21[16] = a3;
    v13 = MiProbeAndLockPacket((__int64)v21);
    return MiProbeAndLockComplete((__int64)v21, v13);
  }
  return result;
}
