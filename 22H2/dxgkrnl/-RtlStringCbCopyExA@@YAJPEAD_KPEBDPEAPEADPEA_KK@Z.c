/*
 * XREFs of ?RtlStringCbCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z @ 0x1C004EA3C
 * Callers:
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C02C3E40 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C004EB3C (RtlStringCopyWorkerA.c)
 */

__int64 __fastcall RtlStringCbCopyExA(
        NTSTRSAFE_PSTR pszDest,
        size_t a2,
        const char *a3,
        char **a4,
        unsigned __int64 *a5)
{
  int v6; // r10d
  size_t v9; // rbx
  const char *v10; // r9
  char *v11; // r8
  NTSTATUS v12; // eax
  size_t v14; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v9 = a2;
  if ( !pszDest && a2 || a2 > 0x7FFFFFFF )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    if ( a2 )
      *pszDest = 0;
    return (unsigned int)v6;
  }
  v10 = File;
  v11 = pszDest;
  if ( a3 )
    v10 = a3;
  v6 = 0;
  if ( a2 )
  {
    pcchNewDestLength = 0LL;
    v12 = RtlStringCopyWorkerA(pszDest, a2, &pcchNewDestLength, v10, v14);
    a2 = v9 - pcchNewDestLength;
    v6 = v12;
    v11 = &pszDest[pcchNewDestLength];
    if ( v12 < 0 )
      goto LABEL_13;
  }
  else
  {
    if ( !*v10 )
    {
LABEL_17:
      if ( a4 )
        *a4 = v11;
      if ( a5 )
        *a5 = a2;
      return (unsigned int)v6;
    }
    v6 = pszDest != 0LL ? -2147483643 : -1073741811;
  }
  if ( v6 >= 0 )
    goto LABEL_17;
LABEL_13:
  if ( v9 )
  {
    v11 = pszDest;
    *pszDest = 0;
    a2 = v9;
  }
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
    goto LABEL_17;
  return (unsigned int)v6;
}
