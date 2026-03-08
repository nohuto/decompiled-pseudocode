/*
 * XREFs of ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00B1D40
 * Callers:
 *     ldevLoadImage @ 0x1C00B1CC0 (ldevLoadImage.c)
 * Callees:
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C000EFA0 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MakeSystemRelativePath @ 0x1C00B1F80 (MakeSystemRelativePath.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00DAB4C (wcsrchr.c)
 *     _strnicmp @ 0x1C00DAC38 (_strnicmp.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     FreeSystemRelativePath @ 0x1C0199F18 (FreeSystemRelativePath.c)
 *     MakeSystemDriversRelativePath @ 0x1C0199F54 (MakeSystemDriversRelativePath.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

struct _LDEV *__fastcall ldevLoadImageInternal(wchar_t *Source, int a2, int *a3, int a4, int a5)
{
  __int64 *v5; // rdi
  int v7; // r14d
  __int64 v10; // rcx
  int v11; // esi
  __int64 *i; // rbx
  const UNICODE_STRING *v13; // rcx
  wchar_t *v14; // r12
  __int64 v15; // rax
  NSInstrumentation::CLeakTrackingAllocator *v16; // rbx
  char *v17; // r15
  int v18; // ecx
  __int64 Pool2; // rsi
  int v20; // ebx
  __int64 v21; // r13
  SYSTEM_INFORMATION_CLASS v22; // ecx
  NTSTATUS v23; // r14d
  int v24; // eax
  __int64 v25; // rax
  _QWORD *v27; // rax
  wchar_t *v28; // rax
  const WCHAR *v29; // rax
  ULONG v30; // r12d
  _DWORD *v31; // rax
  _DWORD *v32; // rbx
  char *v33; // r15
  int v34; // r12d
  _DWORD *j; // rbx
  unsigned int v36; // eax
  char *v37; // rbx
  PVOID v38; // rax
  _QWORD *v39; // r12
  __int64 AddressOfEntryPoint; // rcx
  wchar_t *Str; // [rsp+20h] [rbp-E0h] BYREF
  int v42; // [rsp+28h] [rbp-D8h]
  unsigned int v43; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING String2; // [rsp+48h] [rbp-B8h] BYREF
  struct _STRING AnsiString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Size[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD SystemInformation[76]; // [rsp+150h] [rbp+50h] BYREF

  v5 = 0LL;
  Str = Source;
  String2 = 0LL;
  v7 = 0;
  v45 = a4;
  *(_QWORD *)Size = a2;
  WdLogSingleEntry3(4LL, Source, a2, a4);
  *a3 = 0;
  if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
    goto LABEL_84;
  v11 = 1;
  while ( 1 )
  {
    v52 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
    for ( i = *(__int64 **)(v52 + 1888); i; i = (__int64 *)*i )
    {
      v13 = (const UNICODE_STRING *)i[2];
      if ( v13
        && (*((_DWORD *)i + 6) == 5) == a2
        && ((_DWORD)i[4] & 4u) >> 2 == a5
        && RtlEqualUnicodeString(v13, &String2, 1u) )
      {
        WdLogSingleEntry0(5LL);
        ++*((_DWORD *)i + 7);
        v5 = i;
        *a3 = 1;
        goto LABEL_83;
      }
    }
    if ( v45 )
      goto LABEL_8;
    if ( !v11 )
      break;
    v11 = 0;
    FreeSystemRelativePath(&String2);
    if ( !(unsigned int)MakeSystemDriversRelativePath(Str, &String2) )
      goto LABEL_8;
    v7 = 1;
  }
  if ( !v7 )
  {
LABEL_8:
    v14 = Str;
    goto LABEL_9;
  }
  FreeSystemRelativePath(&String2);
  v14 = Str;
  if ( !(unsigned int)MakeSystemRelativePath(Str, &String2) )
    goto LABEL_83;
LABEL_9:
  v15 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, 0x38uLL, 0x76646C47u);
  v16 = gpLeakTrackingAllocator;
  v17 = (char *)v15;
  v50 = v15;
  v43 = 1986292807;
  v51 = 260LL;
  v18 = *(_DWORD *)gpLeakTrackingAllocator;
  v49 = 904LL;
  if ( !v18 )
  {
    Pool2 = ExAllocatePool2(260LL, 904LL, 1986292807LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
    goto LABEL_12;
  }
  if ( v18 != 1 )
  {
    if ( v18 == 2 )
    {
      Str = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x76646C47u,
              (unsigned __int64 *)&Str) )
      {
        *(_QWORD *)&AnsiString.Length = &v51;
        AnsiString.Buffer = (PCHAR)&v43;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v16,
                  (__int64)&AnsiString,
                  &v49);
        goto LABEL_12;
      }
      Pool2 = ExAllocatePool2(260LL, 920LL, 1986292807LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v16,
                                  Pool2,
                                  Str,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_12;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v16,
                                     Pool2,
                                     Str,
                                     BackTrace) )
        {
          goto LABEL_12;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_43:
    Pool2 = 0LL;
    goto LABEL_12;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646C47u) )
    goto LABEL_43;
  v27 = (_QWORD *)ExAllocatePool2(v51 & 0xFFFFFFFFFFFFFFFDuLL, 920LL, v43);
  Pool2 = (__int64)v27;
  if ( !v27
    || (_InterlockedIncrement64((volatile signed __int64 *)v16 + 14),
        *v27 = 1986292807LL,
        Pool2 = (__int64)(v27 + 2),
        v27 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v16 + 1),
      (const void *)0x76646C47);
  }
LABEL_12:
  v20 = 1;
  if ( v17 )
  {
    if ( !Pool2 )
    {
LABEL_80:
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
      goto LABEL_81;
    }
    v21 = v52;
    *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
    *(_DWORD *)(Pool2 + 60) = 0;
    while ( 1 )
    {
      v22 = SystemLoadGdiDriverInformation;
      *(UNICODE_STRING *)v17 = String2;
      *(_DWORD *)(v21 + 1228) = 0;
      if ( !v45 )
        v22 = SystemLoadGdiDriverInSystemSpaceInformation;
      v23 = ZwSetSystemInformation(v22, v17, 0x38uLL);
      if ( v23 >= 0 )
        goto LABEL_18;
      if ( v23 != -1073741554 )
        *(_DWORD *)(v21 + 1228) = 3;
      if ( v45 )
        goto LABEL_78;
      if ( v23 != -1073741772 )
        break;
      if ( v20 )
      {
        v20 = 0;
        FreeSystemRelativePath(&String2);
        if ( (unsigned int)MakeSystemDriversRelativePath(v14, &String2) )
          continue;
      }
      goto LABEL_80;
    }
    if ( v23 != -1073741554 )
      goto LABEL_78;
    memset(SystemInformation, 0, sizeof(SystemInformation));
    ReturnLength = 0;
    v42 = 0;
    AnsiString = 0LL;
    DestinationString = 0LL;
    v28 = wcsrchr(v14, 0x5Cu);
    v29 = v28 ? v28 + 1 : v14;
    RtlInitUnicodeString(&DestinationString, v29);
    v23 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
    if ( v23 < 0 )
    {
LABEL_78:
      if ( v23 == -1073741702 )
        DrvLogDisplayDriverEvent(3);
      goto LABEL_80;
    }
    v23 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
    if ( (int)(v23 + 0x80000000) >= 0 && v23 != -1073741820
      || (v30 = 296 * SystemInformation[0] + 8, 296 * SystemInformation[0] == -8) )
    {
LABEL_76:
      RtlFreeAnsiString(&AnsiString);
      v17 = (char *)v50;
      if ( v42 )
      {
        *(_DWORD *)(Pool2 + 32) |= 2u;
        v21 = v52;
LABEL_18:
        *(_DWORD *)(Pool2 + 56) = -1;
        v24 = (*(_DWORD *)(Pool2 + 32) ^ (4 * a5)) & 4;
        *(_QWORD *)(Pool2 + 16) = v17;
        *(_DWORD *)(Pool2 + 32) ^= v24;
        *(_DWORD *)(Pool2 + 28) = 1;
        *(_DWORD *)(Pool2 + 24) = 5;
        v25 = *(_QWORD *)(v21 + 1888);
        if ( v25 )
          *(_QWORD *)(v25 + 8) = Pool2;
        *(_QWORD *)Pool2 = *(_QWORD *)(v21 + 1888);
        *(_QWORD *)(Pool2 + 8) = 0LL;
        *(_QWORD *)(v21 + 1888) = Pool2;
        WdLogSingleEntry1(5LL, Pool2);
        return (struct _LDEV *)Pool2;
      }
      goto LABEL_78;
    }
    v31 = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                      gpLeakTrackingAllocator,
                      260LL,
                      v30,
                      0x706D7447u);
    v32 = v31;
    v33 = (char *)v31;
    if ( v31 )
    {
      v23 = ZwQuerySystemInformation(SystemModuleInformation, v31, v30, &ReturnLength);
      if ( v23 < 0 || (v34 = 0, !*v32) )
      {
LABEL_75:
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v33);
        goto LABEL_76;
      }
      while ( strnicmp(
                (const char *)&v32[74 * v34 + 12] + HIWORD(v32[74 * v34 + 11]),
                AnsiString.Buffer,
                AnsiString.Length) )
      {
        if ( (unsigned int)++v34 >= *v32 )
          goto LABEL_74;
      }
      v42 = 0;
      Size[0] = 0;
      for ( j = RtlImageDirectoryEntryToData(WPP_MAIN_CB.Dpc.DpcData, 1u, 1u, Size); j; j += 5 )
      {
        v36 = j[3];
        if ( !v36 || !*j )
          break;
        if ( !strnicmp((const char *)WPP_MAIN_CB.Dpc.DpcData + v36, AnsiString.Buffer, AnsiString.Length) )
        {
          v42 = 1;
          LODWORD(Str) = 0;
          v37 = *(char **)&v33[296 * v34 + 24];
          v38 = RtlImageDirectoryEntryToData(v37, 1u, 0, (PULONG)&Str);
          v39 = (_QWORD *)v50;
          *(_QWORD *)(v50 + 40) = v38;
          AddressOfEntryPoint = RtlImageNtHeader(v37)->OptionalHeader.AddressOfEntryPoint;
          v39[2] = v37;
          v39[4] = &v37[AddressOfEntryPoint];
          v39[3] = 0LL;
          break;
        }
      }
    }
LABEL_74:
    if ( !v33 )
      goto LABEL_76;
    goto LABEL_75;
  }
LABEL_81:
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
LABEL_83:
  FreeSystemRelativePath(&String2);
LABEL_84:
  WdLogSingleEntry1(5LL, v5);
  return (struct _LDEV *)v5;
}
