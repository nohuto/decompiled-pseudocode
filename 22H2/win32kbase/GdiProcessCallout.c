/*
 * XREFs of GdiProcessCallout @ 0x1C0073730
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C0073AF0 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0073B1C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0073F80 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C0074260 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C00884C0 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     IsUmfdUninitializeProcessSupported @ 0x1C00B83D0 (IsUmfdUninitializeProcessSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  int v4; // eax
  unsigned int CurrentProcessId; // ebx
  int v6; // r15d
  HANDLE ProcessId; // rax
  COPM *v8; // rcx
  int v9; // eax
  HANDLE v10; // rcx
  BOOLEAN i; // dl
  PVOID v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  void *v15; // rcx
  __int64 ProcessPeb; // rax
  __int64 v18; // r14
  __int64 v19; // r8
  NTSTATUS v20; // ebx
  HANDLE v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 )
  {
    v4 = (int)qword_1C0255A58;
    if ( qword_1C0255A58 )
      v4 = qword_1C0255A58();
    if ( v4 )
    {
      if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0 )
      {
        v24 = (int)qword_1C0255678;
        if ( qword_1C0255678 )
          v24 = qword_1C0255678();
        if ( v24 )
        {
          if ( a2 )
          {
            if ( !a1 && (int)IsUmfdUninitializeProcessSupported() >= 0 )
            {
              if ( qword_1C0255688 )
                qword_1C0255688();
              return 3221225495LL;
            }
          }
          else if ( (int)IsUmfdUninitializeProcessSupported() >= 0 && qword_1C0255688 )
          {
            qword_1C0255688();
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
      GDIEngUserMemAllocNodeCompare,
      GDIEngUserMemAllocNodeAlloc,
      (PRTL_AVL_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v18 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = 20,
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          ViewSize[1] = a1 + 248,
          LOBYTE(v19) = a2,
          (int)((__int64 (__fastcall *)(__int64, void *, __int64))qword_1C02508B8)(
                 a1 + 248,
                 &gDxgkWin32kEngInterface,
                 v19) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      if ( ObOpenObjectByPointer(gpHmgrSharedHandleSection, 0x200u, 0LL, 0xF001Fu, 0LL, 0, &SectionHandle) < 0 )
      {
        v20 = -1073741502;
      }
      else
      {
        v20 = ZwMapViewOfSection(
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
        if ( v20 >= 0 && (v21 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u), (*(_QWORD *)(a1 + 240) = v21) != 0LL) )
          *(_QWORD *)(v18 + 248) = BaseAddress;
        else
          v20 = -1073741502;
        ZwClose(SectionHandle);
      }
      if ( v20 < 0 )
        ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C02508B8)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
      return (unsigned int)v20;
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
    v6 = NtGdiCloseProcess(CurrentProcessId & 0xFFFFFFFC, 1LL);
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    COPM::DestroyProtectedOutputsOwnedByProcess(v8, ProcessId);
    if ( qword_1C02559D0 )
      v9 = qword_1C02559D0();
    else
      v9 = -1073741637;
    if ( v9 >= 0 )
    {
      v10 = PsGetProcessId(*(PEPROCESS *)a1);
      if ( qword_1C02559D8 )
        qword_1C02559D8(v10);
    }
    ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C02508B8)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v12 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v12 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v12);
    }
    v13 = *(_QWORD **)(a1 + 192);
    if ( v13 )
    {
      while ( v13 != (_QWORD *)(a1 + 192) )
      {
        v22 = (__int64)v13;
        v13 = (_QWORD *)*v13;
        Win32FreePool(v22);
      }
    }
    v14 = *(_QWORD **)(a1 + 208);
    if ( v14 )
    {
      while ( v14 != (_QWORD *)(a1 + 208) )
      {
        v23 = (__int64)v14;
        v14 = (_QWORD *)*v14;
        Win32FreePool(v23);
      }
    }
    v15 = *(void **)(a1 + 240);
    if ( v15 )
    {
      MmUnsecureVirtualMemory(v15);
      *(_QWORD *)(a1 + 240) = 0LL;
    }
    return v6 == 0 ? 0xC0000121 : 0;
  }
}
