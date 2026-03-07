__int64 __fastcall W32pQuerySubsystemProcess(struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *a1)
{
  unsigned __int64 v1; // rbx

  v1 = (unsigned __int64)gpepCSRSS;
  if ( gpepCSRSS )
    v1 &= -(__int64)((unsigned __int8)ObReferenceObjectSafe(gpepCSRSS) != 0);
  *(_QWORD *)a1 = v1;
  return 0LL;
}
