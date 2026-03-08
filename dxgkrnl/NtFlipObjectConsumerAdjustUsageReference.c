/*
 * XREFs of NtFlipObjectConsumerAdjustUsageReference @ 0x1C007FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C007F164 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerAdjustUsageReference(void *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r14
  char v6; // r8
  int v7; // ebx
  struct FlipManagerObject *v8; // rdi
  struct FlipManagerObject *v10; // [rsp+78h] [rbp+20h] BYREF

  if ( a1 && a2 )
  {
    v10 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    KeEnterCriticalRegion();
    v7 = FlipManagerObject::ResolveHandle(a1, 1u, v6, &v10);
    v8 = v10;
    if ( v7 >= 0 )
      v7 = FlipManagerObject::ConsumerAdjustUsageReference(v10, v5, a3 != 0);
    if ( v8 )
      ObfDereferenceObject(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
