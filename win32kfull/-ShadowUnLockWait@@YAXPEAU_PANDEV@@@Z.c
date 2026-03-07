void __fastcall ShadowUnLockWait(struct _PANDEV *a1)
{
  ++*(_DWORD *)(*((_QWORD *)a1 + 98) + 88LL);
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)a1 + 98) + 32LL), 0);
  KeWaitForSingleObject(*((PVOID *)a1 + 98), UserRequest, 0, 0, 0LL);
}
