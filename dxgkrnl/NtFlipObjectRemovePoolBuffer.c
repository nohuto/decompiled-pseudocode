/*
 * XREFs of NtFlipObjectRemovePoolBuffer @ 0x1C0080C70
 * Callers:
 *     <none>
 * Callees:
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007F774 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectRemovePoolBuffer(void *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r14
  char v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  struct FlipManagerObject *v8; // [rsp+60h] [rbp+18h] BYREF

  if ( a1 && a2 )
  {
    v8 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v3 = *a2;
    KeEnterCriticalRegion();
    v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v8);
    v6 = v8;
    if ( v5 >= 0 )
      v5 = FlipManagerObject::RemovePoolBuffer(v8, v3);
    if ( v6 )
      ObfDereferenceObject(v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
