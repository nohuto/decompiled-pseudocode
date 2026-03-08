/*
 * XREFs of ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z @ 0x1C00BEF50
 * Callers:
 *     ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C00BEF00 (-Delete@CHwndTargetProp@@UEAAXXZ.c)
 * Callees:
 *     ApiSetEditionNotifyDwmForSystemVisualDestruction @ 0x1C00BEFC0 (ApiSetEditionNotifyDwmForSystemVisualDestruction.c)
 */

__int64 __fastcall CHwndTargetProp::ClearSystemVisual(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  void *v6; // rcx

  v4 = 0;
  v5 = 2LL * (int)a2;
  v6 = *(void **)(a1 + 16LL * (int)a2 + 24);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(a1 + 8 * v5 + 24) = 0LL;
    v4 = 1;
    ApiSetEditionNotifyDwmForSystemVisualDestruction(*(_QWORD *)(a1 + 16), a2);
  }
  return v4;
}
