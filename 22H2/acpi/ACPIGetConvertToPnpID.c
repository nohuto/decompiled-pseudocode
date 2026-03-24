/*
 * XREFs of ACPIGetConvertToPnpID @ 0x1C00280D0
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000C4F0 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIWideStringToAnsiHelper @ 0x1C00281A0 (ACPIWideStringToAnsiHelper.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00281E0 (ACPIGetConvertToPnpIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToPnpID(int a1, int a2, int a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // edi
  unsigned int v7; // ebx
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = ACPIGetConvertToPnpIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)v9);
  if ( v6 >= 0 )
  {
    v7 = v9[0];
    ACPIWideStringToAnsiHelper(*a5, v9[0]);
    if ( a6 )
      *a6 = v7 >> 1;
  }
  return (unsigned int)v6;
}
