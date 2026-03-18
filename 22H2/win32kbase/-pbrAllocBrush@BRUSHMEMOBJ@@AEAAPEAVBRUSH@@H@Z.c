/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C00A7F48
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C005E540 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C00478B4 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C009DE94 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00B354C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00B37DC (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 v3; // rcx
  PVOID v4; // rax
  __int64 v5; // rcx
  ULONG_PTR v6; // rbx

  *((_DWORD *)this + 12) = 0;
  if ( a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 24LL);
    if ( !v5 )
    {
      v6 = 0LL;
      goto LABEL_5;
    }
    v4 = (PVOID)NSInstrumentation::CTypeIsolation<49152,192>::Allocate();
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 16LL);
    if ( !v3 )
      return 0LL;
    v4 = NSInstrumentation::CTypeIsolation<40960,160>::Allocate(v3);
  }
  v6 = (ULONG_PTR)v4;
LABEL_5:
  if ( v6 )
  {
    *(_QWORD *)(v6 + 88) = 0LL;
    *(_DWORD *)(v6 + 84) = 0;
    *(_DWORD *)(v6 + 96) = 0;
    *(_DWORD *)(v6 + 100) = -1;
    *(_DWORD *)(v6 + 144) = a2 != 0;
    *(_QWORD *)(v6 + 48) = v6 + 72;
    *(_DWORD *)(v6 + 44) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v5) + 24)
                                                                           + 744LL));
    if ( !AcquireReferenceCountedObjectHandle(2LL, (void *)v6, (_QWORD *)(v6 + 136)) )
    {
      FreeBrushMemory(v6);
      return 0LL;
    }
  }
  return (struct BRUSH *)v6;
}
