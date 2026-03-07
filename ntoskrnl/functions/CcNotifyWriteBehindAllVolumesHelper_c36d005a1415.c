char __fastcall CcNotifyWriteBehindAllVolumesHelper(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( !CcInitializationComplete || !*(_BYTE *)(a1 + 1364) || !*(_BYTE *)(a2 + 1236) )
    return 0;
  CcNotifyWriteBehindVolume(a2, *a3);
  return 1;
}
