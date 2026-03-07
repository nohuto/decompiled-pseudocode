__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && *(_QWORD *)(v4 + 48) )
    return CmOpenDeviceRegKey(PiPnpRtlCtx, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
