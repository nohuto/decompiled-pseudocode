__int64 __fastcall CCaptureRenderTarget::RenderAdditionalTopmostContent(CVisualTree **this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  char v3; // r12
  __int128 v4; // rdi
  const struct CVisualTree *RootVisualTree; // r15
  CTransform3D *v6; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int64 v8; // rax
  int WorldTransform; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  __int64 v13; // r14
  __int64 v14; // rcx
  struct IDeviceTarget *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  _QWORD v27[8]; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+78h] [rbp-90h]
  __int128 v29; // [rsp+88h] [rbp-80h]
  const struct CVisualTree *v30; // [rsp+98h] [rbp-70h]
  _QWORD v31[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v32[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v33; // [rsp+108h] [rbp+0h]
  struct _D3DCOLORVALUE v34; // [rsp+118h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  *((_QWORD *)&v4 + 1) = a2;
  *(_QWORD *)&v4 = this;
  if ( *((_DWORD *)this + 438) == 1 )
  {
    RootVisualTree = CVisualTree::GetRootVisualTree(this[12]);
    if ( RootVisualTree != *(const struct CVisualTree **)(v4 + 96) )
    {
      v33 = 0;
      v6 = *(CTransform3D **)(v4 + 152);
      if ( v6 )
      {
        Matrix = CTransform3D::GetMatrix(v6, 0LL);
        v32[0] = *(_OWORD *)Matrix;
        v32[1] = *((_OWORD *)Matrix + 1);
        v32[2] = *((_OWORD *)Matrix + 2);
        v32[3] = *((_OWORD *)Matrix + 3);
        v33 = *((_DWORD *)Matrix + 16);
      }
      else
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)v32);
      }
      v8 = *(_QWORD *)(v4 + 96);
      v28 = 0;
      WorldTransform = CVisual::GetWorldTransform(
                         *(CVisual **)(v8 + 64),
                         RootVisualTree,
                         0,
                         (struct CMILMatrix *)v27,
                         0LL,
                         0LL);
      v2 = WorldTransform;
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, WorldTransform, 0x107u, 0LL);
      }
      else
      {
        if ( !CMILMatrix::Invert((CMILMatrix *)v27, v10, v12) )
          CMILMatrix::SetToIdentity((CMILMatrix *)v27);
        CMILMatrix::Multiply((CMILMatrix *)v32, (const struct CMILMatrix *)v27);
        v13 = 0LL;
        *(struct _D3DCOLORVALUE *)&v34.r = *(struct _D3DCOLORVALUE *)(v4 + 124);
        if ( *(_DWORD *)(v4 + 1784) )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(v4 + 1760) + 8 * v13);
            v15 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
            v16 = CDrawingContext::BeginFrame(
                    *((CDrawingContext **)&v4 + 1),
                    v15,
                    (const struct CMILMatrix *)v32,
                    &v34,
                    0LL);
            v2 = v16;
            if ( v16 < 0 )
              break;
            v27[0] = 10LL;
            LODWORD(v27[1]) = 1;
            v18 = CDrawingContext::PushRenderOptionsInternal(
                    *((__int64 *)&v4 + 1),
                    0LL,
                    (const struct MilRenderOptions *)v27,
                    1);
            v19 = *(_QWORD *)(v4 + 16);
            v31[0] = v4;
            if ( v18 >= 0 )
              v3 = 1;
            v31[1] = *((_QWORD *)&v4 + 1);
            v31[2] = RootVisualTree;
            v20 = CComposition::ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___(
                    v19,
                    (__int64)v31);
            v2 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x144u, 0LL);
              goto LABEL_18;
            }
            v22 = *(__int64 **)(v4 + 16);
            v29 = v4;
            v23 = *v22;
            v27[0] = off_1802CE6A8;
            v30 = RootVisualTree;
            v27[7] = v27;
            *(_OWORD *)&v27[1] = v4;
            v27[3] = RootVisualTree;
            v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v23 + 80))(v22, v27);
            v2 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x161u, 0LL);
LABEL_18:
              CDrawingContext::EndFrame(*((CDrawingContext **)&v4 + 1));
              goto LABEL_21;
            }
            CDrawingContext::EndFrame(*((CDrawingContext **)&v4 + 1));
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= *(_DWORD *)(v4 + 1784) )
              goto LABEL_21;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x118u, 0LL);
LABEL_21:
          if ( v3 )
            CDrawingContext::PopRenderOptionsInternal(*((CDrawingContext **)&v4 + 1), 1);
        }
      }
    }
  }
  return v2;
}
