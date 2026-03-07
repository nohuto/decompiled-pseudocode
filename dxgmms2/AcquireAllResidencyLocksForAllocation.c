void __fastcall AcquireAllResidencyLocksForAllocation(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD **)(a2 + 272);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 296));
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL)
                                                            + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL))
                                                + 360LL));
}
