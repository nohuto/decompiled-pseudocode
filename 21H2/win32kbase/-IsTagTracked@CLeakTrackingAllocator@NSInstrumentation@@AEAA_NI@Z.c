/*
 * XREFs of ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C002FE1C
 * Callers:
 *     AllocFreeTmpBuffer @ 0x1C002FCF0 (AllocFreeTmpBuffer.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00BC680 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___lambda_2acc3c748d9b6116d218aa09d93926be___ @ 0x1C0179A24 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___lambda_4aaddf2c61b427945b131cdbed9eec78___ @ 0x1C0179BA8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
        NSInstrumentation::CLeakTrackingAllocator *this,
        int a2)
{
  __int64 v3; // rax

  if ( (a2 & *((_DWORD *)this + 10)) != a2 )
    return 0;
  v3 = 0LL;
  if ( !*((_DWORD *)this + 11) )
    return 0;
  while ( *((_DWORD *)this + v3) != a2 )
  {
    if ( ++v3 >= (unsigned __int64)*((unsigned int *)this + 11) )
      return 0;
  }
  return 1;
}
