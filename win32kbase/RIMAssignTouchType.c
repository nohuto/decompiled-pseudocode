__int64 __fastcall RIMAssignTouchType(__int64 a1, __int64 a2)
{
  int SpecificButtonCaps; // eax
  unsigned int SpecificValueCaps; // eax
  unsigned int v6; // esi
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  int v8; // eax
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int16 v12; // ax
  __int16 v14; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  _WORD v21[40]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v22[80]; // [rsp+170h] [rbp+70h] BYREF

  memset(v21, 0, 0x48uLL);
  memset(v22, 0, 0x48uLL);
  v14 = 1;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0LL, 13LL, 0LL, 71LL, (__int64)v22, (__int64)&v14, a2);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a1 + 360) |= 4u;
  v14 = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 13LL, 0LL, 81LL, (__int64)v21, (__int64)&v14, a2);
  v6 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    v14 = 1;
    v6 = rimHidP_GetSpecificValueCaps(2LL, 13LL, 0LL, 85LL, (__int64)v21, (__int64)&v14, a2);
    if ( (v6 & 0x80000000) != 0 )
    {
      v12 = v21[3];
      *(_DWORD *)(a1 + 360) |= 0x20u;
      *(_WORD *)(a1 + 776) = v12;
      return v6;
    }
    v7 = gpLeakTrackingAllocator;
    v16[0] = 0;
    *(_DWORD *)(a1 + 24) = 2;
    v15 = 1903194962;
    v8 = *(_DWORD *)v7;
    v18 = 260LL;
    v19 = 40LL;
    switch ( v8 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, 40LL, 1903194962LL);
        if ( Pool2 )
          _InterlockedAdd64((volatile signed __int64 *)v7 + 14, 1uLL);
        goto LABEL_25;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v7, 0x71707352u) )
        {
          v10 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 56LL, v15);
          Pool2 = (__int64)v10;
          if ( !v10
            || (_InterlockedAdd64((volatile signed __int64 *)v7 + 14, 1uLL),
                *v10 = 1903194962LL,
                Pool2 = (__int64)(v10 + 2),
                v10 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v7 + 1),
              0x71707352uLL);
          }
          goto LABEL_25;
        }
        break;
      case 2:
        v17[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v7, 1903194962, v17) )
        {
          v17[0] = (unsigned __int64)&v18;
          v17[1] = (unsigned __int64)&v15;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v7,
                    (__int64)v17,
                    &v19);
LABEL_25:
          *(_QWORD *)(a1 + 760) = Pool2;
          if ( !Pool2
            || (unsigned int)RIMIsParallelDevice(a1, a2, v16)
            && !(unsigned int)RIMRetrieveLinkCollection(a1, a2, v16[0]) )
          {
            return (unsigned int)-1073741668;
          }
          return v6;
        }
        Pool2 = ExAllocatePool2(v11, 56LL, 1903194962LL);
        if ( Pool2 )
        {
          _InterlockedAdd64((volatile signed __int64 *)v7 + 16, 1uLL);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                   (__int64)v7,
                   Pool2,
                   v17[0],
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              goto LABEL_25;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                      (__int64)v7,
                      (const void *)Pool2,
                      v17[0],
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_25;
          }
          _InterlockedAdd64((volatile signed __int64 *)v7 + 17, 1uLL);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_25;
  }
  return v6;
}
