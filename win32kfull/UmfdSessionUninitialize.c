void __fastcall UmfdSessionUninitialize(Gre::Umfd *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  PVOID *v7; // rbx
  __int64 v8; // rbx
  void *v9; // rcx

  if ( Gre::Umfd::IsSessionGlobalsAreaAllocated(a1) )
  {
    UmfdCallSessionUninitialize(v1);
    UmfdAllocation::Uninitialize(v2);
    UmfdHostLifeTimeManager::SessionUninitialize(v3);
    v6 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
    v7 = *(PVOID **)(v6 + 23480);
    if ( v7 )
    {
      ExFreePoolWithTag(v7[6], 0);
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(v6 + 23480) = 0LL;
    }
    v8 = SGDGetSessionState(v5);
    v9 = *(void **)(v8 + 40);
    if ( v9 )
    {
      EngFreeMem(v9);
      *(_QWORD *)(v8 + 40) = 0LL;
    }
  }
}
