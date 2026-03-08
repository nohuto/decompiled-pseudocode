/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001CAAC
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C001A160 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C2B0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C001CBA4 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00ACBC4 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00C1730 (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00C1C1C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx

  *((_DWORD *)this + 4) = 0;
  if ( a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 24LL);
    if ( !v4 )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    v3 = NSInstrumentation::CTypeIsolation<49152,192>::Allocate();
  }
  else
  {
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 16LL) )
      return 0LL;
    v3 = NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  }
  v5 = v3;
LABEL_5:
  if ( v5 )
  {
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_DWORD *)(v5 + 84) = 0;
    *(_DWORD *)(v5 + 96) = 0;
    *(_DWORD *)(v5 + 100) = -1;
    *(_DWORD *)(v5 + 144) = a2 != 0;
    *(_QWORD *)(v5 + 48) = v5 + 72;
    *(_DWORD *)(v5 + 44) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v4) + 24)
                                                                           + 744LL));
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(2LL, v5, v5 + 136) )
    {
      FreeBrushMemory(v5);
      return 0LL;
    }
  }
  return (struct BRUSH *)v5;
}
