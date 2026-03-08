/*
 * XREFs of ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C024D7CC
 * Callers:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C024D3E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::CEffectInputSet::Initialize(
        DirectComposition::CEffectInputSet *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 Quota; // rax
  unsigned __int64 i; // rcx
  __int64 QuotaZInit; // rax
  __int64 v7; // rax

  v2 = 0;
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( !is_mul_ok(a2, 4uLL) )
      return (unsigned int)-1073741675;
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, 4LL * a2, 0x66664344u);
    *((_QWORD *)this + 2) = Quota;
    if ( !Quota )
      return (unsigned int)-1073741801;
    for ( i = 0LL; i < *(unsigned int *)this; *(_DWORD *)(*((_QWORD *)this + 2) + 4 * i++) = 2 )
      ;
    **((_DWORD **)this + 2) = 0;
    if ( !is_mul_ok(*(unsigned int *)this, 0x10uLL) )
      return (unsigned int)-1073741675;
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   (NSInstrumentation::CLeakTrackingAllocator *)*(unsigned int *)this,
                   (*(unsigned int *)this * (unsigned __int128)0x10uLL) >> 64,
                   16LL * *(unsigned int *)this,
                   0x6A664344u);
    *((_QWORD *)this + 3) = QuotaZInit;
    if ( !QuotaZInit )
      return (unsigned int)-1073741801;
    if ( !is_mul_ok(*(unsigned int *)this, 8uLL) )
      return (unsigned int)-1073741675;
    v7 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
           (NSInstrumentation::CLeakTrackingAllocator *)*(unsigned int *)this,
           (*(unsigned int *)this * (unsigned __int128)8uLL) >> 64,
           8LL * *(unsigned int *)this,
           0x69664344u);
    *((_QWORD *)this + 1) = v7;
    if ( !v7 )
      return (unsigned int)-1073741801;
  }
  return v2;
}
