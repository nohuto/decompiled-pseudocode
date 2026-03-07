__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  FLOAT v6; // xmm1_4
  __int64 v7; // rax
  char v8; // cl
  bool v9; // zf
  struct D2D_VECTOR_3F v11; // [rsp+20h] [rbp-18h] BYREF

  CVisual::GetWorldUpVectorOverride(this, &v11);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v11.x
    || *((float *)a3 + 4) != v11.y
    || *((float *)a3 + 5) != v11.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v6 = *((float *)a3 + 4);
    v11.x = *((FLOAT *)a3 + 3);
    v11.z = *((FLOAT *)a3 + 5);
    v11.y = v6;
    CVisual::SetWorldUpVectorOverride(this, &v11);
    v7 = *((_QWORD *)this + 28);
    if ( (*(_DWORD *)(v7 + 4) & 0x40000) != 0 || (*(_DWORD *)(v7 + 4) & 0x20000) != 0 )
      v8 = 0x80;
    else
      v8 = 0;
    v9 = (*((_DWORD *)this + 24) & 0x4000) == 0;
    *((_BYTE *)this + 102) = v8 | *((_BYTE *)this + 102) & 0x7F;
    if ( !v9 )
    {
      *((_QWORD *)this + 73) = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u);
    }
  }
  return 0LL;
}
