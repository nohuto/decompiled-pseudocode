/*
 * XREFs of GdiProcessCallout @ 0x1C006FD60
 * Callers:
 *     <none>
 * Callees:
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C006BFB0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C007026C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C00AFF94 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00D1208 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     IsUmfdUninitializeProcessSupported @ 0x1C00D4658 (IsUmfdUninitializeProcessSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  int v4; // eax
  __int64 ProcessPeb; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  NTSTATUS v10; // ebx
  HANDLE v11; // rax
  int v13; // r15d
  HANDLE ProcessId; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  HANDLE v18; // rcx
  BOOLEAN i; // dl
  PVOID v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rbx
  void *v23; // rcx
  void *v24; // rdx
  void *v25; // rdx
  int v26; // eax
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 )
  {
    v4 = (int)qword_1C02D5FD0;
    if ( qword_1C02D5FD0 )
      v4 = qword_1C02D5FD0();
    if ( v4 )
    {
      if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0 )
      {
        v26 = (int)qword_1C02D5C00;
        if ( qword_1C02D5C00 )
          v26 = qword_1C02D5C00();
        if ( v26 )
        {
          if ( a2 )
          {
            if ( !a1 && (int)IsUmfdUninitializeProcessSupported() >= 0 )
            {
              if ( qword_1C02D5C10 )
                qword_1C02D5C10();
              return 3221225495LL;
            }
          }
          else if ( (int)IsUmfdUninitializeProcessSupported() >= 0 && qword_1C02D5C10 )
          {
            qword_1C02D5C10();
          }
        }
      }
      return 0LL;
    }
  }
  if ( !a1 )
    return 3221225495LL;
  if ( a2 )
  {
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(a1 + 88),
      rimUserMemAllocNodeCompare,
      GDIEngUserMemAllocNodeAlloc,
      rimUserMemAllocNodeFree,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v6 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = *(_DWORD *)(a1 + 292),
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          ViewSize[1] = a1 + 248,
          LOBYTE(v7) = a2,
          (int)DxDdProcessCallout(a1 + 248, v7) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      v9 = SGDGetSessionState(v8);
      if ( ObOpenObjectByPointer(
             *(PVOID *)(*(_QWORD *)(v9 + 24) + 2344LL),
             0x200u,
             0LL,
             0xF001Fu,
             0LL,
             0,
             &SectionHandle) < 0 )
      {
        v10 = -1073741502;
      }
      else
      {
        v10 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                ViewSize,
                ViewUnmap,
                0,
                2u);
        if ( v10 >= 0 && (v11 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u), (*(_QWORD *)(a1 + 240) = v11) != 0LL) )
          *(_QWORD *)(v6 + 248) = BaseAddress;
        else
          v10 = -1073741502;
        ZwClose(SectionHandle);
      }
      if ( v10 < 0 )
        DxDdProcessCallout(a1 + 248, 0LL);
      return (unsigned int)v10;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    v13 = GrepCloseCurrentProcess();
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    v16 = SGDGetSessionState(v15);
    COPM::DestroyProtectedOutputsOwnedByProcess(*(COPM **)(*(_QWORD *)(v16 + 24) + 3824LL), ProcessId);
    if ( qword_1C02D5F48 )
      v17 = qword_1C02D5F48();
    else
      v17 = -1073741637;
    if ( v17 >= 0 )
    {
      v18 = PsGetProcessId(*(PEPROCESS *)a1);
      if ( qword_1C02D5F50 )
        qword_1C02D5F50(v18);
    }
    DxDdProcessCallout(a1 + 248, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v20 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v20 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v20);
    }
    v21 = *(_QWORD **)(a1 + 192);
    if ( v21 )
    {
      while ( v21 != (_QWORD *)(a1 + 192) )
      {
        v24 = v21;
        v21 = (_QWORD *)*v21;
        if ( v24 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v24);
      }
    }
    v22 = *(_QWORD **)(a1 + 208);
    if ( v22 )
    {
      while ( v22 != (_QWORD *)(a1 + 208) )
      {
        v25 = v22;
        v22 = (_QWORD *)*v22;
        if ( v25 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v25);
      }
    }
    v23 = *(void **)(a1 + 240);
    if ( v23 )
    {
      MmUnsecureVirtualMemory(v23);
      *(_QWORD *)(a1 + 240) = 0LL;
    }
    return v13 == 0 ? 0xC0000121 : 0;
  }
}
