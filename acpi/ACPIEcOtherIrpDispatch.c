__int64 __fastcall ACPIEcOtherIrpDispatch(ULONG_PTR a1, __int64 a2)
{
  if ( **(_BYTE **)(a2 + 184) == 3 || **(_BYTE **)(a2 + 184) == 4 )
    return ACPIEcReadWrite();
  if ( **(_BYTE **)(a2 + 184) == 15 )
    return ACPIEcInternalControl(a1, (IRP *)a2);
  return ACPIDispatchForwardIrp(a1, (PIRP)a2);
}
