__int64 __fastcall NtGdiDDCCIGetCapabilitiesString(void *a1, char *a2, unsigned int a3)
{
  __int64 v7; // rax

  if ( !a3 )
    return 3221225485LL;
  v7 = SGDGetSessionState(a1);
  return CMonitorAPI::DdcciGetCapabilitiesString(*(CMonitorAPI **)(*(_QWORD *)(v7 + 32) + 8728LL), a1, a2, a3);
}
