/*
 * XREFs of xxxResolveDesktop @ 0x1C00CF130
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     CloseProtectedHandle @ 0x1C00A6598 (CloseProtectedHandle.c)
 *     _OpenDesktop @ 0x1C00CEF78 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00CFA90 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C00CFB14 (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C00CFD84 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D0F08 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxConnectService @ 0x1C00D159C (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r13d
  NTSTATUS result; // eax
  NTSTATUS ProcessLuid; // edi
  PVOID v9; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID *v13; // r14
  HANDLE v14; // rax
  int v15; // r8d
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _UNICODE_STRING *v22; // r14
  __int64 v23; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v25; // xmm1
  __int16 v26; // cx
  unsigned __int64 v27; // xmm0_8
  _WORD *i; // rdx
  PVOID v29; // rcx
  ULONG v30; // eax
  __int64 v31; // rdx
  NTSTATUS v32; // eax
  HANDLE v33; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-380h]
  int v39; // [rsp+5Ch] [rbp-37Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-378h] BYREF
  int v41; // [rsp+70h] [rbp-368h]
  int v42; // [rsp+74h] [rbp-364h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-360h] BYREF
  PVOID v44; // [rsp+80h] [rbp-358h] BYREF
  HANDLE SourceProcessHandle; // [rsp+88h] [rbp-350h] BYREF
  HANDLE *v46; // [rsp+90h] [rbp-348h]
  _QWORD *v47; // [rsp+98h] [rbp-340h]
  PUNICODE_STRING v48; // [rsp+A0h] [rbp-338h]
  int v49; // [rsp+A8h] [rbp-330h]
  __int64 v50; // [rsp+B0h] [rbp-328h] BYREF
  void *TargetHandle; // [rsp+B8h] [rbp-320h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-318h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-308h] BYREF
  PVOID v54[6]; // [rsp+E0h] [rbp-2F8h] BYREF
  _QWORD v55[3]; // [rsp+110h] [rbp-2C8h] BYREF
  int v56; // [rsp+128h] [rbp-2B0h]
  int v57; // [rsp+12Ch] [rbp-2ACh]
  WCHAR SourceString[32]; // [rsp+140h] [rbp-298h] BYREF
  char v59; // [rsp+180h] [rbp-258h] BYREF

  v39 = a4;
  v46 = a3;
  SourceProcessHandle = a1;
  v54[5] = a1;
  v54[2] = a3;
  v47 = a5;
  v6 = 0;
  v41 = 0;
  DestinationString = 0LL;
  Source = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v48 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  v54[0] = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, v54, 0LL);
  ProcessLuid = result;
  v9 = v54[0];
  v54[1] = v54[0];
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v59;
    ProcessWin32Process = PsGetProcessWin32Process(v54[0]);
    v13 = (PVOID *)ProcessWin32Process;
    v54[3] = (PVOID)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 672) && *(_QWORD *)(ProcessWin32Process + 392) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12, v11) )
        {
          Handle = v13[84];
          SourceHandle = v13[49];
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(v13[83], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            v13[42],
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
            v30 = RtlNtStatusToDosError(ProcessLuid);
            UserSetLastError(v30, v31);
          }
        }
        ObfDereferenceObject(v9);
        *v46 = Handle;
        v14 = SourceHandle;
        if ( SourceHandle )
          ProcessLuid = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v25 = *a2;
      Source = v25;
      v26 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v25) >> 1;
      v27 = _mm_srli_si128((__m128i)v25, 8).m128i_u64[0];
      for ( i = (_WORD *)v27; v26; --v26 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v15 = 0;
      v38 = 0;
      if ( v26 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v26 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v27) >> 1);
        v16 = 0;
        v42 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ProcessLuid = UserTestForWinStaAccess(&Destination);
        if ( ProcessLuid < 0 )
          goto LABEL_49;
        v15 = 0;
LABEL_17:
        v17 = 0;
        if ( !v15 )
          v17 = v39;
        v39 = v17;
        v49 = v17;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v16 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v50 = 0LL;
            ProcessLuid = GetProcessLuid(0LL, &v50);
            if ( ProcessLuid < 0 )
              goto LABEL_49;
            LODWORD(Object) = v50;
            RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", HIDWORD(v50), Object);
            RtlInitUnicodeString(&Source, SourceString);
            v41 = 0;
          }
          else
          {
            v6 = 1;
            v41 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess(v19, v18) )
          {
            v32 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            ProcessLuid = v32;
            if ( v32 < 0 )
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
                v48 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v54[4] = (char *)BaseAddress + 48;
                if ( ProcessLuid >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v48;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v39 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbNonServiceSession && ProcessLuid >= 0 && !Handle && !v6 && v16 )
              {
                ProcessLuid = xxxConnectService(&Destination, &SourceHandle, v46);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( ProcessLuid < 0 )
                  return ProcessLuid;
                goto LABEL_52;
              }
              v15 = v38;
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
                *v46 = Handle;
LABEL_52:
                v14 = SourceHandle;
LABEL_10:
                *v47 = v14;
                return ProcessLuid;
              }
              if ( !v15 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
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
                    v22 = v48;
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
                    v22 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( ProcessLuid >= 0 )
                  {
                    SafeCopyUnicodeString(v22, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v23 = v38;
                    *((_DWORD *)BaseAddress + 6) = (v38 << 7) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v22;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v39 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v23 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop((__int64)BaseAddress, v23, 0LL, 0x2000000, &SourceHandle);
                    ProcessLuid = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess(v21, v20) )
              {
                v44 = 0LL;
                ProcessLuid = ZwDuplicateObject(
                                SourceProcessHandle,
                                SourceHandle,
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &v44,
                                0,
                                0,
                                2u);
                if ( ProcessLuid < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v44;
              }
              if ( !SourceHandle || !v13 )
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
                v55[0] = 1LL;
                v55[1] = v9;
                v33 = SourceProcessHandle;
                v55[2] = SourceProcessHandle;
                v56 = 0;
                v57 = 1;
                ProcessLuid = MapDesktop((__int64)v55);
                if ( ProcessLuid < 0 )
                {
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v33);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v44 = 0LL;
          ProcessLuid = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, &v44, 0LL);
          if ( ProcessLuid >= 0 )
          {
            v29 = v44;
            if ( (((*((_DWORD *)v44 + 16) >> 2) & 1) == 0) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle, 1);
                v29 = v44;
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v29);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v25;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v15 = 1;
      v38 = 1;
    }
    v16 = 1;
    v42 = 1;
    goto LABEL_17;
  }
  return result;
}
