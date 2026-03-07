__int64 __fastcall NtDCompositionNotifySuperWetInkWork(unsigned int a1)
{
  int v1; // edi
  struct DirectComposition::CApplicationChannel *v2; // rsi
  __int64 v3; // rbp
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rcx
  struct DirectComposition::CApplicationChannel *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
  if ( v1 >= 0 )
  {
    v2 = v7;
    v3 = *((_QWORD *)v7 + 5);
    v4 = *(struct _ERESOURCE **)(v3 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v4, 1u);
    v5 = *(_QWORD *)(v3 + 80);
    if ( v5 )
      KeSetEvent(*(PRKEVENT *)(v5 + 8), 1, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 8));
    KeLeaveCriticalRegion();
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v2)(v2);
  }
  return (unsigned int)v1;
}
