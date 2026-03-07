__int64 __fastcall KiUpdateSoftParkElectionStatisticsOnRemoval(__int64 a1, __int64 a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  bool v10; // si
  char v11; // r9
  int v12; // ecx
  __int64 v13; // rcx

  MmGetMinWsPagePriority();
  v6 = (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting(0LL) == 0;
  result = *(_QWORD *)(a1 + 696);
  v10 = !v6;
  v11 = 0;
  if ( *(_QWORD *)(a2 + 2296) == result )
  {
    if ( !v6 && !a3 )
    {
      KiAcquireSoftParkElectionLock(a1, v7, v8);
      result = *(_QWORD *)(a1 + 696);
      v11 = 1;
      if ( *(_QWORD *)(a2 + 2296) != result )
        goto LABEL_9;
    }
    v12 = *(_DWORD *)(a1 + 704) - 1;
    *(_DWORD *)(a1 + 704) = v12;
    *(_QWORD *)(a1 + 712) -= *(unsigned int *)(a2 + 2292);
    if ( v10 && !v12 )
      *(_QWORD *)(a1 + 1680) = 0LL;
    v13 = *(unsigned __int8 *)(a2 + 1649)
        + 8 * (*(unsigned __int8 *)(a2 + 1650) + 2LL * *(unsigned __int8 *)(a2 + 1648));
    result = *(unsigned int *)(a2 + 2292);
    *(_QWORD *)(a1 + 8 * v13 + 784) -= result;
    if ( v11 )
LABEL_9:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 688), 0LL);
  }
  return result;
}
