/*
 * XREFs of ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801E8BFC
 * Callers:
 *     ?ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS@@@Z @ 0x1801C2AE0 (-ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDER.c)
 *     ?ForceFullRender@CRemoteAppRenderTarget@@MEAAXXZ @ 0x1801E7930 (-ForceFullRender@CRemoteAppRenderTarget@@MEAAXXZ.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x1801E7E90 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A7190 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1801E82D8 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SetWindowBounds(CRemoteAppRenderTarget *this, const struct tagRECT *a2)
{
  LONG left; // esi
  LONG top; // r14d
  LONG right; // r10d
  LONG bottom; // r15d
  unsigned int v7; // edi
  LONG v8; // r10d
  LONG *v9; // r11
  _DWORD *v10; // rcx
  int *v11; // rsi
  char v12; // bp
  int v13; // r10d
  __int64 v14; // rdx
  int (__fastcall ***v15)(_QWORD); // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD v21[4]; // [rsp+30h] [rbp-38h] BYREF

  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v21[0] = a2->left;
  v7 = 0;
  v21[1] = top;
  v21[2] = right;
  v21[3] = bottom;
  if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo((_DWORD *)this + 66, v21) )
  {
    *v9 = left;
    v10 = (_DWORD *)((char *)this + 276);
    v9[1] = top;
    v11 = (int *)((char *)this + 104);
    v9[2] = v8;
    v12 = 0;
    v9[3] = bottom;
    v13 = v8 - *v9;
    if ( *((_DWORD *)this + 26) != v13 || *((_DWORD *)this + 27) != *v10 - *((_DWORD *)this + 67) )
    {
      *v11 = v13;
      v12 = 1;
      *((_DWORD *)this + 27) = *v10 - *((_DWORD *)this + 67);
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6
      && (v14 = *((_QWORD *)this + 21)) != 0
      && (v15 = (int (__fastcall ***)(_QWORD))(v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 12LL)), (**v15)(v15) >= 0)
      && *v11
      && *((_DWORD *)this + 27) )
    {
      if ( v12 )
      {
        v16 = 32LL;
        if ( *((_DWORD *)this + 72) != 2 )
          v16 = 0LL;
        v17 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 21) + 48LL))(
                *((_QWORD *)this + 21),
                (char *)this + 104,
                v16);
        v7 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1A2u, 0LL);
          return v7;
        }
      }
    }
    else
    {
      CRemoteAppRenderTarget::ReleaseSwapChain(this);
    }
    v19 = *((_QWORD *)this + 12);
    if ( v19 )
      *(_BYTE *)(v19 + 4712) = 1;
    *((_BYTE *)this + 141) = 1;
  }
  return v7;
}
