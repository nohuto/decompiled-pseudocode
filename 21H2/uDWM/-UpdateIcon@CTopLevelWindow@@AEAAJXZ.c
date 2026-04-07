/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18003CFD8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C900 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003D0B8 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18003D114 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     IsOpenThemeDataPresent @ 0x180054134 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CTopLevelWindow *this)
{
  CBaseObject *v1; // rbx
  unsigned int v3; // edi
  CImage *v4; // rcx
  char v6; // r14
  __int64 v7; // rax
  char v8; // bp
  int v9; // eax
  int v10; // eax
  CBaseObject *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  v4 = (CImage *)*((_QWORD *)this + 66);
  if ( !v4 )
    return v3;
  v6 = *((_DWORD *)v4 + 68) == 0;
  if ( (*((_DWORD *)this + 148) & 0x10000) == 0 || (v7 = *((_QWORD *)this + 91), !*(_QWORD *)(v7 + 136)) )
  {
    v8 = 1;
LABEL_8:
    v10 = CImage::SetBitmapSource(v4, v1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x126Bu);
    }
    else if ( v8 != v6 )
    {
      CVisual::SetDirtyFlags(this, 4096);
    }
    goto LABEL_11;
  }
  v8 = 0;
  v9 = CBitmapSource::Create(*(HICON *)(v7 + 136), &v11);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v4 = (CImage *)*((_QWORD *)this + 66);
    v1 = v11;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1268u);
  v1 = v11;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
