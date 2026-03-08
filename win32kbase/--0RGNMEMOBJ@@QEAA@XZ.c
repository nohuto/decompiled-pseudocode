/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0053130
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00299D0 (-Allocate@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  void *v6; // rax
  _DWORD *v7; // rax
  _QWORD *v8; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 56LL);
  if ( !v2 )
    goto LABEL_8;
  v3 = NSInstrumentation::CTypeIsolation<32768,128>::Allocate(v2);
  v4 = v3;
  if ( v3 )
  {
    v5 = SGDGetSessionState(v3);
    v6 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
           *(NSInstrumentation::CLeakTrackingAllocator **)(v5 + 24),
           *(void **)(*(_QWORD *)(v5 + 24) + 6376LL));
    v3[4] = v6;
    v4 = v3;
    if ( !v6 )
    {
      REGION::vDeleteREGION(v3);
LABEL_8:
      *(_QWORD *)this = 0LL;
      return this;
    }
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    v7 = (_DWORD *)v4[4];
    *((_DWORD *)v4 + 12) = 16;
    *((_DWORD *)v4 + 13) = 1;
    *(_OWORD *)(v4 + 7) = 0LL;
    *v7 = 0;
    v7[3] = 0;
    v7[1] = 0x80000000;
    v7[2] = 0x7FFFFFFF;
    v4[5] = v7 + 4;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 112;
    *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
    v8 = (_QWORD *)(*(_QWORD *)this + 88LL);
    v8[1] = v8;
    *v8 = v8;
  }
  return this;
}
