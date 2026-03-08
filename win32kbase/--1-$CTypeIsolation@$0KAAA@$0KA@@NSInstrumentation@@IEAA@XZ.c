/*
 * XREFs of ??1?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x1C00A0628
 * Callers:
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002918C (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00A0420 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00A04C0 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(__int64 a1)
{
  struct _PAGED_LOOKASIDE_LIST *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v2 = *(struct _PAGED_LOOKASIDE_LIST **)(a1 + 24);
  if ( v2 )
  {
    ExDeletePagedLookasideList(v2);
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v3 = *(void **)(a1 + 16);
  if ( !v3 )
    goto LABEL_5;
  while ( 1 )
  {
    ExFreePoolWithTag(v3, 0);
LABEL_5:
    v4 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v4);
    v3 = v4;
  }
}
