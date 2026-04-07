/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180010034
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180019514 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18000D3A8 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800101D8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012BB0 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014F08 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180026730 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

struct CCachedVisualImageProxy *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v2; // eax
  int v5; // eax
  CCachedVisualImageProxy *v6; // rdi
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  CCachedVisualImageProxy *v11; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-38h]
  __int128 v13; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v14[4]; // [rsp+68h] [rbp-18h] BYREF

  v2 = *((_DWORD *)this + 22);
  v11 = 0LL;
  v12[0] = v2;
  v12[1] = *((_DWORD *)this + 24);
  v12[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v12[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v5 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v11);
  v6 = v11;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x336u);
  }
  else
  {
    v8 = 0LL;
    v13 = 0LL;
    do
    {
      *(float *)&v14[v8] = (float)(int)v12[v8];
      ++v8;
    }
    while ( v8 < 4 );
    CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    if ( *((_DWORD *)this + 18) == 3 )
      CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8));
    v9 = CCachedVisualImageProxy::Update(v6, v14, &v13, 0LL, 0LL);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x351u);
    }
    else if ( a2 )
    {
      CCachedVisualImageProxy::Freeze(v6);
    }
  }
  if ( v7 < 0 && v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}
