/*
 * XREFs of MiReturnReservedEnclavePages @ 0x140AAD770
 * Callers:
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiInitializeEnclave @ 0x140A3DF08 (MiInitializeEnclave.c)
 *     MiDeleteEnclavePages @ 0x140AAD528 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiGetPfnLink @ 0x140374DEC (MiGetPfnLink.c)
 *     MiReturnEnclavePage @ 0x140648A7C (MiReturnEnclavePage.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a2 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 96);
      if ( !v3 )
        break;
      *(_QWORD *)(a1 + 96) = MiGetPfnLink(v3);
      MiReturnEnclavePage(0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4));
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
}
