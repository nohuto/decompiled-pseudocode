__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1, a2, a3, a4) + 24);
}
