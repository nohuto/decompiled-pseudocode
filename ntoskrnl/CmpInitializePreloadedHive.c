/*
 * XREFs of CmpInitializePreloadedHive @ 0x140B52F50
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140B51BF0 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x140818BD0 (CmpSetupLoggingState.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B95024 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v6; // r15
  int v7; // ecx
  int v8; // esi
  wchar_t *v9; // rax
  wchar_t *v10; // r14
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  const WCHAR *SystemRelativeRegistryHiveFilePath; // rbx
  int v21; // eax
  bool v22; // zf
  _BYTE v23[8]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v24; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v26; // [rsp+80h] [rbp-80h] BYREF
  _OWORD BugCheckParameter3[27]; // [rsp+90h] [rbp-70h] BYREF
  char v28; // [rsp+240h] [rbp+140h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  v24 = 0LL;
  v23[0] = 0;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0x1000uLL, 0x20204D43u);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_39;
  v7 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&Destination.Length = 0x10000000LL;
  Destination.Buffer = Pool2;
  if ( (v7 & 0x80) != 0 )
  {
    SystemRelativeRegistryHiveFilePath = (const WCHAR *)CmpGetSystemRelativeRegistryHiveFilePath(*(_QWORD *)(a1 + 16));
    RtlAppendUnicodeToString(&Destination, L"\\DriverStore\\Nodes\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 48));
    RtlAppendUnicodeToString(&Destination, SystemRelativeRegistryHiveFilePath);
    v4 = 0x400000;
    if ( (*(_DWORD *)(a1 + 24) & 0x10) != 0 && (!CmStateSeparationEnabled || !CmStateSeparationDevMode) )
      v4 = 4194305;
  }
  else if ( (v7 & 0x36) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v21 = *(_DWORD *)(a1 + 24);
    if ( (v21 & 2) == 0 )
    {
      if ( (v21 & 4) != 0 )
        v4 = 0x2000;
      else
        v4 = (v21 & 0x20) != 0 ? 0x200000 : 1;
    }
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v4 = 0x4000;
  }
  v8 = *(_DWORD *)(a1 + 24) & 0x100;
  v9 = (wchar_t *)ExAllocatePool2(256LL, Destination.Length + 2LL, 0x20204D43u);
  v10 = v9;
  if ( !v9 )
LABEL_39:
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v9, Destination.Buffer, Destination.Length);
  ExFreePoolWithTag(v6, 0);
  v10[(unsigned __int64)Destination.Length >> 1] = 0;
  v11 = *(_DWORD *)(a1 + 24);
  Destination.MaximumLength = Destination.Length + 2;
  Destination.Buffer = v10;
  v12 = CmpCreateHive(
          &v24,
          1u,
          (32 * (v11 & 8)) | 0x12u,
          2u,
          *(_QWORD *)(a1 + 32),
          0LL,
          (__int64)&Destination,
          5832712,
          0LL,
          0LL,
          (__int64)v23,
          (__int64)BugCheckParameter3);
  if ( v12 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v12);
  CmpSetupLoggingState(v24, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v24 + 1824), v10);
  v13 = v4 | 0x1000000;
  if ( !v8 )
    v13 = v4;
  *(_DWORD *)(v24 + 160) |= v13 | 0x400;
  if ( v23[0] == 1 )
    *(_DWORD *)(v24 + 160) |= 0x800u;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v24 + 160) |= 0x8000u;
  v14 = *(_DWORD *)(a1 + 24);
  if ( (v14 & 0x80u) != 0 )
  {
    if ( (v14 & 0x10) == 0 )
      goto LABEL_15;
    if ( !CmStateSeparationEnabled )
    {
LABEL_34:
      *(_DWORD *)(v24 + 160) |= 0x8000u;
      goto LABEL_15;
    }
    v22 = CmStateSeparationDevMode == 0;
  }
  else
  {
    if ( !CmStateSeparationEnabled || CmStateSeparationDevMode )
      goto LABEL_15;
    v22 = (v14 & 0x20) == 0;
  }
  if ( v22 )
    goto LABEL_34;
LABEL_15:
  v15 = *(_DWORD *)(*(_QWORD *)(v24 + 64) + 4088LL);
  CmpBootType = v15;
  if ( !CmSelfHeal )
  {
    BYTE2(NlsMbOemCodePageTag) = 0;
    if ( (v15 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v24, 0LL);
  }
  *(_QWORD *)&v26.Length = 0x800000LL;
  v26.Buffer = (wchar_t *)&v28;
  RtlAppendUnicodeToString(&v26, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v26, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v26, L"\\");
  RtlAppendUnicodeToString(&v26, *(PCWSTR *)(a1 + 48));
  v16 = CmpLinkHiveToMaster((__int64)&v26, 0LL, v24, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1, BugCheckParameter3);
  if ( v16 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v24, v16);
  v17 = (_QWORD *)qword_140C14418;
  v18 = (_QWORD *)(v24 + 1624);
  if ( *(__int64 **)qword_140C14418 != &CmpPreloadedHivesList )
    __fastfail(3u);
  *v18 = &CmpPreloadedHivesList;
  v18[1] = v17;
  *v17 = v18;
  qword_140C14418 = (__int64)v18;
  return 0LL;
}
