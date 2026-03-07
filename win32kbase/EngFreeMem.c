void __stdcall EngFreeMem(PVOID pv)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // r8d
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( pv )
  {
    v1 = (char *)pv - 32;
    v2 = *(_QWORD *)(SGDGetSessionState(pv) + 24);
    v3 = *(struct _ERESOURCE **)(v2 + 3216);
    if ( v3 )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    }
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *(_QWORD *)(v2 + 3216);
    if ( v6 )
    {
      v7 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
      if ( *(_DWORD *)(v7 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v7,
          (unsigned int)&LockRelease,
          v8,
          v6,
          (__int64)L"GreBaseGlobals.MultiUserEngAllocListLock");
      v9 = *(struct _ERESOURCE **)(v2 + 3216);
      if ( v9 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v9);
        PsLeavePriorityRegion(v11, v10);
      }
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  }
}
