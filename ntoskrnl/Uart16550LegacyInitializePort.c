/*
 * XREFs of Uart16550LegacyInitializePort @ 0x14067A850
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550InitializePortCommon @ 0x14067A794 (Uart16550InitializePortCommon.c)
 */

char __fastcall Uart16550LegacyInitializePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)a2 <= 4uLL )
  {
    switch ( (unsigned int)*(_QWORD *)a2 )
    {
      case 1u:
        *(_QWORD *)a2 = 1016LL;
        goto LABEL_10;
      case 2u:
        *(_QWORD *)a2 = 760LL;
        goto LABEL_10;
      case 3u:
        *(_QWORD *)a2 = 1000LL;
        goto LABEL_10;
      case 4u:
        *(_QWORD *)a2 = 744LL;
LABEL_10:
        LOBYTE(a4) = 1;
        *(_WORD *)(a2 + 12) = 0;
        return Uart16550InitializePortCommon(a1, a2, 0LL, a4, 8);
    }
  }
  return 0;
}
