/*
 * XREFs of RtlInitNlsTables @ 0x1407CC814
 * Callers:
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1407CC880 (RtlInitCodePageTable.c)
 */

void __fastcall RtlInitNlsTables(USHORT *a1, USHORT *a2, __int64 a3)
{
  unsigned __int16 v5; // cx

  RtlInitCodePageTable(a1, &CodePageTable);
  RtlInitCodePageTable(a2, &InitTableInfo);
  if ( a3 )
  {
    v5 = *(_WORD *)(a3 + 2) + 1;
    *(_QWORD *)&xmmword_140D58930 = a3 + 4;
    *((_QWORD *)&xmmword_140D58930 + 1) = a3 + 2 * (v5 + 1LL);
  }
  else
  {
    xmmword_140D58930 = 0LL;
  }
}
