/*
 * XREFs of ?SetRenderTransform@CCachedVisualImage@@IEAAJAEBU_D3DMATRIX@@@Z @ 0x18021466C
 * Callers:
 *     ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x180253D20 (-ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFO.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRenderTransform(CCachedVisualImage *this, const struct _D3DMATRIX *a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-48h]

  v2 = *(_OWORD *)&a2->_11;
  v3 = 0;
  v11 = *(_OWORD *)&a2->_11;
  v5 = *(_OWORD *)&a2->_21;
  v6 = *(_OWORD *)&a2->_31;
  v7 = *(_OWORD *)&a2->_41;
  v8 = (_DWORD *)*((_QWORD *)this + 21);
  if ( !v8 )
  {
    v8 = operator new(0x44uLL);
    if ( !v8 )
    {
      *((_QWORD *)this + 21) = 0LL;
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1DCu, 0LL);
      return v3;
    }
    v8[16] = 0;
    v2 = v11;
    *((_QWORD *)this + 21) = v8;
  }
  *(_OWORD *)v8 = v2;
  *((_OWORD *)v8 + 1) = v5;
  *((_OWORD *)v8 + 2) = v6;
  *((_OWORD *)v8 + 3) = v7;
  v8[16] = 0;
  return v3;
}
