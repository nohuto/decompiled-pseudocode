__int64 __fastcall CMesh2DEffect::Register(struct CD2DFactory *a1)
{
  _QWORD v2[10]; // [rsp+40h] [rbp-68h] BYREF

  v2[0] = L"matWorldToProjection";
  v2[1] = ValueSetter<long (CMesh2DEffect::*)(D2D_MATRIX_4X4_F),{public: long CMesh2DEffect::SetWorldToProjection(D2D_MATRIX_4X4_F),0},ID2D1EffectImpl>;
  v2[2] = ValueGetter<D2D_MATRIX_4X4_F (CMesh2DEffect::*)(void)const,{public: D2D_MATRIX_4X4_F CMesh2DEffect::GetWorldToProjection(void)const,0},ID2D1EffectImpl>;
  v2[3] = L"matTextureTransform";
  v2[4] = ValueSetter<long (CMesh2DEffect::*)(D2D_MATRIX_3X2_F),{public: long CMesh2DEffect::SetTextureTransform(D2D_MATRIX_3X2_F),0},ID2D1EffectImpl>;
  v2[5] = ValueGetter<D2D_MATRIX_3X2_F (CMesh2DEffect::*)(void)const,{public: D2D_MATRIX_3X2_F CMesh2DEffect::GetTextureTransform(void)const,0},ID2D1EffectImpl>;
  v2[6] = L"vertices";
  v2[7] = BlobSetter<long (CMesh2DEffect::*)(unsigned char const *,unsigned int),{public: long CMesh2DEffect::SetVertices(unsigned char const *,unsigned int),0},ID2D1EffectImpl>;
  v2[8] = BlobGetter<long (CMesh2DEffect::*)(unsigned char *,unsigned int,unsigned int *)const,{public: long CMesh2DEffect::GetVertices(unsigned char *,unsigned int,unsigned int *)const,0},ID2D1EffectImpl>;
  return (*(__int64 (__fastcall **)(_QWORD, GUID *, const wchar_t *, _QWORD *, int, __int64 (__fastcall *)(struct IUnknown **)))(*g_DeviceManager + 184LL))(
           g_DeviceManager,
           &CLSID_Mesh2DEffect,
           L"<?xml version='1.0'?><Effect> <!-- System Properties --> <Property name='DisplayName' type='string' value='DW"
            "M Mesh2D Vertex Shader Effect'/> <Property name='Author' type='string' value='Microsoft Corporation'/> <Prop"
            "erty name='Category' type='string'/> <Property name='Description' type='string' value='A vertex shader for b"
            "asic rendering of sets of triangles.'/> <!-- Each effect can have 0 or more inputs --> <Inputs> <Input name="
            "'Source'/> </Inputs> <!-- Custom Properties go here --> <Property name='matWorldToProjection' type='matrix4x"
            "4'> <Property name='DisplayName' type='string' value='World To Projection Transform'/> </Property> <Property"
            " name='matTextureTransform' type='matrix3x2'> <Property name='DisplayName' type='string' value='Texture Tran"
            "sform'/> </Property> <Property name='vertices' type='blob'> <Property name='DisplayName' type='string' value"
            "='Vertices'/> </Property> </Effect>",
           v2,
           3,
           CMesh2DEffect::Create);
}
