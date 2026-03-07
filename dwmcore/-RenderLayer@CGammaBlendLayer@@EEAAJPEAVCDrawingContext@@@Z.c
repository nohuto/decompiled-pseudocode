__int64 __fastcall CGammaBlendLayer::RenderLayer(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD **); // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int v15[6]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v16; // [rsp+50h] [rbp+8h] BYREF

  v15[0] = 0;
  v15[1] = 0;
  v4 = *((_QWORD *)this + 1);
  v15[2] = *((_DWORD *)this + 6);
  v15[3] = *((_DWORD *)this + 7);
  v5 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 16LL);
  v6 = *(_QWORD *)(v5 + 8);
  v16 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(v6 + 48);
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
  v9 = v7(v5 + 8, v8, &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x63u, 0LL);
  }
  else
  {
    v12 = CGammaBlendLayer::CopyAndTransform(v10, a2, v16, v15, (__int64)this + 16, 3u);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Bu, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
  return v11;
}
