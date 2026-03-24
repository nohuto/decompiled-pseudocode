/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1801C4E24
 * Callers:
 *     ?GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C5028 (-GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801C5160 (-GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801B21B4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 *     ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1801C4BFC (-CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802388F8 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDevice *a2,
        struct CD2DInk **a3)
{
  __int64 **v3; // rsi
  __int64 *v5; // rdx
  __int64 v7; // rax
  unsigned int v9; // edi
  int v10; // r15d
  __int64 v11; // rcx
  struct CD2DInk *v12; // rax
  CDeviceManager *v13; // rcx
  int DefaultDevice; // eax
  __int64 v15; // rcx
  CD3DDevice *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  CD3DDevice *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct CD2DInk *v22; // rbx
  char *v23; // rcx
  __int64 *v24; // rdx
  struct CD2DInk *v26; // [rsp+70h] [rbp+40h] BYREF
  CD3DDevice *v27; // [rsp+80h] [rbp+50h] BYREF

  v3 = (__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24) - (_QWORD)v5;
  *a3 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( !(v7 >> 3) )
    goto LABEL_8;
  while ( a2 )
  {
    v11 = v5[v10] + 16 + *(int *)(*(_QWORD *)(v5[v10] + 16) + 8LL);
    if ( a2 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
      break;
    v5 = *v3;
    if ( (unsigned int)++v10 >= (unsigned __int64)(v3[1] - *v3) )
    {
      v12 = *a3;
      goto LABEL_7;
    }
  }
  v12 = (struct CD2DInk *)(*v3)[v10];
  *a3 = v12;
LABEL_7:
  if ( !v12 )
  {
LABEL_8:
    v26 = 0LL;
    if ( a2 )
    {
      v20 = CInk::CreateResource(*(CInk **)(a1 + 8), a2, &v26);
      v9 = v20;
      if ( v20 >= 0 )
      {
LABEL_19:
        v22 = v26;
        v23 = (char *)v26 + *(int *)(*((_QWORD *)v26 + 2) + 8LL) + 16;
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v23 + 40LL))(v23, a1);
        v24 = v3[1];
        if ( v3[2] == v24 )
        {
          std::vector<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> const &>(
            v3,
            v24,
            (__int64 *)&v26);
          v22 = v26;
        }
        else
        {
          *v24 = (__int64)v22;
          (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v22 + 8LL))(v22);
          ++v3[1];
        }
        *a3 = v22;
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x52u, 0LL);
    }
    else
    {
      v27 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v27);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v13, &v27);
      v9 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
        v19 = v27;
        if ( !v27 )
          goto LABEL_24;
        goto LABEL_15;
      }
      v16 = v27;
      v17 = CInk::CreateResource(*(CInk **)(a1 + 8), v27, &v26);
      v9 = v17;
      if ( v17 >= 0 )
      {
        if ( v16 )
          CD3DDevice::Release(v16);
        goto LABEL_19;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x4Eu, 0LL);
      if ( v16 )
      {
        v19 = v16;
LABEL_15:
        CD3DDevice::Release(v19);
      }
    }
LABEL_24:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  }
  return v9;
}
