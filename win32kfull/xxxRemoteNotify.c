// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteNotify(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx

  v3 = a1;
  if ( PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS )
  {
    if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    switch ( *v3 )
    {
      case 6:
        return 0LL;
      case 0xB:
        gdwHydraHint |= 0x4000000u;
        break;
      case 0xC:
        gdwHydraHint |= 0x8000000u;
        break;
      default:
        return 0LL;
    }
    SetConnectCompletedState(1LL);
    return 0LL;
  }
  return 3221225506LL;
}
