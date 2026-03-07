__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        struct IDeviceTarget *a2,
        const struct CMILMatrix *a3,
        const struct _D3DCOLORVALUE *a4,
        struct COverlayContext *a5)
{
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  CMILMatrix *v13; // rcx
  char v14; // al
  struct COverlayContext *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int i; // r14d
  __int64 v22; // rcx
  _DWORD *v23; // rax
  CProcessAttributionManager *v24; // rcx
  struct CProcessAttribution *NullProcessAttribution; // rax
  struct CProcessAttribution *v26; // rdi
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edx
  char *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  char v37; // si
  char *v38; // rcx
  float v39; // xmm6_4
  char *v40; // rcx
  _DWORD *v41; // rax
  int v42; // edx
  __int64 v43; // rcx
  float v44; // [rsp+30h] [rbp-50h]
  __int128 v45; // [rsp+50h] [rbp-30h] BYREF
  __int64 v46; // [rsp+60h] [rbp-20h]
  void *retaddr; // [rsp+A8h] [rbp+28h]
  struct CProcessAttribution *v48; // [rsp+B0h] [rbp+30h] BYREF
  char v49; // [rsp+B8h] [rbp+38h] BYREF

  *((_OWORD *)this + 503) = 0LL;
  *((_OWORD *)this + 504) = 0LL;
  *((_QWORD *)this + 1010) = 0LL;
  v9 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, __int128 *))a2)(a2, &v45);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v9;
  *((_QWORD *)this + 9) = *(_QWORD *)(v9 + 16);
  if ( *((_QWORD *)this + 26) )
  {
    wil::com_ptr_t<IDeviceTarget,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a2);
    v32 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
    v33 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v32 + 8LL))(v32);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=((char *)this + 40, v33);
  }
  else
  {
    v10 = CDrawingContext::PushRenderTarget(this, a2);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE1u, 0LL);
      return v12;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    if ( !a3 || (v37 = 1, CMILMatrix::IsIdentity<0>((__int64)a3)) )
      v37 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v38 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
      v39 = (float)*(int *)((**(__int64 (__fastcall ***)(char *, struct CProcessAttribution **))v38)(v38, &v48) + 4);
      v40 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
      v41 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, char *))v40)(v40, &v49);
      v44 = (float)(int)*v41;
      McTemplateU0ppffffubr6_EventWriteTransfer(
        *v41,
        v42,
        (_DWORD)this,
        (_DWORD)a2,
        0,
        0,
        SLOBYTE(v44),
        SLOBYTE(v39),
        v37 != 0 ? 0x44 : 0,
        (__int64)a3);
    }
  }
  v13 = (CDrawingContext *)((char *)this + 96);
  if ( a3 )
  {
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_OWORD *)this + 7) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 8) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 9) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 40) = *((_DWORD *)a3 + 16);
    v14 = CMILMatrix::IsIdentity<0>((__int64)v13);
  }
  else
  {
    CMILMatrix::SetToIdentity(v13);
    v14 = 1;
  }
  *((_BYTE *)this + 8168) = v14;
  if ( a4 )
  {
    *((struct _D3DCOLORVALUE *)this + 5) = *(const struct _D3DCOLORVALUE *)&a4->r;
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v15 = a5;
  *((_QWORD *)this + 6) = a5;
  if ( v15 )
  {
    v16 = *(_QWORD *)v15 + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 12LL);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    *(_OWORD *)((char *)this + 164) = *(_OWORD *)v17;
    *(_QWORD *)((char *)this + 180) = *(_QWORD *)(v17 + 16);
    *((_DWORD *)this + 47) = *(_DWORD *)(v17 + 24);
    v18 = 1;
  }
  else
  {
    v18 = 0;
    *(_OWORD *)((char *)this + 164) = 0LL;
    v46 = 0LL;
    *(_QWORD *)((char *)this + 180) = 0LL;
    *((_DWORD *)this + 47) = 0;
  }
  *((_BYTE *)this + 192) = v18;
  *((_DWORD *)this + 83) = 1;
  *((_QWORD *)this + 42) = 1LL;
  *((_QWORD *)this + 43) = 0LL;
  *(_QWORD *)&v45 = 0LL;
  BYTE8(v45) = 1;
  v19 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 3392, &v45);
  v12 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x125u, 0LL);
    return v12;
  }
  for ( i = 0; i < *((_DWORD *)this + 146); ++i )
  {
    v43 = *(_QWORD *)(*((_QWORD *)this + 70) + 16LL * i);
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  *((_DWORD *)this + 146) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 560, 16LL);
  v22 = *((_QWORD *)this + 83);
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    *((_QWORD *)this + 83) = 0LL;
  }
  *((_DWORD *)this + 192) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 744, 8LL);
  v23 = (_DWORD *)*((_QWORD *)this + 1012);
  v24 = qword_1803E2C88;
  *((_DWORD *)this + 2023) = 0;
  *((_QWORD *)this + 428) = 0LL;
  *v23 = 0;
  NullProcessAttribution = CProcessAttributionManager::GetNullProcessAttribution(v24);
  LODWORD(v45) = 11;
  *((_QWORD *)&v45 + 1) = 0LL;
  v26 = NullProcessAttribution;
  v27 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 92, &v45);
  if ( v27 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v27, retaddr);
  v29 = *((_DWORD *)this + 206);
  v48 = v26;
  v30 = v29 + 1;
  if ( v29 + 1 < v29 )
  {
    v36 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_37;
  }
  if ( v30 > *((_DWORD *)this + 205) )
  {
    v34 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 800, 8LL, 1LL, &v48);
    v36 = v34;
    if ( v34 >= 0 )
      return v12;
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xC0u, 0LL);
LABEL_37:
    ModuleFailFastForHRESULT(v36, retaddr);
  }
  *(_QWORD *)(*((_QWORD *)this + 100) + 8LL * v29) = v26;
  *((_DWORD *)this + 206) = v30;
  return v12;
}
