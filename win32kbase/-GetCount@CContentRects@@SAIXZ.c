__int64 CContentRects::GetCount(void)
{
  struct CContentRects *Instance; // rax
  unsigned int v1; // ebx
  _OWORD v3[5]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v4; // [rsp+70h] [rbp-28h]

  Instance = CContentRects::GetInstance();
  v3[0] = *(_OWORD *)Instance;
  v3[1] = *((_OWORD *)Instance + 1);
  v3[2] = *((_OWORD *)Instance + 2);
  v3[3] = *((_OWORD *)Instance + 3);
  v3[4] = *((_OWORD *)Instance + 4);
  v4 = *((_QWORD *)Instance + 10);
  CPushLock::AcquireLockShared((CPushLock *)v3);
  v1 = v4;
  CPushLock::ReleaseLock((CPushLock *)v3);
  return v1;
}
