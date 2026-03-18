/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualDestruction @ 0x1C00B2C80
 * Callers:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z @ 0x1C00B2C10 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualDestruction(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !qword_1C0296E18 || (int)qword_1C0296E18() < 0 )
    return 0LL;
  if ( qword_1C0296E20 )
    return (unsigned int)qword_1C0296E20(a1, a2);
  return v2;
}
