__int64 __fastcall VidSchSetAbsolutePriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  if ( a1 )
  {
    if ( a2 > 0x1E )
    {
      WdLogSingleEntry2(1LL, a2, -1073741811LL);
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
    }
    v9 = *((_QWORD *)a1 + 13);
    if ( *(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v9, -1071775232LL);
      return 3223192064LL;
    }
    else if ( a2 < 0x1E
           || a3
           || (result = VidSchiCheckProcessGPUPriorityPrivilege(*(struct _VIDSCH_PROCESS **)(*((_QWORD *)a1 + 13) + 40LL)),
               (int)result >= 0) )
    {
      VidSchiSetPriorityContext(a1, a2);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}
