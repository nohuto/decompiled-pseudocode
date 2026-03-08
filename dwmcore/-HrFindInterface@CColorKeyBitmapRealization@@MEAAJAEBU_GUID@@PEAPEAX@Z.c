/*
 * XREFs of ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ACF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::HrFindInterface(
        CColorKeyBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  void *v3; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v18; // [rsp+50h] [rbp+30h] BYREF
  __int64 v19; // [rsp+58h] [rbp+38h] BYREF

  v3 = 0LL;
  v6 = -2147024809;
  if ( !a3 )
    return v6;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
  if ( v7 )
  {
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data4;
    if ( v9 )
    {
      v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
        v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
      if ( v15 )
        return (unsigned int)-2147467262;
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
        &v19,
        *(_QWORD *)(*((_QWORD *)this + 13) + 32LL));
      v18 = 0LL;
      if ( v19
        && (v16 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v19 + 8) + 4LL) + v19 + 8),
            (**v16)(v16, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v18) >= 0) )
      {
        v6 = 0;
        v3 = (void *)(((unsigned __int64)this + 96) & -(__int64)(this != 0LL));
      }
      else
      {
        v6 = -2147467262;
      }
      *a3 = v3;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      goto LABEL_27;
    }
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
      &v19,
      *(_QWORD *)(*((_QWORD *)this + 13) + 32LL));
    v10 = v19;
    v11 = 0LL;
    v18 = 0LL;
    if ( v19 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v18);
      v12 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v10 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL) + 8LL);
      if ( (**v12)(v12, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v18) >= 0 )
      {
        v6 = 0;
        v13 = (void *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
        v11 = v18;
        goto LABEL_17;
      }
      v11 = v18;
    }
    v6 = -2147467262;
    v13 = 0LL;
LABEL_17:
    *a3 = v13;
    if ( v11 )
    {
      v14 = *(int *)(*(_QWORD *)(v11 + 8) + 4LL) + v11 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
LABEL_27:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
    return v6;
  }
  if ( this )
    v8 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
  else
    v8 = 0LL;
  *a3 = v8;
  return 0;
}
