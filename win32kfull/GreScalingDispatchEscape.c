__int64 __fastcall GreScalingDispatchEscape(unsigned __int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 32 > MmUserProbeAddress || a1 + 32 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v3 = *(_OWORD *)a1;
  v4 = *(_OWORD *)(a1 + 16);
  if ( (_DWORD)v3 )
    return 3221225659LL;
  GreEscCreateScaledCompatibleBitmap((__int64)&v3);
  if ( !(_DWORD)v3 )
  {
    ProbeForWrite((volatile void *)(a1 + 8), 8uLL, 4u);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v3 + 1);
  }
  return 0LL;
}
