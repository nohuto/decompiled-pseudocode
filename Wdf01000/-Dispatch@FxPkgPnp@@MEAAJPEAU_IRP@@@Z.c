__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp)
{
  _IRP *v3; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int MinorFunction; // r11d
  const void *_a5; // rax
  __int64 v7; // rdx
  const void *id; // r8
  __int64 v9; // r9
  char level; // r11
  FxPkgPnp_vtbl *v11; // rcx
  __int64 v12; // rax
  bool v14; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v16; // rax
  __int64 v17; // r10
  const void *v18; // r8
  char v19; // r11
  const void *v20; // rax
  __int64 v21; // rdx
  const void *v22; // r8
  char v23; // r11
  const void *v24; // rax
  __int64 v25; // rdx
  const void *v26; // r8
  _FX_DRIVER_GLOBALS *v27; // r10
  char v28; // r11
  const void *v29; // rax
  __int64 v30; // r9
  __int64 v31; // r10
  const void *v32; // r8
  char v33; // r11
  const void *ObjectHandleUnchecked; // rax
  __int64 v35; // r10
  unsigned __int8 v36; // dl
  const void *flags; // r8
  __int64 v38; // r9
  char v39; // r11
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  _IRP *v41; // [rsp+70h] [rbp+10h] BYREF

  v41 = Irp;
  FX_TRACK_DRIVER(this->m_Globals);
  v3 = v41;
  CurrentStackLocation = v41->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( !(_BYTE)MinorFunction || (_BYTE)MinorFunction == 2 )
    {
      if ( CurrentStackLocation->Parameters.Create.Options )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqcqL(
          this->m_Globals,
          v36,
          (unsigned int)flags,
          v38,
          traceGuid,
          ObjectHandleUnchecked,
          *(const void **)(v35 + 144),
          v39,
          flags,
          *(_DWORD *)(v38 + 24));
      }
      else
      {
        v29 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqcqLd(
          this->m_Globals,
          *(_DWORD *)(v30 + 24),
          (unsigned int)v32,
          v30,
          traceGuid,
          v29,
          *(const void **)(v31 + 144),
          v33,
          v32,
          *(_DWORD *)(v30 + 24),
          *(_DWORD *)(v30 + 24) - 1);
      }
    }
    else
    {
      if ( !this->m_Globals->FxVerboseOn )
        goto LABEL_34;
      v24 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqcq(
        v27,
        5u,
        0xCu,
        0x15u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        v24,
        *(const void **)(v25 + 144),
        v28,
        v26);
    }
    v3 = v41;
LABEL_34:
    v11 = this->__vftable;
    if ( v3->Tail.Overlay.CurrentStackLocation->MinorFunction <= 3u )
    {
      v12 = (__int64)v11->GetDispatchPower(this);
      return (*(__int64 (__fastcall **)(FxPkgPnp *, _IRP **))(v12
                                                            + 8LL
                                                            * v41->Tail.Overlay.CurrentStackLocation->MinorFunction))(
               this,
               &v41);
    }
    return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v11->FireAndForgetIrp)(this, &v41);
  }
  if ( MinorFunction <= 5 )
  {
    if ( MinorFunction == 5 || !(_BYTE)MinorFunction || MinorFunction == 1 || MinorFunction == 2 || MinorFunction == 3 )
      goto LABEL_24;
    v14 = MinorFunction == 4;
  }
  else
  {
    switch ( MinorFunction )
    {
      case 6u:
        goto LABEL_24;
      case 7u:
        _a5 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqcLq(
          this->m_Globals,
          v7,
          (unsigned int)id,
          v9,
          traceGuid,
          _a5,
          *(const void **)(v7 + 144),
          level,
          *(_DWORD *)(v9 + 8),
          id);
LABEL_6:
        v3 = v41;
        goto LABEL_7;
      case 0x11u:
      case 0x14u:
LABEL_24:
        v20 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqcq(
          this->m_Globals,
          4u,
          0xCu,
          0x10u,
          (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
          v20,
          *(const void **)(v21 + 144),
          v23,
          v22);
        goto LABEL_6;
    }
    v14 = MinorFunction == 23;
  }
  if ( v14 )
    goto LABEL_24;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v16 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xCu,
      0x12u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      v16,
      *(const void **)(v17 + 144),
      v19,
      v18);
    goto LABEL_6;
  }
LABEL_7:
  v11 = this->__vftable;
  if ( v3->Tail.Overlay.CurrentStackLocation->MinorFunction > 0x17u )
    return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v11->FireAndForgetIrp)(this, &v41);
  v12 = (__int64)v11->GetDispatchPnp(this);
  return (*(__int64 (__fastcall **)(FxPkgPnp *, _IRP **))(v12
                                                        + 8LL * v41->Tail.Overlay.CurrentStackLocation->MinorFunction))(
           this,
           &v41);
}
