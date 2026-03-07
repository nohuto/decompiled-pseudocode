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
