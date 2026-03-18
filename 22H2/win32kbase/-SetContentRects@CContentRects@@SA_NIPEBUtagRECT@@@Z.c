/*
 * XREFs of ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0130324
 * Callers:
 *     NtUserSetSystemContentRects @ 0x1C014BE50 (NtUserSetSystemContentRects.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE480 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00C4124 (-GetInstance@CContentRects@@CAAEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1C0130264 (-Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01EFA40 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F38C4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

bool __fastcall CContentRects::SetContentRects(unsigned int a1, const struct tagRECT *a2)
{
  struct CContentRects *Instance; // rax
  CContentRects *v5; // rax
  bool v6; // bl
  _DWORD v8[4]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v9[5]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+80h] [rbp-28h]

  Instance = CContentRects::GetInstance();
  v9[0] = *(_OWORD *)Instance;
  v9[1] = *((_OWORD *)Instance + 1);
  v9[2] = *((_OWORD *)Instance + 2);
  v9[3] = *((_OWORD *)Instance + 3);
  v9[4] = *((_OWORD *)Instance + 4);
  v10 = *((_QWORD *)Instance + 10);
  CPushLock::AcquireLockExclusive((CPushLock *)v9);
  v5 = CContentRects::GetInstance();
  v6 = CContentRects::Set(v5, a1, a2);
  CPushLock::ReleaseLock((CPushLock *)v9);
  if ( isRootPartition() && CIVChannel::ContainerConnected(3u) )
  {
    v8[0] = 0;
    IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate((struct CONTAINER_ID *)v8);
  }
  return v6;
}
