/*
 * XREFs of ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00BC250
 * Callers:
 *     ldevLoadImage @ 0x1C00BC1D0 (ldevLoadImage.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00BB16C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     MakeSystemRelativePath @ 0x1C00BC4F0 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C00BC5F0 (FreeSystemRelativePath.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00D6088 (wcsrchr.c)
 *     _strnicmp @ 0x1C00D6178 (_strnicmp.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MakeSystemDriversRelativePath @ 0x1C0179548 (MakeSystemDriversRelativePath.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct _LDEV *__fastcall ldevLoadImageInternal(wchar_t *Source, signed int a2, int *a3, signed int a4, int a5)
{
  struct _LDEV *v5; // rdi
  int v6; // r14d
  int v9; // esi
  struct _LDEV *i; // rbx
  const UNICODE_STRING *v11; // rcx
  __int64 v13; // rax
  PVOID v14; // rbx
  UNICODE_STRING *v15; // r13
  __int64 Pool2; // rsi
  int v17; // ebx
  ULONG v18; // r15d
  SYSTEM_INFORMATION_CLASS v19; // ecx
  NTSTATUS v20; // r14d
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // r12d
  wchar_t *v24; // rax
  const WCHAR *v25; // rax
  ULONG v26; // r15d
  char *v27; // rax
  char *v28; // rbx
  char *v29; // r15
  _DWORD *j; // rbx
  unsigned int v31; // eax
  __int64 v32; // rax
  char *v33; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG Size; // [rsp+20h] [rbp-E0h] BYREF
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  wchar_t *Str; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-D0h] BYREF
  struct _STRING AnsiString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD SystemInformation[76]; // [rsp+100h] [rbp+0h] BYREF

  v5 = 0LL;
  Size = a4;
  v6 = 0;
  ReturnLength = a2;
  String2 = 0LL;
  Str = Source;
  WdLogSingleEntry3(4LL, Source, a2, a4);
  *a3 = 0;
  if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
    goto LABEL_11;
  v9 = 1;
  while ( 1 )
  {
    for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
    {
      v11 = (const UNICODE_STRING *)*((_QWORD *)i + 2);
      if ( v11
        && (*((_DWORD *)i + 6) == 5) == ReturnLength
        && (*((_DWORD *)i + 8) & 4u) >> 2 == a5
        && RtlEqualUnicodeString(v11, &String2, 1u) )
      {
        WdLogSingleEntry0(5LL);
        ++*((_DWORD *)i + 7);
        v5 = i;
        *a3 = 1;
        goto LABEL_10;
      }
    }
    if ( Size )
      break;
    if ( !v9 )
    {
      if ( v6 )
      {
        FreeSystemRelativePath(&String2);
        if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
          goto LABEL_10;
      }
      break;
    }
    v9 = 0;
    FreeSystemRelativePath(&String2);
    if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
      break;
    v6 = 1;
  }
  v13 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          260LL,
          0x38uLL,
          1986292807);
  v14 = gpLeakTrackingAllocator;
  v15 = (UNICODE_STRING *)v13;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646C47) != 0x76646C47
    || (v22 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_15:
    Pool2 = ExAllocatePool2(260LL, 904LL);
    goto LABEL_16;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v22) != 1986292807 )
  {
    if ( ++v22 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_15;
  }
  Pool2 = ExAllocatePool2(260LL, 920LL);
  if ( !Pool2 )
    goto LABEL_39;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v14,
                            Pool2,
                            BackTrace) )
      goto LABEL_16;
    goto LABEL_38;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v14,
                           Pool2,
                           BackTrace) )
  {
LABEL_38:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_39:
    Pool2 = 0LL;
    goto LABEL_16;
  }
  Pool2 += 16LL;
LABEL_16:
  v17 = 1;
  if ( v15 )
  {
    if ( Pool2 )
    {
      v18 = Size;
      *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
      *(_DWORD *)(Pool2 + 60) = 0;
      while ( 1 )
      {
        gulDriverFailureReason = 0;
        v19 = SystemLoadGdiDriverInformation;
        *v15 = String2;
        if ( !v18 )
          v19 = SystemLoadGdiDriverInSystemSpaceInformation;
        v20 = ZwSetSystemInformation(v19, v15, 0x38uLL);
        if ( v20 >= 0 )
          goto LABEL_22;
        if ( v20 != -1073741554 )
          gulDriverFailureReason = 3;
        if ( v18 )
          goto LABEL_73;
        if ( v20 != -1073741772 )
          break;
        if ( v17 )
        {
          v17 = 0;
          FreeSystemRelativePath(&String2);
          if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
            continue;
        }
        goto LABEL_75;
      }
      if ( v20 == -1073741554 )
      {
        memset(SystemInformation, 0, sizeof(SystemInformation));
        ReturnLength = 0;
        Size = 0;
        v23 = 0;
        AnsiString = 0LL;
        DestinationString = 0LL;
        v24 = wcsrchr(Str, 0x5Cu);
        v25 = v24 ? v24 + 1 : Str;
        RtlInitUnicodeString(&DestinationString, v25);
        v20 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
        if ( v20 >= 0 )
        {
          v20 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
          if ( (int)(v20 + 0x80000000) < 0 || v20 == -1073741820 )
          {
            v26 = 296 * SystemInformation[0] + 8;
            if ( 296 * SystemInformation[0] != -8 )
            {
              v27 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                              260LL,
                              v26,
                              1886221383);
              v28 = v27;
              if ( v27 )
              {
                v20 = ZwQuerySystemInformation(SystemModuleInformation, v27, v26, &ReturnLength);
                v29 = v28;
                if ( v20 >= 0 )
                {
                  if ( *(_DWORD *)v28 )
                  {
                    while ( 1 )
                    {
                      Str = (wchar_t *)v23;
                      if ( !strnicmp(
                              &v28[296 * v23 + 48 + *(unsigned __int16 *)&v28[296 * v23 + 46]],
                              AnsiString.Buffer,
                              AnsiString.Length) )
                        break;
                      if ( ++v23 >= *(_DWORD *)v28 )
                        goto LABEL_62;
                    }
                    Size = 0;
                    v23 = 0;
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v31 = j[3];
                      if ( !v31 || !*j )
                        break;
                      if ( !strnicmp((const char *)gpvWin32kImageBase + v31, AnsiString.Buffer, AnsiString.Length) )
                      {
                        v32 = 296LL * (_QWORD)Str;
                        v23 = 1;
                        LODWORD(Str) = 0;
                        v33 = *(char **)&v29[v32 + 24];
                        v15[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v33, 1u, 0, (PULONG)&Str);
                        AddressOfEntryPoint = RtlImageNtHeader(v33)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v15[1].Length = v33;
                        *(_QWORD *)&v15[2].Length = &v33[AddressOfEntryPoint];
                        v15[1].Buffer = 0LL;
                        break;
                      }
                    }
                  }
                  else
                  {
LABEL_62:
                    v23 = 0;
                  }
                }
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  v29);
              }
            }
          }
          RtlFreeAnsiString(&AnsiString);
          if ( v23 )
          {
            *(_DWORD *)(Pool2 + 32) |= 2u;
LABEL_22:
            v21 = *(_DWORD *)(Pool2 + 32);
            *(_DWORD *)(Pool2 + 56) = -1;
            *(_QWORD *)(Pool2 + 16) = v15;
            *(_DWORD *)(Pool2 + 28) = 1;
            *(_DWORD *)(Pool2 + 24) = 5;
            *(_DWORD *)(Pool2 + 32) = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(4 * a5)) & 4;
            if ( gpldevDrivers )
              *((_QWORD *)gpldevDrivers + 1) = Pool2;
            *(_QWORD *)Pool2 = gpldevDrivers;
            *(_QWORD *)(Pool2 + 8) = 0LL;
            gpldevDrivers = (struct _LDEV *)Pool2;
            WdLogSingleEntry1(5LL, Pool2);
            return (struct _LDEV *)Pool2;
          }
        }
      }
LABEL_73:
      if ( v20 == -1073741702 )
        DrvLogDisplayDriverEvent(3);
    }
LABEL_75:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v15);
  }
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
LABEL_10:
  FreeSystemRelativePath(&String2);
LABEL_11:
  WdLogSingleEntry1(5LL, v5);
  return v5;
}
