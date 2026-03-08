/*
 * XREFs of HalMatchAcpiOemId @ 0x140395040
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     RtlEqualString @ 0x1402D0DA0 (RtlEqualString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall HalMatchAcpiOemId(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // edi
  __int64 Table; // rax
  STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  STRING String1; // [rsp+30h] [rbp-20h] BYREF
  char SourceString[4]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v11; // [rsp+44h] [rbp-Ch]
  char v12; // [rsp+46h] [rbp-Ah]

  v5 = 1;
  DestinationString = 0LL;
  String1 = 0LL;
  if ( a4 == 2 )
  {
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
      {
        Table = HalpAcpiGetTable(0LL, **(_DWORD **)a3, 0, 0);
        if ( Table )
        {
          *(_DWORD *)SourceString = 0;
          v11 = 0;
          v12 = 0;
          *(_DWORD *)SourceString = *(_DWORD *)(Table + 10);
          v11 = *(_WORD *)(Table + 14);
          RtlInitAnsiString(&DestinationString, SourceString);
          RtlInitAnsiString(&String1, *(PCSZ *)(a3 + 8));
          return RtlEqualString(&String1, &DestinationString, 1u) != 0 ? 2 : 0;
        }
      }
    }
  }
  return v5;
}
