/*
 * XREFs of NtFlipObjectRemoveContent @ 0x1C0080B70
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C007F704 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x1C0088FA4 (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 */

__int64 __fastcall NtFlipObjectRemoveContent(struct CDisableScanoutToken *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r14
  char v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  struct CDisableScanoutToken *v8; // [rsp+50h] [rbp+8h] BYREF
  struct FlipManagerObject *v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = a1;
  if ( a1 && a2 )
  {
    v9 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v3 = *a2;
    KeEnterCriticalRegion();
    v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v9);
    v6 = v9;
    if ( v5 >= 0 )
    {
      v8 = 0LL;
      v5 = FlipManagerObject::RemoveContent(v9, v3, &v8);
      CDisableScanoutToken::SendToTokenManager(&v8);
    }
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
