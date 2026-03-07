char __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        __int64 a1)
{
  __int64 Pool2; // rax
  char *v3; // rbx

  Pool2 = ExAllocatePool2(66LL, 144LL, 1869834581LL);
  v3 = (char *)Pool2;
  if ( Pool2 )
  {
    memset((void *)(Pool2 + 37), 0, 0x6BuLL);
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 8) = 0;
    v3[36] = 0;
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    if ( (unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize(v3) )
    {
      *(_QWORD *)(a1 + 8) = v3;
      return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
    }
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(v3 + 48));
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)v3);
    ExFreePoolWithTag(v3, 0);
  }
  return 0;
}
