/*
 * XREFs of ?RtlStringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1C004A5F4
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0049EEC (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C004A47C (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00128B0 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchCopyNExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        size_t cchToCopy,
        unsigned __int16 **a5)
{
  NTSTATUS result; // eax
  unsigned __int16 *v7; // rdx
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = a2;
  if ( cchToCopy >= 0x7FFFFFFF )
  {
    result = -1073741811;
    goto LABEL_4;
  }
  pcchNewDestLength = 0LL;
  result = RtlStringCopyWorkerW(a1, 0x104uLL, &pcchNewDestLength, a3, cchToCopy);
  v7 = &a1[pcchNewDestLength];
  if ( result < 0 )
  {
LABEL_4:
    *a1 = 0;
    v7 = a1;
    if ( result != -2147483643 )
      return result;
  }
  if ( a5 )
    *a5 = v7;
  return result;
}
