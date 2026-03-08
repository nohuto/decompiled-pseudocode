/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1800E1920
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800E197C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  CSparseStorage *v5; // rcx
  __int64 v7; // rcx
  struct CResourceTable *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( CBaseExpression::GetTracingCookie(this) )
  {
    if ( !*(_DWORD *)(v3 + 8) )
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) + 160LL);
  }
  else if ( *(_DWORD *)(v3 + 8) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL);
    ++*(_DWORD *)(v7 + 160);
    *(_BYTE *)(v7 + 448) |= 2u;
  }
  v5 = (CSparseStorage *)(v4 + 328);
  LODWORD(v8) = *(_DWORD *)(v3 + 8);
  if ( (_DWORD)v8 == `CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v5 + 4LL) &= ~0x40000000u;
  else
    CSparseStorage::SetData(v5, 2u, 4u, &v8);
  return 0LL;
}
