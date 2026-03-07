__int64 __fastcall CBrushRenderingGraphBuilder::Build(CBrushRenderingGraphBuilder *this, struct CBrush *a2)
{
  unsigned int v4; // ecx
  int v5; // ebx
  CRenderingTechniqueFragment *v6; // rsi
  int ShaderBodies; // eax
  char v8; // al
  CRenderingTechniqueFragment *v9; // rdi
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  char v15; // [rsp+80h] [rbp+30h] BYREF
  CRenderingTechniqueFragment *v16; // [rsp+88h] [rbp+38h] BYREF

  v16 = 0LL;
  v13 = 0LL;
  v14 = 1;
  v5 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v13);
  if ( v14 )
  {
    v6 = v16;
    v16 = v13;
    if ( v6 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v6);
      operator delete(v6, 0x80uLL);
    }
  }
  if ( v5 < 0 )
  {
    v11 = v5;
    v12 = 48;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v16, &v15);
    v5 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v12 = 51;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 107LL);
      ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, v8);
      v5 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v12 = 53;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
        v5 = ShaderBodies;
        if ( ShaderBodies >= 0 )
        {
          CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
          goto LABEL_9;
        }
        v12 = 54;
      }
    }
    v11 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v11, v12, 0LL);
LABEL_9:
  v9 = v16;
  if ( v16 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v16);
    operator delete(v9, 0x80uLL);
  }
  return (unsigned int)v5;
}
