void __fastcall ShadowUnLock(struct _PANDEV *a1)
{
  struct _KSEMAPHORE *v2; // rcx
  LONG Limit; // r8d

  KeWaitForSingleObject((PVOID)(*((_QWORD *)a1 + 98) + 32LL), UserRequest, 0, 0, 0LL);
  v2 = (struct _KSEMAPHORE *)*((_QWORD *)a1 + 98);
  Limit = v2[2].Limit;
  if ( Limit )
  {
    KeReleaseSemaphore(v2, 0, Limit, 0);
    *(_DWORD *)(*((_QWORD *)a1 + 98) + 88LL) = 0;
  }
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)a1 + 98) + 32LL), 0);
}
