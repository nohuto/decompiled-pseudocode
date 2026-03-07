__int64 __fastcall DirectComposition::CGenericPropertyList::EnsureSpace(DirectComposition::CGenericPropertyList *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *Quota; // rax
  void *v5; // rsi

  v1 = *((_QWORD *)this + 2);
  if ( *((_QWORD *)this + 1) == v1 )
  {
    v3 = 4LL;
    if ( v1 )
      v3 = 2 * v1;
    Quota = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, 8 * v3, 0x70674344u);
    v5 = Quota;
    if ( !Quota )
      return 3221225495LL;
    if ( *(_QWORD *)this )
    {
      memmove(Quota, *(const void **)this, 8LL * *((_QWORD *)this + 1));
      if ( *(_QWORD *)this )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)this);
    }
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 2) = v3;
  }
  return 0LL;
}
