__int64 __fastcall FindOrCreateMaterialProperty(__int64 a1, __int64 a2, __int64 *a3)
{
  int MaterialProperty; // eax
  unsigned int v7; // edi
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  struct _RTL_GENERIC_TABLE *v11; // rcx
  __int128 v12; // xmm0
  _QWORD *Pool2; // rax
  __int64 v15; // r10
  unsigned __int64 v16; // [rsp+20h] [rbp-A9h] BYREF
  __int128 Buffer; // [rsp+30h] [rbp-99h] BYREF
  __int64 v18; // [rsp+40h] [rbp-89h]
  __int64 v19; // [rsp+50h] [rbp-79h] BYREF
  __int64 v20; // [rsp+58h] [rbp-71h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+148h] [rbp+7Fh] BYREF

  *(_QWORD *)&Buffer = 0LL;
  MaterialProperty = FindMaterialProperty(a1, a2, &Buffer);
  v7 = MaterialProperty;
  if ( MaterialProperty == -1073741275 )
  {
    v8 = gpLeakTrackingAllocator;
    v22 = 1685549909;
    v19 = 260LL;
    v20 = 24LL;
    v9 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v9 != 1 )
      {
        if ( v9 != 2 )
          goto LABEL_24;
        v16 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64777355u, &v16) )
        {
          *(_QWORD *)&Buffer = &v19;
          *((_QWORD *)&Buffer + 1) = &v22;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v8,
                                                                                             (__int64)&Buffer,
                                                                                             &v20);
          goto LABEL_5;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v15,
                                                                                           40LL,
                                                                                           1685549909LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_24;
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v8,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v16,
                                  BackTrace) )
          {
LABEL_6:
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
            v11 = Table;
            *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = a1;
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = a2;
            v12 = *(_OWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            v18 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            Buffer = v12;
            if ( RtlInsertElementGenericTable(v11, &Buffer, 0x18u, 0LL) )
            {
              v7 = 0;
LABEL_8:
              *a3 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              return v7;
            }
            goto LABEL_25;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v8,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v16,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_24;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64777355u) )
        goto LABEL_24;
      Pool2 = (_QWORD *)ExAllocatePool2(v19 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v22);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
            *Pool2 = 1685549909LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v8 + 1),
          (const void *)0x64777355);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         24LL,
                                                                                         1685549909LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
    }
LABEL_5:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_6;
LABEL_24:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_25:
    v7 = -1073741801;
    goto LABEL_27;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Buffer;
  if ( MaterialProperty >= 0 )
    goto LABEL_8;
LABEL_27:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    MaterialProperty::`scalar deleting destructor'((MaterialProperty *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return v7;
}
