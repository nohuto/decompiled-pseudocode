__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  unsigned int v4; // esi
  CInputConfig *v5; // rdx
  CInputConfig *i; // rcx
  _DWORD *v7; // r8
  struct _LIST_ENTRY *v8; // rax
  CInputConfig *v9; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rbx
  int v11; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  CInputConfig *v13; // rcx
  __int64 v14; // rcx
  CInputConfig **v15; // rax
  CInputConfig *v16; // rcx
  _QWORD *Pool2; // rax
  __int64 v19; // r10
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v21; // [rsp+20h] [rbp-99h] BYREF
  unsigned int *v22; // [rsp+28h] [rbp-91h]
  CInputConfig *v23; // [rsp+30h] [rbp-89h]
  CInputConfig *v24; // [rsp+38h] [rbp-81h]
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v26; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v27; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+130h] [rbp+77h] BYREF
  __int64 v29; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 392LL);
  }
  v21 = (__int64 *)&CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)this;
  v22 = (unsigned int *)this;
  v23 = v5;
  for ( i = *(CInputConfig **)v5; ; i = *(CInputConfig **)i )
  {
    v24 = i;
    v7 = 0LL;
    if ( v5 != this )
      v7 = (_DWORD *)((char *)v5 + 16);
    if ( !v7 )
      break;
    if ( *v7 == *(_DWORD *)a2 && v7[1] == *((_DWORD *)a2 + 1) )
    {
      v8 = CInputConfig::Iter::Entry((CInputConfig::Iter *)&v21);
      CInputConfig::_FreeInputSpace(v9, v8);
      break;
    }
    v5 = i;
    v23 = i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !*((_DWORD *)a2 + 363) && !*((_BYTE *)a2 + 1448) )
    goto LABEL_17;
  v10 = gpLeakTrackingAllocator;
  v26 = 1866690121;
  v28 = 260LL;
  v29 = 1488LL;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v11 != 1 )
    {
      if ( v11 != 2 )
        return (unsigned int)-1073741801;
      v27 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6F436E49u, &v27) )
      {
        v21 = &v28;
        v22 = &v26;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           v10,
                                                                                           &v21,
                                                                                           &v29);
        goto LABEL_14;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v19,
                                                                                         1504LL,
                                                                                         1866690121LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return (unsigned int)-1073741801;
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v10,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v27,
                                BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_14;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v10,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v27,
                                   BackTrace) )
      {
        goto LABEL_15;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return (unsigned int)-1073741801;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6F436E49u) )
      return (unsigned int)-1073741801;
    Pool2 = (_QWORD *)ExAllocatePool2(v28 & 0xFFFFFFFFFFFFFFFDuLL, 1504LL, v26);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
          *Pool2 = 1866690121LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v10 + 1),
        (const void *)0x6F436E49);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       1488LL,
                                                                                       1866690121LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
  }
LABEL_14:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return (unsigned int)-1073741801;
LABEL_15:
  CInputSpace::Reset(
    (CInputSpace *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16),
    a2);
  CInputConfig::_ProcessInputSpace(
    v13,
    (struct CInputSpace *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16));
  v15 = (CInputConfig **)*((_QWORD *)this + 1);
  if ( *v15 != this )
    __fastfail(3u);
  *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = this;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = v15;
  *v15 = (CInputConfig *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  *((_QWORD *)this + 1) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !*(_BYTE *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 1464) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = CurrentProcessWin32Process;
    *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x2000000u;
  }
LABEL_17:
  CInputConfig::_EnsureInputSpace(this);
  CInputConfig::_FindDefaultInputSpace(v16);
  InputConfig::TraceCurrentConfig();
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
  return v4;
}
