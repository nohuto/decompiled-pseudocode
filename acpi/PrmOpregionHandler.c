__int64 __fastcall PrmOpregionHandler(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  _DWORD *Pool2; // rax

  if ( !AcpiPrmSupportGranted )
    goto LABEL_2;
  if ( !ExAcquireRundownProtection(&RunRef) )
    return 3221225659LL;
  if ( AcpiPrmContext == 2 )
  {
    if ( *(_BYTE *)(a1 + 9) == 5 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, 56LL, 1181770561LL);
      if ( Pool2 )
      {
        *Pool2 = 1;
        Pool2[5] = *a3;
        *((_QWORD *)Pool2 + 3) = a2;
        v6 = PrmOpregionHandlerWorker(Pool2);
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
LABEL_2:
    v6 = -1073741637;
  }
  ExReleaseRundownProtection(&RunRef);
  return v6;
}
