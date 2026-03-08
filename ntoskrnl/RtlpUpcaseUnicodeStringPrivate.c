/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x140365BA0
 * Callers:
 *     RtlAreNamesEqual @ 0x1402B7510 (RtlAreNamesEqual.c)
 *     RtlIsNameInExpression @ 0x140365B20 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140365CA0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 Pool2; // rax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v5 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v5 = &PspHostSiloGlobals;
  v6 = v5[154];
  v7 = *a2;
  *(_WORD *)(a1 + 2) = v7;
  Pool2 = ExAllocatePool2(64LL, v7, 1735554131LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v9 = *a2 >> 1;
  for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
  {
    v11 = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2 * i);
    if ( (unsigned int)v11 >= 0x61 )
    {
      if ( (unsigned int)v11 > 0x7A )
      {
        if ( v6 )
        {
          if ( (unsigned __int16)v11 >= 0xC0u )
            LOWORD(v11) = *(_WORD *)(v6
                                   + 2
                                   * ((v11 & 0xF)
                                    + *(unsigned __int16 *)(v6
                                                          + 2LL
                                                          * (((unsigned __int8)v11 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v6 + 2 * (v11 >> 8))))))
                        + v11;
        }
      }
      else
      {
        LOWORD(v11) = v11 - 32;
      }
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * i) = v11;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
