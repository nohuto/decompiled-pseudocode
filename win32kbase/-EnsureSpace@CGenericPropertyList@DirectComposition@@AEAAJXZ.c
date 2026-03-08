/*
 * XREFs of ?EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ @ 0x1C024AE44
 * Callers:
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C024BA58 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

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
