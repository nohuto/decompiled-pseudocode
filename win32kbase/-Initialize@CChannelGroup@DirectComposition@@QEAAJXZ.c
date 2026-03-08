/*
 * XREFs of ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C0095B4C
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0095A48 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannelGroup::Initialize(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // edi

  v2 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              0x73634344u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, sizeof(struct _ERESOURCE));
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    else
      *((_QWORD *)this + 7) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
