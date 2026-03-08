/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0180450
 * Callers:
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0197C30 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001A2C4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     PushThreadGuardedObject @ 0x1C0044340 (PushThreadGuardedObject.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0180268 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0180690 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  struct OBJECT *v2; // rax
  __int64 v3; // rdi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((_QWORD *)this + 10, (__int64)this, (__int64)THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 28) = 1;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 32LL) )
  {
    v2 = (struct OBJECT *)NSInstrumentation::CTypeIsolation<81920,320>::Allocate();
    v3 = (__int64)v2;
    if ( v2 )
    {
      v5 = 0LL;
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v5, v2, 1u, 0, 7u) )
      {
        *((_QWORD *)this + 1) = v3;
        *(_DWORD *)(v3 + 80) = 3;
        *(_QWORD *)this = 0LL;
      }
      else
      {
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v3);
      }
      if ( v5 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    }
  }
  return this;
}
