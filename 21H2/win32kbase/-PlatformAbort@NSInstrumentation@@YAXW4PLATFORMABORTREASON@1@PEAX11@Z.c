/*
 * XREFs of ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900
 * Callers:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0024250 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092034 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092F00 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0093950 (-Free@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0094758 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00984E4 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C009AC90 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C009B4C8 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D9EB8 (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0141B24 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C0146494 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::PlatformAbort(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx

  result = 0LL;
  if ( !a1 )
    KeBugCheckEx(0x164u, 9uLL, a2, a3, 0LL);
  v4 = a1 - 1;
  if ( !v4 )
    KeBugCheckEx(0x164u, 0x23uLL, a2, a3, 0LL);
  v5 = v4 - 1;
  if ( !v5 )
    KeBugCheckEx(0x164u, 0x22uLL, a2, a3, 0LL);
  if ( v5 == 1 )
    KeBugCheckEx(0x164u, 0x21uLL, a2, a3, 0LL);
  return result;
}
