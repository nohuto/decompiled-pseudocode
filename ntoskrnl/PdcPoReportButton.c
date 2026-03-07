__int64 __fastcall PdcPoReportButton(int a1, char a2)
{
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v3 = a1;
  PopAcquirePolicyLock(a1);
  if ( (v3 & 1) != 0 )
  {
    if ( a2 )
    {
      if ( (_BYTE)PopCapabilities == 1 )
        goto LABEL_6;
      LOBYTE(PopCapabilities) = 1;
      goto LABEL_5;
    }
    if ( (_BYTE)PopCapabilities )
    {
      LOBYTE(PopCapabilities) = 0;
LABEL_5:
      PopResetCurrentPolicies();
    }
  }
LABEL_6:
  if ( (v3 & 2) == 0 )
    goto LABEL_7;
  if ( a2 )
  {
    if ( BYTE1(PopCapabilities) == 1 )
      goto LABEL_7;
    BYTE1(PopCapabilities) = 1;
    goto LABEL_12;
  }
  if ( BYTE1(PopCapabilities) )
  {
    BYTE1(PopCapabilities) = 0;
LABEL_12:
    PopResetCurrentPolicies();
  }
LABEL_7:
  if ( (v3 & 4) != 0 )
  {
    if ( a2 )
    {
      if ( BYTE2(PopCapabilities) == 1 )
        return PopReleasePolicyLock(v5, v4, v6);
      BYTE2(PopCapabilities) = 1;
    }
    else
    {
      if ( !BYTE2(PopCapabilities) )
        return PopReleasePolicyLock(v5, v4, v6);
      BYTE2(PopCapabilities) = 0;
    }
    PopResetCurrentPolicies();
  }
  return PopReleasePolicyLock(v5, v4, v6);
}
