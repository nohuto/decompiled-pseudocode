/*
 * XREFs of ReadPointerDeviceCfgDWORDSetting @ 0x1C009D610
 * Callers:
 *     GetDWORDSettingValuesEx @ 0x1C009D450 (GetDWORDSettingValuesEx.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, __int64 a2)
{
  const WCHAR *v3; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 Pool2; // rbx
  NTSTATUS v9; // edi
  _QWORD *v11; // rax
  __int64 v12; // r10
  char v13; // si
  __int64 v14; // [rsp+30h] [rbp-A9h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-99h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+60h] [rbp-79h] BYREF
  ULONG Length; // [rsp+148h] [rbp+6Fh] BYREF
  unsigned int v20; // [rsp+150h] [rbp+77h] BYREF
  unsigned __int64 v21; // [rsp+158h] [rbp+7Fh] BYREF

  Length = 16;
  v3 = *(const WCHAR **)a2;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, v3);
  v5 = gpLeakTrackingAllocator;
  v6 = Length;
  v20 = 2020635477;
  v14 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v15 = Length;
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(260LL, Length, 2020635477LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
LABEL_4:
    if ( Pool2 )
      goto LABEL_5;
    return (unsigned int)-1073741595;
  }
  if ( v7 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78707355u)
      || v6 + 16 < v6 )
    {
      return (unsigned int)-1073741595;
    }
    v11 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFDuLL, v6 + 16, v20);
    Pool2 = (__int64)v11;
    if ( !v11
      || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
          *v11 = 2020635477LL,
          Pool2 = (__int64)(v11 + 2),
          v11 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v5 + 1),
        (const void *)0x78707355);
    }
    goto LABEL_4;
  }
  if ( v7 != 2 )
    return (unsigned int)-1073741595;
  v21 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x78707355u, &v21) )
  {
    v16[0] = &v14;
    v16[1] = &v20;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v5,
              (__int64)v16,
              &v15);
    goto LABEL_4;
  }
  v13 = 0;
  if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
  {
    v6 += 16LL;
    v13 = 1;
    v15 = v6;
  }
  Pool2 = ExAllocatePool2(v12, v6, 2020635477LL);
  if ( !Pool2 )
    return (unsigned int)-1073741595;
  _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v13 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v5,
                            Pool2,
                            v21,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_29:
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return (unsigned int)-1073741595;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v5,
                           Pool2,
                           v21,
                           BackTrace) )
    goto LABEL_29;
LABEL_5:
  v9 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)Pool2, Length, &Length);
  if ( v9 >= 0 && *(_DWORD *)(Pool2 + 4) == 4 )
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(Pool2 + 12);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  return (unsigned int)v9;
}
