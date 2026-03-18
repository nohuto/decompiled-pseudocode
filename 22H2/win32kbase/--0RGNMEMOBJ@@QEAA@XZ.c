/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C003E000
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C015F100 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0078230 (-Allocate@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008F2C4 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rax
  void *v5; // rax
  _DWORD *v6; // rax
  _QWORD *v7; // rax

  *(_QWORD *)this = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 56LL) )
    goto LABEL_8;
  v2 = (_QWORD *)NSInstrumentation::CTypeIsolation<32768,128>::Allocate();
  v3 = v2;
  if ( v2 )
  {
    v4 = SGDGetSessionState(v2);
    v5 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
           *(NSInstrumentation::CLeakTrackingAllocator **)(v4 + 24),
           *(void **)(*(_QWORD *)(v4 + 24) + 6376LL));
    v2[4] = v5;
    v3 = v2;
    if ( !v5 )
    {
      REGION::vDeleteREGION(v2);
LABEL_8:
      *(_QWORD *)this = 0LL;
      return this;
    }
  }
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    v6 = (_DWORD *)v3[4];
    *((_DWORD *)v3 + 12) = 16;
    *((_DWORD *)v3 + 13) = 1;
    *(_OWORD *)(v3 + 7) = 0LL;
    *v6 = 0;
    v6[3] = 0;
    v6[1] = 0x80000000;
    v6[2] = 0x7FFFFFFF;
    v3[5] = v6 + 4;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 112;
    *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
    v7 = (_QWORD *)(*(_QWORD *)this + 88LL);
    v7[1] = v7;
    *v7 = v7;
  }
  return this;
}
