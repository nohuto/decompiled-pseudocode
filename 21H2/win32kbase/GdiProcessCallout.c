/*
 * XREFs of GdiProcessCallout @ 0x1C014D030
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     GreIsCurrentProcessSystemCritical @ 0x1C0072C7C (GreIsCurrentProcessSystemCritical.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C0072CA0 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00828D0 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0086FC0 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0091850 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     DxDdProcessCallout @ 0x1C00994B0 (DxDdProcessCallout.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00B6AB4 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     IsUmfdUninitializeProcessSupported @ 0x1C00B80B0 (IsUmfdUninitializeProcessSupported.c)
 *     UmfdUninitializeProcess @ 0x1C00B8184 (UmfdUninitializeProcess.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C00C9874 (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB2F0 (GrepSecureVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  __int64 ProcessPeb; // rax
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  HANDLE v10; // rax
  unsigned int CurrentProcessId; // ebx
  int v12; // r15d
  HANDLE ProcessId; // rax
  COPM *v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  HANDLE v17; // rcx
  BOOLEAN i; // dl
  PVOID v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
  {
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0 && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock() )
    {
      if ( a2 )
      {
        if ( !a1 && (int)IsUmfdUninitializeProcessSupported() >= 0 )
        {
          UmfdUninitializeProcess();
          return 3221225495LL;
        }
      }
      else if ( (int)IsUmfdUninitializeProcessSupported() >= 0 )
      {
        UmfdUninitializeProcess();
      }
    }
    return 0LL;
  }
  else
  {
    if ( !a1 )
      return 3221225495LL;
    if ( a2 )
    {
      RtlInitializeGenericTableAvl(
        (PRTL_AVL_TABLE)(a1 + 88),
        (PRTL_AVL_COMPARE_ROUTINE)GDIEngUserMemAllocNodeCompare,
        (PRTL_AVL_ALLOCATE_ROUTINE)GDIEngUserMemAllocNodeAlloc,
        (PRTL_AVL_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
        0LL);
      *(_QWORD *)(a1 + 200) = a1 + 192;
      *(_QWORD *)(a1 + 192) = a1 + 192;
      *(_QWORD *)(a1 + 216) = a1 + 208;
      *(_QWORD *)(a1 + 208) = a1 + 208;
      ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
      v6 = ProcessPeb;
      if ( ProcessPeb
        && (*(_DWORD *)(ProcessPeb + 264) = 20,
            memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
            ViewSize[1] = a1 + 248,
            (int)DxDdProcessCallout(a1 + 248, a2, v7) >= 0) )
      {
        BaseAddress = 0LL;
        ViewSize[0] = 0LL;
        SectionHandle = 0LL;
        if ( ObOpenObjectByPointer(gpHmgrSharedHandleSection, 0x200u, 0LL, 0xF001Fu, 0LL, 0, &SectionHandle) < 0 )
        {
          v9 = -1073741502;
        }
        else
        {
          v9 = ZwMapViewOfSection(
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
          if ( v9 >= 0
            && (!(unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage()
              ? (v10 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u))
              : (v10 = GrepSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u)),
                (*(_QWORD *)(a1 + 240) = v10) != 0LL) )
          {
            *(_QWORD *)(v6 + 248) = BaseAddress;
          }
          else
          {
            v9 = -1073741502;
          }
          ZwClose(SectionHandle);
        }
        if ( v9 < 0 )
          DxDdProcessCallout(a1 + 248, 0, v8);
        return (unsigned int)v9;
      }
      else
      {
        return 3221225794LL;
      }
    }
    else
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      GdiUnmapGDIW32PIDLockedBitmaps(a1);
      v12 = NtGdiCloseProcess((GdiHandleManager *)(CurrentProcessId & 0xFFFFFFFC), 1u);
      ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
      COPM::DestroyProtectedOutputsOwnedByProcess(v14, ProcessId);
      if ( qword_1C02569D0 )
        v16 = qword_1C02569D0();
      else
        v16 = -1073741637;
      if ( v16 >= 0 )
      {
        v17 = PsGetProcessId(*(PEPROCESS *)a1);
        if ( qword_1C02569D8 )
          qword_1C02569D8(v17);
      }
      DxDdProcessCallout(a1 + 248, 0, v15);
      for ( i = 1; ; i = 0 )
      {
        v19 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
        if ( !v19 )
          break;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v19);
      }
      v20 = *(_QWORD **)(a1 + 192);
      if ( v20 )
      {
        while ( v20 != (_QWORD *)(a1 + 192) )
        {
          v21 = (__int64)v20;
          v20 = (_QWORD *)*v20;
          Win32FreePool(v21);
        }
      }
      v22 = *(_QWORD **)(a1 + 208);
      if ( v22 )
      {
        while ( v22 != (_QWORD *)(a1 + 208) )
        {
          v23 = (__int64)v22;
          v22 = (_QWORD *)*v22;
          Win32FreePool(v23);
        }
      }
      if ( *(_QWORD *)(a1 + 240) )
      {
        Feature_2249667896__private_IsEnabledDeviceUsage();
        MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 240));
        *(_QWORD *)(a1 + 240) = 0LL;
      }
      return v12 == 0 ? 0xC0000121 : 0;
    }
  }
}
