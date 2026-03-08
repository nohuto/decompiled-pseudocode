/*
 * XREFs of NtFlipObjectEnablePresentStatisticsType @ 0x1C0080360
 * Callers:
 *     <none>
 * Callees:
 *     ?EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z @ 0x1C007F3D4 (-EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectEnablePresentStatisticsType(void *a1, unsigned int a2, int a3)
{
  char v6; // r8
  int v7; // ebx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  if ( a1 )
  {
    v7 = FlipManagerObject::ResolveHandle(a1, 2u, v6, (struct FlipManagerObject **)&Object);
    if ( v7 >= 0 )
      v7 = FlipManagerObject::EnablePresentStatisticsType((__int64)Object, a2, a3 != 0);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  else
  {
    v7 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
