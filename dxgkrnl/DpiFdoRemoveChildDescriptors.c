void __fastcall DpiFdoRemoveChildDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3320), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3424), Executive, 0, 0, 0LL);
  for ( i = (_QWORD *)(v1 + 3480); (_QWORD *)*i != i; DpiFdoRemoveChildDescriptor(v1, (_QWORD *)(*i - 32LL)) )
    ;
  KeReleaseMutex((PRKMUTEX)(v1 + 3424), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3320));
  KeLeaveCriticalRegion();
}
