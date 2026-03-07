void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  PVOID v6; // rax
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  unsigned int j; // edi
  void *v11; // rdx
  unsigned int i; // edi
  void *v13; // rdx
  unsigned int k; // edx
  __int64 v15; // rcx
  void *v16; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    --*(_DWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 16);
    if ( !*(_DWORD *)(v3 + 8) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v3);
      if ( v5 )
      {
        Buffer[0] = v5;
        Buffer[1] = 0LL;
        v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)a2 + 264), Buffer);
        if ( v6 )
          RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)a2 + 264), v6);
        *(_DWORD *)(v5 + 16) &= ~4u;
      }
    }
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 29); ++i )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13) + 8LL * i));
    v13 = (void *)*((_QWORD *)this + 13);
    if ( v13 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 18) )
  {
    for ( j = 0; j < *((_DWORD *)this + 59); ++j )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 18) + 8LL * j));
    v11 = (void *)*((_QWORD *)this + 18);
    if ( v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
    *((_QWORD *)this + 18) = 0LL;
    *(_QWORD *)((char *)this + 236) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_DWORD *)this + 58) = 0;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 20) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( *((_QWORD *)this + 19) )
  {
    for ( k = 0; k < *((_DWORD *)this + 61); --*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 16 * v15) + 24LL) )
      v15 = k++;
    v16 = (void *)*((_QWORD *)this + 19);
    if ( v16 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
    *((_QWORD *)this + 19) = 0LL;
    *(_QWORD *)((char *)this + 244) = 0LL;
  }
}
