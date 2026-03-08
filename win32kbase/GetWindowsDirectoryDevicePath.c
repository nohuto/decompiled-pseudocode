/*
 * XREFs of GetWindowsDirectoryDevicePath @ 0x1C0085844
 * Callers:
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0085038 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0085A24 (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     wcsrchr @ 0x1C00DAB4C (wcsrchr.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall GetWindowsDirectoryDevicePath(PUNICODE_STRING DestinationString)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rbx
  int v3; // eax
  WCHAR *v4; // r14
  __int64 Pool2; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  int SymbolicLink; // edi
  WCHAR *v10; // rdi
  wchar_t *v11; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t *Str[2]; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v20; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v25[26]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v26; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v27; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int64 v28; // [rsp+218h] [rbp+118h] BYREF

  v1 = gpLeakTrackingAllocator;
  v22 = 520LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  v26 = 1651209045;
  v4 = 0LL;
  v18 = 260LL;
  *(_OWORD *)Str = 0LL;
  Destination = 0LL;
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(260LL, 520LL, 1651209045LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_4;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v28 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x626B7355u, &v28) )
      {
        v20 = &v18;
        v21 = &v26;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v1,
                  (__int64)&v20,
                  &v22);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(260LL, 536LL, 1651209045LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v1,
                                  Pool2,
                                  v28,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_4;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v1,
                                     Pool2,
                                     v28,
                                     BackTrace) )
        {
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_34:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x626B7355u) )
    goto LABEL_34;
  v13 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 536LL, v26);
  Pool2 = (__int64)v13;
  if ( !v13
    || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
        *v13 = 1651209045LL,
        Pool2 = (__int64)(v13 + 2),
        v13 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v1 + 1),
      (const void *)0x626B7355);
  }
LABEL_4:
  v19 = 260LL;
  v6 = gpLeakTrackingAllocator;
  v27 = 1651209045;
  v23 = 520LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       520LL,
                                                                                       1651209045LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_7;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x626B7355u, &v15) )
      {
        v20 = &v19;
        v21 = &v27;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v6,
                                                                                           (__int64)&v20,
                                                                                           &v23);
        goto LABEL_7;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         536LL,
                                                                                         1651209045LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v25);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v15,
                                  v25) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v15,
                                     v25) )
        {
          goto LABEL_7;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
LABEL_49:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_7;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x626B7355u) )
    goto LABEL_49;
  v14 = (_QWORD *)ExAllocatePool2(v19 & 0xFFFFFFFFFFFFFFFDuLL, 536LL, v27);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v14;
  if ( !v14
    || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
        *v14 = 1651209045LL,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v14 + 2),
        v14 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      (const void *)0x626B7355);
  }
LABEL_7:
  if ( Pool2 && UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    Str[1] = (wchar_t *)Pool2;
    LODWORD(Str[0]) = 34078720;
    SymbolicLink = GetSymbolicLink((PUNICODE_STRING)Str, L"\\SystemRoot");
    if ( SymbolicLink >= 0 )
    {
      Destination.Buffer = (PWSTR)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      *(_DWORD *)&Destination.Length = 34078720;
      while ( 1 )
      {
        v10 = v4;
        v11 = wcsrchr(Str[1], 0x5Cu);
        v4 = v11;
        if ( v10 )
          *v10 = 92;
        if ( !v11 )
          break;
        *v11 = 0;
        SymbolicLink = GetSymbolicLink(&Destination, Str[1]);
        if ( SymbolicLink >= 0 )
        {
          *v4 = 92;
          RtlAppendUnicodeToString(&Destination, v4);
          RtlCopyUnicodeString(DestinationString, &Destination);
          goto LABEL_16;
        }
      }
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)Str);
      SymbolicLink = 0;
    }
    goto LABEL_16;
  }
  SymbolicLink = -1073741801;
  if ( Pool2 )
LABEL_16:
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return (unsigned int)SymbolicLink;
}
