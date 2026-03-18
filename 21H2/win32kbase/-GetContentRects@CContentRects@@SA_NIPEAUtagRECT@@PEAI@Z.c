/*
 * XREFs of ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0144660
 * Callers:
 *     NtUserGetSystemContentRects @ 0x1C015AC70 (NtUserGetSystemContentRects.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01F1E90 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00C5450 (-GetInstance@CContentRects@@CAAEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1C01444F0 (-Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z.c)
 */

bool __fastcall CContentRects::GetContentRects(unsigned int a1, struct tagRECT *a2, unsigned int *a3)
{
  struct CContentRects *Instance; // rax
  _OWORD v8[5]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+70h] [rbp-28h]

  Instance = CContentRects::GetInstance();
  v8[0] = *(_OWORD *)Instance;
  v8[1] = *((_OWORD *)Instance + 1);
  v8[2] = *((_OWORD *)Instance + 2);
  v8[3] = *((_OWORD *)Instance + 3);
  v8[4] = *((_OWORD *)Instance + 4);
  v9 = *((_QWORD *)Instance + 10);
  CPushLock::AcquireLockShared((CPushLock *)v8);
  LOBYTE(a1) = CContentRects::Get((CContentRects *)v8, a1, a2, a3);
  CPushLock::ReleaseLock((CPushLock *)v8);
  return a1;
}
