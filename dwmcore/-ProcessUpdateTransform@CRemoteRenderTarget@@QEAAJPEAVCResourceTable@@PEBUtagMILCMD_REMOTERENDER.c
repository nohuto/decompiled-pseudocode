__int64 __fastcall CRemoteRenderTarget::ProcessUpdateTransform(
        CRemoteRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM *a3)
{
  float v3; // xmm1_4
  struct MilRectF *v4; // rbp
  float v6; // xmm3_4
  float v8; // xmm0_4
  _DWORD *v9; // rdi
  float v10; // xmm2_4
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  CResource *v15; // rcx
  int v16; // eax
  float v17; // xmm1_4
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-128h] BYREF
  int v22; // [rsp+34h] [rbp-124h]
  float v23; // [rsp+38h] [rbp-120h]
  float v24; // [rsp+3Ch] [rbp-11Ch]
  _BYTE v25[256]; // [rsp+40h] [rbp-118h] BYREF

  v3 = *((float *)a3 + 4);
  v4 = (CRemoteRenderTarget *)((char *)this + 208);
  *((float *)this + 52) = v3;
  v6 = *((float *)a3 + 5);
  *((float *)this + 53) = v6;
  v8 = *((float *)a3 + 6);
  *((float *)this + 54) = v8;
  v9 = (_DWORD *)((char *)this + 108);
  v10 = *((float *)a3 + 7);
  *((float *)this + 55) = v10;
  v11 = (int)(float)(v8 - v3);
  if ( __PAIR64__(*v9, *((_DWORD *)this + 26)) != __PAIR64__((int)(float)(v10 - v6), v11) )
  {
    *((_DWORD *)this + 26) = v11;
    *v9 = (int)(float)(v10 - v6);
    v12 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v12 )
    {
      v19 = v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v13 = *((_QWORD *)a3 + 1);
  if ( *((_QWORD *)this + 25) == v13 )
  {
    if ( *((_QWORD *)this + 23) )
    {
      CMonitorTransform::CMonitorTransform((CMonitorTransform *)v25);
      v21 = 0;
      v22 = 0;
      CMonitorTransform::Initialize((__int64)v25, &v21, v4, 1.0, 1, 0LL);
      CDDARenderTarget::UpdateTransform(*((CDDARenderTarget **)this + 23), (const struct CMonitorTransform *)v25);
    }
  }
  else
  {
    *((_QWORD *)this + 25) = v13;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)this + 21);
    v14 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
    if ( v14 )
    {
      v20 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v15 = (CResource *)*((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v15 )
      CResource::InternalRelease(v15);
  }
  v16 = *((_DWORD *)this + 26);
  v21 = 0;
  v22 = 0;
  v17 = (float)(int)*v9;
  v23 = (float)v16;
  v24 = v17;
  CMILMatrix::InferAffineMatrix((CRemoteRenderTarget *)((char *)this + 224));
  result = 0LL;
  *((_BYTE *)this + 141) = 1;
  return result;
}
