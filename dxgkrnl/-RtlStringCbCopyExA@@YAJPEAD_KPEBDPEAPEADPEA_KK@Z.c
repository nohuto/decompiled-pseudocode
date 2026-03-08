/*
 * XREFs of ?RtlStringCbCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z @ 0x1C004C158
 * Callers:
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C0302814 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C004C23C (RtlStringCopyWorkerA.c)
 */

__int64 __fastcall RtlStringCbCopyExA(char *a1, size_t a2, const char *a3, char **a4, unsigned __int64 *a5)
{
  unsigned int v9; // edx
  const char *v10; // rax
  char *v11; // r9
  unsigned __int64 v12; // r8
  NTSTATUS v13; // eax
  size_t v15; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
  {
    v9 = -1073741811;
    if ( a2 )
      *a1 = 0;
    return v9;
  }
  v10 = File;
  v11 = a1;
  v12 = a2;
  if ( a3 )
    v10 = a3;
  v9 = 0;
  if ( a2 )
  {
    pcchNewDestLength = 0LL;
    v13 = RtlStringCopyWorkerA(a1, a2, &pcchNewDestLength, v10, v15);
    v12 = a2 - pcchNewDestLength;
    v9 = v13;
    v11 = &a1[pcchNewDestLength];
    if ( v13 < 0 )
    {
      v11 = a1;
      *a1 = 0;
      v12 = a2;
LABEL_13:
      if ( v9 != -2147483643 )
        return v9;
    }
  }
  else if ( *v10 )
  {
    v9 = a1 != 0LL ? -2147483643 : -1073741811;
    goto LABEL_13;
  }
  if ( a4 )
    *a4 = v11;
  if ( a5 )
    *a5 = v12;
  return v9;
}
