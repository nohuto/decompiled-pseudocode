char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2)
{
  int v3; // edx
  unsigned __int64 v4; // rcx
  __int64 v6; // rcx

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 48);
  if ( (unsigned int)(v3 - 4) > 1 )
  {
    if ( v3 != 2 )
      return 0;
    v4 = *(_BYTE *)(a1 + 27) ? *(_QWORD *)(*(_QWORD *)(a1 + 208) + 40LL) : *(_QWORD *)(a1 + 64);
    if ( v4 >= a2 )
      return 0;
  }
  return 1;
}
