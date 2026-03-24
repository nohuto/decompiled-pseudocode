/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140A6A61C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A6A0D0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402E77D0 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407BF240 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140C53FD8 = 0LL;
  qword_140C53FE8 = 0xFFFFFFFFLL;
  xmmword_140C54218 = 0LL;
  HIDWORD(xmmword_140C53FD8) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C54218) = -1;
  xmmword_140C53FB8 = 0LL;
  qword_140C54228 = 0LL;
  xmmword_140C53FC8 = 0LL;
  xmmword_140C541F8 = 0LL;
  xmmword_140C54208 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140CF29E0, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140CF27B8, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140CF27A8, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C53FB8 = word_140CF29E0;
          *((_QWORD *)&xmmword_140C53FB8 + 1) = word_140CF27A8;
          HIDWORD(xmmword_140C53FD8) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C53FE8) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C541F8 = word_140CF29E0;
          *((_QWORD *)&xmmword_140C541F8 + 1) = word_140CF27B8;
          HIDWORD(xmmword_140C54218) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
