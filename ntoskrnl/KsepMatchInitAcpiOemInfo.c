/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140B351B8
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140B35058 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407FFFD0 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140C70908 = 0LL;
  qword_140C70918 = 0xFFFFFFFFLL;
  xmmword_140C70940 = 0LL;
  HIDWORD(xmmword_140C70908) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C70940) = -1;
  xmmword_140C708E8 = 0LL;
  qword_140C70950 = 0LL;
  xmmword_140C708F8 = 0LL;
  xmmword_140C70920 = 0LL;
  xmmword_140C70930 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140D15DE0, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140D15BB8, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140D15BA8, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C708E8 = word_140D15DE0;
          *((_QWORD *)&xmmword_140C708E8 + 1) = word_140D15BA8;
          HIDWORD(xmmword_140C70908) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C70918) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C70920 = word_140D15DE0;
          *((_QWORD *)&xmmword_140C70920 + 1) = word_140D15BB8;
          HIDWORD(xmmword_140C70940) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
