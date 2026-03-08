/*
 * XREFs of ?ForceFullRender@CRemoteAppRenderTarget@@MEAAXXZ @ 0x1801E7930
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801E8BFC (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 */

void __fastcall CRemoteAppRenderTarget::ForceFullRender(CRemoteAppRenderTarget *this)
{
  __int64 v2; // rax

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6 )
  {
    v2 = *((_QWORD *)this + 12);
    if ( v2 )
      *(_BYTE *)(v2 + 4713) = 1;
    *((_WORD *)this + 146) = 257;
  }
  else
  {
    CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)((char *)this + 264));
  }
  *((_BYTE *)this + 141) = 1;
}
