/*
 * XREFs of ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0144878
 * Callers:
 *     NtUserSetSystemContentRects @ 0x1C01628A0 (NtUserSetSystemContentRects.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EF3E0 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00C5450 (-GetInstance@CContentRects@@CAAEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1C01447B4 (-Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z.c)
 *     ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x1C01F1D44 (-BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ.c)
 */

bool __fastcall CContentRects::SetContentRects(unsigned int a1, const struct tagRECT *a2)
{
  struct CContentRects *Instance; // rax
  CContentRects *v5; // rax
  IVContentRectsSync *v6; // rcx
  _OWORD v8[5]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+70h] [rbp-28h]

  Instance = CContentRects::GetInstance();
  v8[0] = *(_OWORD *)Instance;
  v8[1] = *((_OWORD *)Instance + 1);
  v8[2] = *((_OWORD *)Instance + 2);
  v8[3] = *((_OWORD *)Instance + 3);
  v8[4] = *((_OWORD *)Instance + 4);
  v9 = *((_QWORD *)Instance + 10);
  CPushLock::AcquireLockExclusive((CPushLock *)v8);
  v5 = CContentRects::GetInstance();
  LOBYTE(a1) = CContentRects::Set(v5, a1, a2);
  CPushLock::ReleaseLock((CPushLock *)v8);
  IVContentRectsSync::BroadcastUpdateToAllContainers(v6);
  return a1;
}
