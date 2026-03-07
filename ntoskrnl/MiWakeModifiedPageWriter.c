LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 732) )
      KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
    if ( *(_DWORD *)(a1 + 760) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 984), 18);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 768) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
}
