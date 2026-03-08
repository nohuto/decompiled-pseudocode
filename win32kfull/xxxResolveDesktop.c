/*
 * XREFs of xxxResolveDesktop @ 0x1C00BF660
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C003E450 (MapDesktop.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C0094854 (CloseProtectedHandle.c)
 *     _OpenDesktop @ 0x1C00BF4B0 (_OpenDesktop.c)
 *     _UserTestForWinStaAccess @ 0x1C00C00CC (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C00C0364 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxConnectService @ 0x1C012B764 (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, HANDLE *a5)
{
  NTSTATUS result; // eax
  NTSTATUS ProcessLuid; // edi
  PVOID v8; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  HANDLE v14; // rax
  int v15; // r15d
  int v16; // r13d
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char *v22; // r13
  USHORT v23; // ax
  unsigned __int64 v24; // r15
  PUNICODE_STRING v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  PUNICODE_STRING v29; // rax
  struct _UNICODE_STRING *v30; // r15
  USHORT Length; // ax
  unsigned __int64 v32; // rsi
  PUNICODE_STRING v33; // rsi
  __int64 v34; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v36; // xmm1
  __int16 v37; // cx
  unsigned __int64 v38; // xmm0_8
  _WORD *i; // rdx
  PVOID v40; // r15
  ULONG v41; // eax
  NTSTATUS v42; // eax
  PVOID v43; // rsi
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-380h]
  int v49; // [rsp+5Ch] [rbp-37Ch]
  BOOL v50; // [rsp+60h] [rbp-378h]
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-370h] BYREF
  int v52; // [rsp+78h] [rbp-360h]
  PVOID v53; // [rsp+80h] [rbp-358h] BYREF
  BOOL v54; // [rsp+88h] [rbp-350h]
  PUNICODE_STRING v55; // [rsp+90h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-340h] BYREF
  HANDLE *v57; // [rsp+A0h] [rbp-338h]
  HANDLE *v58; // [rsp+A8h] [rbp-330h]
  int v59; // [rsp+B0h] [rbp-328h]
  __int64 v60; // [rsp+B8h] [rbp-320h] BYREF
  void *TargetHandle; // [rsp+C0h] [rbp-318h] BYREF
  HANDLE SourceProcessHandle; // [rsp+C8h] [rbp-310h]
  UNICODE_STRING Source; // [rsp+D0h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-2F8h] BYREF
  PVOID v65; // [rsp+F0h] [rbp-2E8h] BYREF
  PVOID v66[5]; // [rsp+F8h] [rbp-2E0h] BYREF
  _QWORD v67[3]; // [rsp+120h] [rbp-2B8h] BYREF
  int v68; // [rsp+138h] [rbp-2A0h]
  int v69; // [rsp+13Ch] [rbp-29Ch]
  WCHAR SourceString[32]; // [rsp+150h] [rbp-288h] BYREF
  char v71; // [rsp+190h] [rbp-248h] BYREF

  v49 = a4;
  v57 = a3;
  SourceProcessHandle = a1;
  v66[4] = a1;
  v66[2] = a3;
  v58 = a5;
  v50 = 0;
  v54 = 0;
  DestinationString = 0LL;
  Source = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v55 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  v65 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v65, 0LL);
  ProcessLuid = result;
  v8 = v65;
  v66[1] = v65;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v71;
    ProcessWin32Process = PsGetProcessWin32Process(v65);
    v13 = ProcessWin32Process;
    v53 = (PVOID)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v11 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      v13 = v11 & ProcessWin32Process;
      v53 = (PVOID)(v11 & ProcessWin32Process);
    }
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v8);
        return -1073741790;
      }
      if ( *(_QWORD *)(v13 + 664) && *(_QWORD *)(v13 + 384) )
      {
        if ( v8 == (PVOID)PsGetCurrentProcess(v11, v10, v12) )
        {
          Handle = *(HANDLE *)(v13 + 664);
          SourceHandle = *(HANDLE *)(v13 + 384);
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(
                          *(PVOID *)(v13 + 656),
                          0,
                          0LL,
                          0x2000000u,
                          ExWindowStationObjectType,
                          1,
                          &Handle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            *(PVOID *)(v13 + 336),
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
            v41 = RtlNtStatusToDosError(ProcessLuid);
            UserSetLastError(v41);
          }
        }
        ObfDereferenceObject(v8);
        *v57 = Handle;
        v14 = SourceHandle;
        *a5 = SourceHandle;
        if ( v14 )
          return 0;
        return ProcessLuid;
      }
    }
    if ( a2 && a2->Length )
    {
      v36 = *a2;
      Source = v36;
      v37 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v36) >> 1;
      v38 = _mm_srli_si128((__m128i)v36, 8).m128i_u64[0];
      for ( i = (_WORD *)v38; v37; --v37 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v15 = 0;
      v48 = 0;
      if ( v37 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v37 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v38) >> 1);
        v16 = 0;
        v52 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ProcessLuid = UserTestForWinStaAccess(&Destination);
        if ( ProcessLuid < 0 )
          goto LABEL_58;
      }
      else
      {
        DestinationString = v36;
        v16 = 1;
        v52 = 1;
      }
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v15 = 1;
      v48 = 1;
      v16 = 1;
      v52 = 1;
    }
    v17 = 0;
    if ( !v15 )
      v17 = v49;
    v49 = v17;
    v59 = v17;
    if ( !grpWinStaList )
    {
LABEL_38:
      if ( !Handle )
      {
        ProcessLuid = -1073741823;
        goto LABEL_58;
      }
      if ( SourceHandle )
      {
LABEL_58:
        if ( BaseAddress )
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        ObfDereferenceObject(v8);
        *v57 = Handle;
LABEL_61:
        *v58 = SourceHandle;
        return ProcessLuid;
      }
      if ( !v15 || !(unsigned __int8)ObFindHandleForObject(v8, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
      {
LABEL_42:
        if ( ProcessLuid < 0 )
        {
LABEL_56:
          if ( !SourceHandle )
          {
            ObCloseHandle(Handle, 1);
            Handle = 0LL;
          }
          goto LABEL_58;
        }
        if ( !SourceHandle )
        {
          RtlCopyUnicodeString(&Destination, &DestinationString);
          if ( BaseAddress )
          {
            v29 = v55;
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
            v29 = (PUNICODE_STRING)((char *)BaseAddress + 48);
            v55 = (PUNICODE_STRING)((char *)BaseAddress + 48);
          }
          if ( ProcessLuid >= 0 )
          {
            v30 = v29 + 1;
            Length = Destination.Length;
            if ( Destination.Length > 0x20Au )
              Length = 522;
            v32 = Length;
            memmove(v30, Destination.Buffer, Length);
            if ( v32 + 2 <= 0x20A )
              *(&v30->Length + (v32 >> 1)) = 0;
            v33 = v55;
            RtlInitUnicodeString(v55, &v30->Length);
            v33->MaximumLength = 522;
            *(_DWORD *)BaseAddress = 48;
            *((_QWORD *)BaseAddress + 1) = Handle;
            v34 = v48;
            *((_DWORD *)BaseAddress + 6) = (v48 << 7) | 0x40;
            *((_QWORD *)BaseAddress + 2) = v33;
            *((_QWORD *)BaseAddress + 4) = 0LL;
            *((_QWORD *)BaseAddress + 5) = 0LL;
            if ( v49 )
              *((_DWORD *)BaseAddress + 6) |= 2u;
            if ( (_DWORD)v34 )
              Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
            else
              Desktop = OpenDesktop((__int64)BaseAddress, v34, 0LL, 0x2000000, &SourceHandle);
            ProcessLuid = Desktop;
          }
          goto LABEL_56;
        }
        goto LABEL_58;
      }
      if ( v8 != (PVOID)PsGetCurrentProcess(v27, v26, v28) )
      {
        v53 = 0LL;
        ProcessLuid = ZwDuplicateObject(SourceProcessHandle, SourceHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v53, 0, 0, 2u);
        if ( ProcessLuid < 0 )
        {
LABEL_105:
          CloseProtectedHandle(SourceHandle, 1);
          SourceHandle = 0LL;
          goto LABEL_42;
        }
        SourceHandle = v53;
      }
      if ( !SourceHandle || !v13 )
        goto LABEL_42;
      v53 = 0LL;
      ProcessLuid = ObReferenceObjectByHandle(SourceHandle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v53, 0LL);
      if ( ProcessLuid >= 0 )
      {
        v67[0] = 1LL;
        v67[1] = v8;
        v43 = v53;
        v67[2] = v53;
        v68 = 0;
        v69 = 1;
        ProcessLuid = MapDesktop((__int64)v67);
        if ( ProcessLuid < 0 )
        {
          CloseProtectedHandle(SourceHandle, 1);
          SourceHandle = 0LL;
        }
        ObfDereferenceObject(v43);
        goto LABEL_42;
      }
      goto LABEL_105;
    }
    if ( v16 )
    {
      RtlInitUnicodeString(&Source, L"WinSta0");
      RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      v18 = UserTestForWinStaAccess(&Destination);
      v54 = v18 >= 0;
      v50 = v54;
      if ( v18 < 0 )
      {
        v60 = 0LL;
        ProcessLuid = GetProcessLuid(0LL, &v60);
        if ( ProcessLuid < 0 )
          goto LABEL_58;
        LODWORD(Object) = v60;
        RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", HIDWORD(v60), Object);
        RtlInitUnicodeString(&Source, SourceString);
      }
      if ( (unsigned __int8)ObFindHandleForObject(v8, 0LL, ExWindowStationObjectType, 0LL, &Handle)
        && v8 != (PVOID)PsGetCurrentProcess(v20, v19, v21) )
      {
        v42 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
        ProcessLuid = v42;
        if ( v42 < 0 )
        {
          Handle = 0LL;
LABEL_26:
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
            v55 = (PUNICODE_STRING)((char *)BaseAddress + 48);
            v66[3] = (char *)BaseAddress + 48;
            if ( ProcessLuid >= 0 )
            {
              v22 = (char *)BaseAddress + 64;
              v23 = Destination.Length;
              if ( Destination.Length > 0x20Au )
                v23 = 522;
              v24 = v23;
              memmove(v22, Destination.Buffer, v23);
              if ( v24 + 2 <= 0x20A )
                *(_WORD *)&v22[2 * (v24 >> 1)] = 0;
              v25 = v55;
              RtlInitUnicodeString(v55, (PCWSTR)v22);
              v25->MaximumLength = 522;
              *(_DWORD *)BaseAddress = 48;
              *((_QWORD *)BaseAddress + 1) = 0LL;
              *((_DWORD *)BaseAddress + 6) = 64;
              *((_QWORD *)BaseAddress + 2) = v25;
              *((_QWORD *)BaseAddress + 4) = 0LL;
              *((_QWORD *)BaseAddress + 5) = 0LL;
              if ( v49 )
                *((_DWORD *)BaseAddress + 6) |= 2u;
              Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
              v16 = v52;
            }
          }
          if ( !gbNonServiceSession && ProcessLuid >= 0 && !Handle && !v50 && v16 )
          {
            ProcessLuid = xxxConnectService(&Destination, &SourceHandle, v57);
            if ( BaseAddress )
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            ObfDereferenceObject(v8);
            if ( ProcessLuid < 0 )
              return ProcessLuid;
            goto LABEL_61;
          }
          v15 = v48;
          goto LABEL_38;
        }
        Handle = TargetHandle;
      }
    }
    if ( Handle )
    {
      v66[0] = 0LL;
      ProcessLuid = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, v66, 0LL);
      if ( ProcessLuid >= 0 )
      {
        v40 = v66[0];
        if ( ((*((_DWORD *)v66[0] + 16) & 4) == 0) != v50 )
        {
          if ( TargetHandle )
            CloseProtectedHandle(Handle, 1);
          Handle = 0LL;
        }
        ObfDereferenceObject(v40);
      }
    }
    goto LABEL_26;
  }
  return result;
}
