/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18000E070
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18000DF38 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801B21B4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 *     ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1801B2474 (-CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802388F8 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDevice *a2,
        struct CD2DEffect **a3)
{
  __int64 *v3; // rsi
  __int64 v5; // rdx
  __int64 v7; // rax
  unsigned int v9; // edi
  unsigned int v10; // r15d
  __int64 v11; // rcx
  struct CD2DEffect *v12; // rax
  CDeviceManager *v14; // rcx
  int DefaultDevice; // eax
  unsigned int v16; // ecx
  CD3DDevice *v17; // rbx
  int v18; // eax
  unsigned int v19; // ecx
  struct CD2DEffect *v20; // rbx
  char *v21; // rcx
  struct CD2DEffect **v22; // rdx
  CD3DDevice *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  struct CD2DEffect *v26; // [rsp+70h] [rbp+40h] BYREF
  CD3DDevice *v27; // [rsp+80h] [rbp+50h] BYREF

  v3 = (__int64 *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24) - v5;
  *a3 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( !(v7 >> 3) )
    goto LABEL_9;
  do
  {
    if ( !a2
      || (v11 = *(_QWORD *)(v5 + 8LL * v10) + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v5 + 8LL * v10) + 16LL) + 8LL),
          a2 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11)) )
    {
      v12 = *(struct CD2DEffect **)(*v3 + 8LL * v10);
      *a3 = v12;
      goto LABEL_5;
    }
    v5 = *v3;
    ++v10;
  }
  while ( v10 < (unsigned __int64)((v3[1] - *v3) >> 3) );
  v12 = *a3;
LABEL_5:
  if ( !v12 )
  {
LABEL_9:
    v26 = 0LL;
    if ( a2 )
    {
      v24 = CFilterEffect::CreateResource(*(CFilterEffect **)(a1 + 8), a2, &v26);
      v9 = v24;
      if ( v24 >= 0 )
      {
LABEL_14:
        v20 = v26;
        v21 = (char *)v26 + *(int *)(*((_QWORD *)v26 + 2) + 8LL) + 16;
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v21 + 40LL))(v21, a1);
        v22 = (struct CD2DEffect **)v3[1];
        if ( (struct CD2DEffect **)v3[2] == v22 )
        {
          std::vector<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> const &>(
            v3,
            v22,
            &v26);
          v20 = v26;
        }
        else
        {
          *v22 = v20;
          (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v20 + 8LL))(v20);
          v3[1] += 8LL;
        }
        *a3 = v20;
        goto LABEL_25;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x52u, 0LL);
    }
    else
    {
      v27 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v27);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v14, &v27);
      v9 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
        v23 = v27;
        if ( !v27 )
          goto LABEL_25;
        goto LABEL_18;
      }
      v17 = v27;
      v18 = CFilterEffect::CreateResource(*(CFilterEffect **)(a1 + 8), v27, &v26);
      v9 = v18;
      if ( v18 >= 0 )
      {
        if ( v17 )
          CD3DDevice::Release(v17);
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x4Eu, 0LL);
      if ( v17 )
      {
        v23 = v17;
LABEL_18:
        CD3DDevice::Release(v23);
      }
    }
LABEL_25:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  }
  return v9;
}
