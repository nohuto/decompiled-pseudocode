/*
 * XREFs of KiAddProcessorToGroupSchedulingList @ 0x14057AFB0
 * Callers:
 *     KiAddProcessorToGroupSchedulingList @ 0x14057AFB0 (KiAddProcessorToGroupSchedulingList.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140A9CCE4 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KiAddProcessorToGroupSchedulingList @ 0x14057AFB0 (KiAddProcessorToGroupSchedulingList.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingList(__int64 a1, _QWORD **a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  v3 = *a2;
  if ( *a2 != a2 )
  {
    v7 = 53LL * a3;
    v8 = a1 + 34184;
    do
    {
      v9 = *(_QWORD **)(v8 + 8);
      v10 = &v3[v7 + 18];
      if ( *v9 != v8 )
        __fastfail(3u);
      v10[1] = v9;
      *v10 = v8;
      *v9 = v10;
      v11 = v3 + 3;
      *(_QWORD *)(v8 + 8) = v10;
      if ( (_QWORD *)*v11 != v11 )
        KiAddProcessorToGroupSchedulingList(a1, v11, a3);
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != a2 );
  }
}
