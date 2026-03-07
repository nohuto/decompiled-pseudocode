__int64 __fastcall CWindowNode::ProcessSetSourceModifications(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *a3)
{
  int v4; // ecx
  float *v6; // rbx
  __int128 v7; // xmm1
  bool v8; // r10
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  float v12; // xmm13_4
  float v13; // xmm12_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  unsigned __int64 i; // r14
  __int64 v22; // rcx
  CGdiSpriteBitmap *v23; // rax
  __int128 v24; // [rsp+28h] [rbp-89h] BYREF
  __int128 v25; // [rsp+38h] [rbp-79h]
  int v26; // [rsp+48h] [rbp-69h]
  __int128 v27; // [rsp+70h] [rbp-41h]

  v4 = *((_DWORD *)this + 213);
  v6 = (float *)((char *)this + 800);
  v7 = *((_OWORD *)this + 51);
  v8 = (v4 & 2) != 0;
  v9 = (*((_BYTE *)a3 + 8) & 2) == 0;
  v10 = *((_DWORD *)this + 208);
  v24 = *((_OWORD *)this + 50);
  v26 = v10;
  v25 = v7;
  if ( v9 )
  {
    *(_OWORD *)v6 = _xmm;
    LOBYTE(v27) = 0;
    v11 = v27;
    *((_OWORD *)this + 51) = 0LL;
    *((_DWORD *)this + 208) = v11;
  }
  else
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), (struct _D3DCOLORVALUE *)this + 50);
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 4), (struct _D3DCOLORVALUE *)this + 51);
    if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
      *((_BYTE *)this + 832) = 1;
    v4 = *((_DWORD *)this + 213);
  }
  v12 = *((float *)&v25 + 3);
  v13 = *((float *)&v25 + 2);
  v14 = *((float *)&v25 + 1);
  v15 = *(float *)&v25;
  v16 = *((float *)&v24 + 3);
  v17 = *((float *)&v24 + 2);
  v18 = *((float *)&v24 + 1);
  v19 = *(float *)&v24;
  *((_BYTE *)this + 893) = *((_BYTE *)a3 + 20) != 0;
  if ( v8 != ((v4 & 2) != 0)
    || (CColorKey::IsNonEmpty((CColorKey *)&v24) || CColorKey::IsNonEmpty((CWindowNode *)((char *)this + 800)))
    && (v19 != *v6
     || v18 != *((float *)this + 201)
     || v17 != *((float *)this + 202)
     || v16 != *((float *)this + 203)
     || v15 != *((float *)this + 204)
     || v14 != *((float *)this + 205)
     || v13 != *((float *)this + 206)
     || v12 != *((float *)this + 207)) )
  {
    for ( i = 0LL; i < CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 776)); ++i )
    {
      v23 = (CGdiSpriteBitmap *)CPtrArrayBase::operator[](v22, i);
      CGdiSpriteBitmap::SetColorKey(v23, (*((_DWORD *)this + 213) & 2) != 0, (CWindowNode *)((char *)this + 800));
    }
  }
  if ( (CColorKey::IsNonEmpty((CWindowNode *)((char *)this + 800)) || CColorKey::IsNonEmpty((CColorKey *)&v24))
    && (*v6 != v19
     || *((float *)this + 201) != v18
     || *((float *)this + 202) != v17
     || *((float *)this + 203) != v16
     || *((float *)this + 204) != v15
     || *((float *)this + 205) != v14
     || *((float *)this + 206) != v13
     || *((float *)this + 207) != v12)
    || *((_DWORD *)this + 213) != *((_DWORD *)a3 + 2) )
  {
    *((_DWORD *)this + 213) = *((_DWORD *)a3 + 2);
    CVisual::PropagateFlags((__int64)this, 4u);
  }
  return 0LL;
}
