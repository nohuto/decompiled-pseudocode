int __fastcall FxPkgIo::Dispatch(FxPkgIo *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a3; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  _FX_DRIVER_GLOBALS *v9; // r11

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C009FEF8.m_DriverUsage->FxDriverGlobals
                                    + stru_1C009FEF8.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a3 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqcDq(
      v9,
      *(_QWORD *)(v8 + 144),
      *(_QWORD *)(v7 + 184),
      0xCu,
      WPP_FxPkgIo_cpp_Traceguids,
      _a3,
      *(const void **)(v8 + 144),
      **(_BYTE **)(v7 + 184),
      *(unsigned __int8 *)(*(_QWORD *)(v7 + 184) + 1LL),
      Irp);
  }
  return FxPkgIo::DispatchStep1(this, Irp, this->m_DynamicDispatchInfoListHead.Flink);
}
