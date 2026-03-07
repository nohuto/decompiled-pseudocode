__int64 __fastcall CLegacySwapChain::AddComputeScribbleInvalidRects(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v9; // r8
  const struct FastRegion::Internal::CRgnData **v10; // r14
  const struct FastRegion::Internal::CRgnData *v11; // rdx
  const struct FastRegion::Internal::CRgnData **v12; // rsi
  char v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rsi
  CSwapChainBuffer *v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // r14
  int v22; // eax
  CComputeScribbleRenderer *v23; // rcx
  char v24; // r12
  char v25; // bl
  _DWORD *v26; // rax
  bool v27; // zf
  __int64 v28; // rdx
  bool v29; // al
  unsigned __int8 v30; // r15
  _QWORD *v31; // rax
  CComputeScribbleRenderer *v32; // r8
  int v34; // ebx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // ebx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  RTL_SRWLOCK *v41; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // esi
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  int v49; // [rsp+20h] [rbp-E0h] BYREF
  CSwapChainBuffer *v50; // [rsp+28h] [rbp-D8h]
  __int64 v51; // [rsp+30h] [rbp-D0h]
  __int64 v52; // [rsp+38h] [rbp-C8h]
  __int64 v53; // [rsp+40h] [rbp-C0h]
  __int128 v54; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  __int128 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h]
  char v58; // [rsp+78h] [rbp-88h]
  void *lpMem; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v60[3]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v61[2]; // [rsp+94h] [rbp-6Ch] BYREF
  _DWORD v62[13]; // [rsp+9Ch] [rbp-64h] BYREF
  int *v63; // [rsp+D0h] [rbp-30h] BYREF
  int v64; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v65[32]; // [rsp+100h] [rbp+0h] BYREF
  int *v66; // [rsp+120h] [rbp+20h] BYREF
  int v67; // [rsp+128h] [rbp+28h] BYREF
  int *v68; // [rsp+170h] [rbp+70h] BYREF
  int v69; // [rsp+178h] [rbp+78h] BYREF
  int v70; // [rsp+1C0h] [rbp+C0h] BYREF
  FastRegion::Internal::CRgnData *v71; // [rsp+1C8h] [rbp+C8h]
  _BYTE v72[256]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  v4 = *(_QWORD *)(a1 - 184);
  v52 = a2;
  v6 = 0LL;
  v7 = *(unsigned int *)(a1 - 160);
  v53 = a4;
  v9 = *(_QWORD *)(v4 + 8 * v7);
  v10 = (const struct FastRegion::Internal::CRgnData **)(v9 + 104);
  v11 = *(const struct FastRegion::Internal::CRgnData **)(v9 + 104);
  v12 = (const struct FastRegion::Internal::CRgnData **)(v9 + 16);
  if ( *(_DWORD *)v11 )
  {
    if ( *(_DWORD *)*v12 )
    {
      v35 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v12, v11);
      v70 = 0;
      v71 = (FastRegion::Internal::CRgnData *)v72;
      v34 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v70, v35);
      if ( v34 < 0 )
      {
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v70);
        goto LABEL_27;
      }
      FastRegion::Internal::CRgnData::Union(v71, *v12, *v10);
      v34 = FastRegion::CRegion::SaveResult(v12, (struct FastRegion::Internal::CWorkBuffer *)&v70);
      if ( v72 != (_BYTE *)v71 )
        operator delete(v71);
    }
    else
    {
      v34 = FastRegion::CRegion::Copy((int **)(v9 + 16), (int **)(v9 + 104));
    }
    if ( v34 >= 0 )
      goto LABEL_2;
LABEL_27:
    ModuleFailFastForHRESULT((unsigned int)v34, retaddr);
  }
LABEL_2:
  v13 = 0;
  *(_DWORD *)*v10 = 0;
  v14 = *(unsigned int *)(a1 - 160);
  v15 = *(_QWORD *)(a1 - 184);
  v16 = a3[2];
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8 * v14) + 96LL);
  v18 = *(CSwapChainBuffer **)(v15 + 8LL * ((unsigned int)(*(_DWORD *)(a1 - 116) + v14 - 1) % *(_DWORD *)(a1 - 116)));
  v19 = *a3;
  v20 = a3[3];
  v50 = v18;
  v21 = *((_QWORD *)v18 + 12);
  v22 = a3[1];
  lpMem = v60;
  if ( v19 >= v16 || v22 >= v20 )
  {
    v60[0] = 0;
  }
  else
  {
    v61[0] = v22;
    v60[0] = 2;
    v60[1] = v19;
    v60[2] = v16;
    v61[1] = (unsigned int)v65 - 92 - (unsigned int)v61;
    v62[2] = v19;
    v62[3] = v16;
    v62[1] = (unsigned int)v65 - 92 - (unsigned int)v62 + 8;
    v62[0] = v20;
  }
  v23 = *(CComputeScribbleRenderer **)(a1 - 80);
  if ( v23 )
  {
    v36 = CComputeScribbleRenderer::PreRender(v23);
    v37 = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v36,
        v49);
