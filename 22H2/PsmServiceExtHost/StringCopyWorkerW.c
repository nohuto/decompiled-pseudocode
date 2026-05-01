/*
 * XREFs of StringCopyWorkerW @ 0x1800113D0
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000E2EC (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 *     CempHostInfoInitialize @ 0x18000ECBC (CempHostInfoInitialize.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18000F004 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18000F9B0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180015250 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r8
  HRESULT v6; // r10d
  __int64 v7; // rax
  signed __int64 v8; // r9
  wchar_t v9; // dx

  v5 = cchDest;
  v6 = 0;
  if ( !cchDest )
    goto LABEL_6;
  v7 = 2147483646LL;
  v8 = (char *)pszSrc - (char *)pszDest;
  while ( v7 )
  {
    v9 = *(STRSAFE_LPWSTR)((char *)pszDest + v8);
    if ( !v9 )
      break;
    *pszDest = v9;
    --v7;
    ++pszDest;
    if ( !--v5 )
      goto LABEL_6;
  }
  if ( !v5 )
  {
LABEL_6:
    --pszDest;
    v6 = -2147024774;
  }
  *pszDest = 0;
  return v6;
}
