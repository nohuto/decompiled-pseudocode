void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  v3 = *(_QWORD *)(SGDGetSessionState(ulFastCheckSum) + 32);
  if ( (*(_DWORD *)(v3 + 19384) & 3) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 19392);
    if ( v4 )
    {
      if ( iFaultMode - 1 <= 1 && (*(_DWORD *)(v4 + 16) & 1) == 0 )
      {
        *(_DWORD *)(v4 + 16) |= 1u;
        bSetFntCacheReg(1u, *(_DWORD *)(*(_QWORD *)(v3 + 19392) + 16LL));
      }
    }
  }
}
