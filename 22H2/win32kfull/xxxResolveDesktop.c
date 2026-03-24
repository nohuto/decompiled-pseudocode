/*
 * XREFs of xxxResolveDesktop @ 0x1C000F4F0
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktop @ 0x1C000F208 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C000FE48 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C000FECC (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C0010164 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0011430 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MapDesktop @ 0x1C004EDB0 (MapDesktop.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00D9098 (CloseProtectedHandle.c)
 *     xxxConnectService @ 0x1C012F194 (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r13d
  NTSTATUS result; // eax
  int ProcessLuid; // edi
  PVOID v9; // r15
  __int64 ProcessWin32Process; // rax
  PVOID *v11; // r14
  HANDLE v12; // rax
  int v13; // r8d
  int v14; // r12d
  int v15; // eax
  struct _UNICODE_STRING *v16; // r14
  __int64 v17; // rdx
  int Desktop; // eax
  UNICODE_STRING v19; // xmm1
  __int16 v20; // cx
  unsigned __int64 v21; // xmm0_8
  _WORD *i; // rdx
  PVOID v23; // rcx
  ULONG v24; // eax
  NTSTATUS v25; // eax
  HANDLE v26; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-380h]
  int v32; // [rsp+5Ch] [rbp-37Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-378h] BYREF
  int v34; // [rsp+70h] [rbp-368h]
  int v35; // [rsp+74h] [rbp-364h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-360h] BYREF
  PVOID v37; // [rsp+80h] [rbp-358h] BYREF
  HANDLE SourceProcessHandle; // [rsp+88h] [rbp-350h] BYREF
  HANDLE *v39; // [rsp+90h] [rbp-348h]
  _QWORD *v40; // [rsp+98h] [rbp-340h]
  PUNICODE_STRING v41; // [rsp+A0h] [rbp-338h]
  PVOID v42; // [rsp+A8h] [rbp-330h] BYREF
  int v43; // [rsp+B0h] [rbp-328h]
  __int64 v44; // [rsp+B8h] [rbp-320h] BYREF
  void *TargetHandle; // [rsp+C0h] [rbp-318h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-2F8h] BYREF
  HANDLE *v48; // [rsp+F0h] [rbp-2E8h]
  __int64 v49; // [rsp+F8h] [rbp-2E0h]
  char *v50; // [rsp+100h] [rbp-2D8h]
  void *v51; // [rsp+108h] [rbp-2D0h]
  _QWORD v52[3]; // [rsp+110h] [rbp-2C8h] BYREF
  int v53; // [rsp+128h] [rbp-2B0h]
  int v54; // [rsp+12Ch] [rbp-2ACh]
  WCHAR SourceString[32]; // [rsp+140h] [rbp-298h] BYREF
  char v56; // [rsp+180h] [rbp-258h] BYREF

  v32 = a4;
  v39 = a3;
  SourceProcessHandle = a1;
  v51 = a1;
  v48 = a3;
  v40 = a5;
  v6 = 0;
  v34 = 0;
  DestinationString = 0LL;
  Source = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v41 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  v42 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v42, 0LL);
  ProcessLuid = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v56;
    v9 = v42;
    ProcessWin32Process = PsGetProcessWin32Process(v42);
    v11 = (PVOID *)ProcessWin32Process;
    v49 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 672) && *(_QWORD *)(ProcessWin32Process + 392) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess() )
        {
          Handle = v11[84];
          SourceHandle = v11[49];
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(v11[83], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            v11[42],
                            0,
                            0LL,
                            0x2000000u,
                            (POBJECT_TYPE)ExDesktopObjectType,
                            1,
                            &SourceHandle);
            if ( ProcessLuid < 0 )
            {
              ObCloseHandle(Handle, 1);
              Handle = 0LL;
            }
          }
          if ( ProcessLuid < 0 )
          {
            v24 = RtlNtStatusToDosError(ProcessLuid);
            UserSetLastError(v24);
          }
        }
        ObfDereferenceObject(v9);
        *v39 = Handle;
        v12 = SourceHandle;
        if ( SourceHandle )
          ProcessLuid = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v19 = *a2;
      Source = v19;
      v20 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v19) >> 1;
      v21 = _mm_srli_si128((__m128i)v19, 8).m128i_u64[0];
      for ( i = (_WORD *)v21; v20; --v20 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v13 = 0;
      v31 = 0;
      if ( v20 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v20 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v21) >> 1);
        v14 = 0;
        v35 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ProcessLuid = UserTestForWinStaAccess(&Destination);
        if ( ProcessLuid < 0 )
          goto LABEL_49;
        v13 = 0;
LABEL_17:
        v15 = 0;
        if ( !v13 )
          v15 = v32;
        v32 = v15;
        v43 = v15;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v14 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v44 = 0LL;
            ProcessLuid = GetProcessLuid(0LL, &v44);
            if ( ProcessLuid < 0 )
              goto LABEL_49;
            LODWORD(Object) = v44;
            RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", HIDWORD(v44), Object);
            RtlInitUnicodeString(&Source, SourceString);
            v34 = 0;
          }
          else
          {
            v6 = 1;
            v34 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess() )
          {
            v25 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            ProcessLuid = v25;
            if ( v25 < 0 )
            {
              Handle = 0LL;
LABEL_25:
              if ( ProcessLuid >= 0 && !Handle )
              {
                Destination.Length = 0;
                RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
                RtlAppendUnicodeToString(&Destination, L"\\");
                RtlAppendUnicodeStringToString(&Destination, &Source);
                RegionSize = 586LL;
                ProcessLuid = ZwAllocateVirtualMemory(
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &BaseAddress,
                                0LL,
                                &RegionSize,
                                0x1000u,
                                4u);
                v41 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v50 = (char *)BaseAddress + 48;
                if ( ProcessLuid >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v41;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v32 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbNonServiceSession && ProcessLuid >= 0 && !Handle && !v6 && v14 )
              {
                ProcessLuid = xxxConnectService(&Destination, &SourceHandle, v39);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( ProcessLuid < 0 )
                  return ProcessLuid;
                goto LABEL_52;
              }
              v13 = v31;
LABEL_33:
              if ( !Handle )
              {
                ProcessLuid = -1073741823;
                goto LABEL_49;
              }
              if ( SourceHandle )
              {
LABEL_49:
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                *v39 = Handle;
LABEL_52:
                v12 = SourceHandle;
LABEL_10:
                *v40 = v12;
                return ProcessLuid;
              }
              if ( !v13 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
              {
LABEL_37:
                if ( ProcessLuid < 0 )
                {
LABEL_47:
                  if ( !SourceHandle )
                  {
                    ObCloseHandle(Handle, 1);
                    Handle = 0LL;
                  }
                  goto LABEL_49;
                }
                if ( !SourceHandle )
                {
                  RtlCopyUnicodeString(&Destination, &DestinationString);
                  if ( BaseAddress )
                  {
                    v16 = v41;
                  }
                  else
                  {
                    RegionSize = 586LL;
                    ProcessLuid = ZwAllocateVirtualMemory(
                                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                    &BaseAddress,
                                    0LL,
                                    &RegionSize,
                                    0x1000u,
                                    4u);
                    v16 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( ProcessLuid >= 0 )
                  {
                    SafeCopyUnicodeString(v16, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v17 = v31;
                    *((_DWORD *)BaseAddress + 6) = (v31 << 7) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v16;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v32 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v17 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop(
                                  (struct _OBJECT_ATTRIBUTES *)BaseAddress,
                                  v17,
                                  0LL,
                                  0x2000000,
                                  &SourceHandle);
                    ProcessLuid = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess() )
              {
                v37 = 0LL;
                ProcessLuid = ZwDuplicateObject(
                                SourceProcessHandle,
                                SourceHandle,
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &v37,
                                0,
                                0,
                                2u);
                if ( ProcessLuid < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v37;
              }
              if ( !SourceHandle || !v11 )
                goto LABEL_37;
              SourceProcessHandle = 0LL;
              ProcessLuid = ObReferenceObjectByHandle(
                              SourceHandle,
                              0,
                              (POBJECT_TYPE)ExDesktopObjectType,
                              0,
                              &SourceProcessHandle,
                              0LL);
              if ( ProcessLuid >= 0 )
              {
                v52[0] = 1LL;
                v52[1] = v9;
                v26 = SourceProcessHandle;
                v52[2] = SourceProcessHandle;
                v53 = 0;
                v54 = 1;
                ProcessLuid = MapDesktop(v52);
                if ( ProcessLuid < 0 )
                {
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v26);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v37 = 0LL;
          ProcessLuid = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, &v37, 0LL);
          if ( ProcessLuid >= 0 )
          {
            v23 = v37;
            if ( (((*((_DWORD *)v37 + 16) >> 2) & 1) == 0) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle);
                v23 = v37;
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v23);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v19;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v13 = 1;
      v31 = 1;
    }
    v14 = 1;
    v35 = 1;
    goto LABEL_17;
  }
  return result;
}
