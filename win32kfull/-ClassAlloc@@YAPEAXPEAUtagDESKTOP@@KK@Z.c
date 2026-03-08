/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C01096CC
 * Callers:
 *     ReferenceClass @ 0x1C0109410 (ReferenceClass.c)
 * Callees:
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0109744 (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01BF140 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

__int64 __fastcall ClassAlloc(PVOID *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  _BYTE *Heap; // rax
  __int64 v7; // rax

  v2 = a2;
  if ( !a1 )
  {
    v4 = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
    if ( !v4 )
      return v4;
    v7 = Win32AllocPoolZInit(v2, 1818456917LL);
    *(_QWORD *)(v4 + 8) = v7;
    if ( v7 )
    {
      *(_QWORD *)(v4 + 16) = 0LL;
      return v4;
    }
    goto LABEL_10;
  }
  v4 = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
  if ( !v4 )
    return 0LL;
  Heap = RtlAllocateHeap(a1[16], 0, (unsigned int)v2);
  *(_QWORD *)(v4 + 8) = Heap;
  if ( !Heap )
  {
LABEL_10:
    UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v4);
    return 0LL;
  }
  *(_QWORD *)(v4 + 16) = Heap - (_BYTE *)a1[2];
  return v4;
}