LABEL_65:
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
      return v37;
    }
  }
  if ( v17 )
  {
    v67 = 0;
    v66 = &v67;
    v38 = FastRegion::CRegion::Copy(&v66, (int **)(v17 + 160));
    if ( v38 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v38, retaddr);
    **(_DWORD **)(v17 + 160) = 0;
    v39 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)&v66,
            (const struct FastRegion::Internal::CRgnData **)&lpMem);
    if ( v39 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v39, retaddr);
    v40 = FastRegion::CRegion::Union(
            (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(*(_QWORD *)(a1 - 184)
                                                                       + 8LL * *(unsigned int *)(a1 - 160))
                                                           + 16LL),
            (const struct FastRegion::Internal::CRgnData **)&v66);
    if ( v40 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v40, retaddr);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v66);
  }
  v24 = 0;
  v25 = 1;
  if ( v21 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v21 + 64));
    v69 = 0;
    v68 = &v69;
    CComputeScribbleFramebuffer::HasScribbleStarted(
      (CComputeScribbleFramebuffer *)v21,
      (bool *)&v49,
      (struct CRegion *)&v68);
    if ( (_BYTE)v49 )
    {
      if ( *v68 )
      {
        CSwapChainBuffer::AddTransientRegion(v50, (const struct CRegion *)&v68);
        if ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 - 184) + 8LL * *(unsigned int *)(a1 - 160)) + 16LL) )
        {
          v41 = *(RTL_SRWLOCK **)(v21 + 48);
          v51 = *(_QWORD *)(v21 + 16);
          v6 = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___(v41);
          v24 = 1;
        }
      }
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v68);
    if ( v21 != -64 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v21 + 64));
  }
  *(_QWORD *)&v54 = v21;
  *((_QWORD *)&v54 + 1) = v6;
  LOBYTE(v55) = v24;
  v26 = (_DWORD *)*((_QWORD *)v50 + 13);
  v56 = v54;
  v58 = 1;
  v27 = *v26 == 0;
  v57 = v55;
  if ( !v27 )
  {
    v64 = 0;
    v63 = &v64;
    v42 = FastRegion::CRegion::Copy(&v63, (int **)v50 + 13);
    if ( v42 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v42, retaddr);
    v43 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)&v63,
            (const struct FastRegion::Internal::CRgnData **)&lpMem);
    if ( v43 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v43, retaddr);
    v44 = ContributeRegionToDirty(&v63, v53, v52);
    v45 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v44,
        v49);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v63);
      wil::details::lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___::_lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___(&v56);
      v37 = v45;
      goto LABEL_65;
    }
    v46 = FastRegion::CRegion::Subtract(
            (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(*(_QWORD *)(a1 - 184)
                                                                       + 8LL * *(unsigned int *)(a1 - 160))
                                                           + 16LL),
            (const struct FastRegion::Internal::CRgnData **)&v63);
    if ( v46 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v46, retaddr);
    v13 = 1;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v63);
  }
  v28 = *(_QWORD *)(a1 - 80);
  v29 = v28 && *(_BYTE *)(v28 + 48);
  v30 = v29 | v13;
  v31 = (_QWORD *)*((_QWORD *)g_pComposition + 32);
  if ( !v31[1] )
  {
    v23 = (CComputeScribbleRenderer *)v31[5];
    v32 = (CComputeScribbleRenderer *)v31[6];
    if ( v23 == v32 )
    {
LABEL_13:
      v25 = 0;
    }
    else
    {
      while ( *(_QWORD *)(*v31 + 496LL) - *((_QWORD *)v23 + 11) >= 0xAuLL )
      {
        v23 = (CComputeScribbleRenderer *)((char *)v23 + 104);
        if ( v23 == v32 )
          goto LABEL_13;
      }
    }
  }
  if ( v30 | (unsigned __int8)v25 )
  {
    if ( v28 )
      v47 = *(_QWORD *)(v28 + 24);
    else
      v47 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xq_EventWriteTransfer(v23, &EVTDESC_COMPUTESCRIBBLE_EARLYCOPY, v47, *(unsigned int *)(a1 - 160));
    v48 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 432) + 24LL))(a1 - 432, v28, v47);
    v37 = v48;
    if ( v48 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v48,
        v49);
      wil::details::lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___::_lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___(&v56);
      goto LABEL_65;
    }
  }
  if ( v24 )
    CComputeScribbleSynchronizer::EndRenderOperation(
      *(CComputeScribbleSynchronizer **)(v21 + 48),
      *(struct CD3DDevice **)(v21 + 16),
      v6);
  if ( v60 != lpMem )
    operator delete(lpMem);
  return 0LL;
}
