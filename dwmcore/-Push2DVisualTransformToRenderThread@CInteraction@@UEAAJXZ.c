__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  CComposition *v1; // rbx
  int ManipulationManager; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct CManipulationManager *v6; // rbx
  __int64 v7; // rdi
  unsigned int v9; // [rsp+20h] [rbp-69h]
  struct _D3DMATRIX v10; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+F0h] [rbp+67h] BYREF
  struct CManipulationManager *v12; // [rsp+F8h] [rbp+6Fh] BYREF
  char *v13; // [rsp+100h] [rbp+77h] BYREF
  __int64 v14; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = (CComposition *)*((_QWORD *)this - 6);
  v12 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(v1, &v12);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v9 = 725;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  v6 = v12;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v12, &v11);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v9 = 727;
    goto LABEL_10;
  }
  v7 = *((_QWORD *)v6 + 7);
  if ( v7 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 8) + 8LL))((char *)this - 64);
    CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 1196), &v10);
    v13 = (char *)this - 64;
    v14 = v7;
    ManipulationManager = CoreUICallSend(v11, &v14, 1LL, 12LL, 3, &unk_180339450, &v13);
    v5 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 656LL) + 32LL))(
        *(_QWORD *)(*((_QWORD *)this - 6) + 656LL),
        0LL,
        0x4000LL);
      goto LABEL_11;
    }
    v9 = 739;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, ManipulationManager, v9, 0LL);
    goto LABEL_11;
  }
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147467259, 0x2DAu, 0LL);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return v5;
}
