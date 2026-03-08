/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1C012E310
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeClientOnWindowDestruction(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = (_QWORD **)(SGDGetUserSessionState(a1) + 16352);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = v3 - 2;
    v5 = v3;
    v3 = (_QWORD *)*v3;
    if ( a1 == *v4 )
    {
      HMAssignmentUnlock(v4);
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      Win32FreePool(v4);
    }
  }
}
