/*
 * XREFs of HalpGetResourceSortValue @ 0x140B360F0
 * Callers:
 *     HalpReportResourceUsage @ 0x140B35B2C (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpGetResourceSortValue(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax

  switch ( *(_BYTE *)a1 )
  {
    case 1:
      *a2 = 1;
LABEL_6:
      v3 = *(_QWORD *)(a1 + 4);
      goto LABEL_4;
    case 2:
      *a2 = 0;
      v3 = *(unsigned __int16 *)(a1 + 4);
LABEL_4:
      *a3 = v3;
      return;
    case 3:
    case 7:
      *a2 = 2;
      goto LABEL_6;
  }
  *a3 = 0LL;
  *a2 = 4;
}
