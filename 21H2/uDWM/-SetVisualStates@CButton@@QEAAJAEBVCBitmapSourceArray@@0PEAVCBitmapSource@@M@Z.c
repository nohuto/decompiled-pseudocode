/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800257B8
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180025364 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800259D0 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180026D78 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x180026E98 (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        struct CBitmapSource *a4,
        float a5)
{
  unsigned int v6; // edi
  CBitmapSourceArray *v7; // rcx
  bool v8; // si
  unsigned int v11; // r11d
  unsigned int v12; // r13d
  char v13; // r10
  __int64 v14; // r12
  char v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  CBitmapSourceArray *v18; // rcx
  unsigned int v19; // r10d
  unsigned int v20; // r14d
  char v21; // dl
  __int64 v22; // r11
  char v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // r9
  CBaseObject *v26; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax

  v6 = 0;
  v7 = (CButton *)((char *)this + 304);
  v8 = 0;
  v11 = *((_DWORD *)v7 + 6);
  if ( v11 == *((_DWORD *)a2 + 6) )
  {
    v12 = 0;
    v13 = 1;
    if ( !v11 )
      goto LABEL_9;
    v14 = 0LL;
    while ( v13 )
    {
      v15 = 0;
      v16 = (_QWORD *)(v14 + *(_QWORD *)a2);
      v17 = (_QWORD *)(v14 + *(_QWORD *)v7);
      ++v12;
      v14 += 8LL;
      if ( *v17 == *v16 )
        v15 = v13;
      v13 = v15;
      if ( v12 >= v11 )
      {
        if ( !v15 )
          break;
        goto LABEL_9;
      }
    }
  }
  v30 = CBitmapSourceArray::CopyAndAddRef(v7, a2);
  v6 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x4Cu);
    return v6;
  }
  v8 = 1;
LABEL_9:
  v18 = (CButton *)((char *)this + 336);
  v19 = *((_DWORD *)this + 90);
  if ( v19 != *((_DWORD *)a3 + 6) )
  {
LABEL_22:
    v28 = CBitmapSourceArray::CopyAndAddRef(v18, a3);
    v6 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x52u);
      return v6;
    }
    v8 = 1;
    goto LABEL_17;
  }
  v20 = 0;
  v21 = 1;
  if ( v19 )
  {
    v22 = 0LL;
    while ( v21 )
    {
      v23 = 0;
      v24 = (_QWORD *)(v22 + *(_QWORD *)a3);
      v25 = (_QWORD *)(v22 + *(_QWORD *)v18);
      ++v20;
      v22 += 8LL;
      if ( *v25 == *v24 )
        v23 = v21;
      v21 = v23;
      if ( v20 >= v19 )
      {
        if ( !v23 )
          goto LABEL_22;
        goto LABEL_17;
      }
    }
    goto LABEL_22;
  }
LABEL_17:
  v26 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v26 != a4 )
  {
    if ( v26 )
      CBaseObject::Release(v26);
    *((_QWORD *)this + 46) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v8 = 1;
  }
  if ( *((float *)this + 101) != a5 )
  {
    *((float *)this + 101) = a5;
    CButton::UpdateCurrentGlyphOpacity(this, v8);
  }
  if ( v8 )
  {
    v29 = *((_DWORD *)this + 20);
    if ( (v29 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 20) = v29 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  return v6;
}
