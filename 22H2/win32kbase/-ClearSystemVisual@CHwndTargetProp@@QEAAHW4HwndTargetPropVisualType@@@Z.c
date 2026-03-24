/*
 * XREFs of ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4HwndTargetPropVisualType@@@Z @ 0x1C00A70F0
 * Callers:
 *     ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C00A70A0 (-Delete@CHwndTargetProp@@UEAAXXZ.c)
 * Callees:
 *     ApiSetEditionNotifyDwmForSystemVisualDestruction @ 0x1C00A7170 (ApiSetEditionNotifyDwmForSystemVisualDestruction.c)
 */

__int64 __fastcall CHwndTargetProp::ClearSystemVisual(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdi
  void *v7; // rcx

  v2 = 0;
  v5 = 0;
  v6 = 2 * (a2 + 1LL);
  v7 = *(void **)(a1 + 16 * (a2 + 1LL));
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *(_QWORD *)(a1 + 8 * v6) = 0LL;
    v5 = 1;
    LOBYTE(v2) = a2 == 0;
    ApiSetEditionNotifyDwmForSystemVisualDestruction(*(_QWORD *)(a1 + 8), v2);
  }
  return v5;
}
