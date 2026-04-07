/*
 * XREFs of ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x1800A2BBC
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800A2AF4 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003D0B8 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003E240 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003F33C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800483A8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextTetherVisual::_UpdateHandleInstructions(CTextTetherVisual *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // ebp
  int v5; // eax
  CContactManager *v6; // rcx
  int v7; // edx
  int v8; // esi
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = CImage::SetBitmapSource(*((CImage **)this + 50), *((struct CBitmapSource **)this + 49));
  v3 = 0;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = CImage::SetBitmapSource(*((CImage **)this + 52), *((struct CBitmapSource **)this + 51));
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = 0;
      if ( *((_DWORD *)this + 85) - *((_DWORD *)this + 83) >= 0 )
        v7 = *((_DWORD *)this + 85) - *((_DWORD *)this + 83);
      if ( *((_DWORD *)this + 86) - *((_DWORD *)this + 84) >= 0 )
        v3 = *((_DWORD *)this + 86) - *((_DWORD *)this + 84);
      if ( v7 <= v3 )
        v7 = v3;
      v8 = (int)(CContactManager::GetBoundedContactWidth(v6, v7, *(struct tagPOINT *)((char *)this + 324))
               * *((_DWORD *)this + 79))
         / 100;
      v14 = *(_QWORD *)((char *)this + 348);
      v9 = v14 - v8 / 2;
      v10 = HIDWORD(v14) - v8 / 2;
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 50), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 50), v10);
      v11 = *((_QWORD *)this + 50);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 96LL))(v11, &v14);
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 52), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 52), v10);
      v12 = *((_QWORD *)this + 52);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, &v14);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x85u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x84u);
  }
  return v4;
}
