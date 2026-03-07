__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  return *(unsigned int *)(qword_140C65720
                         + 4
                         * (a2
                          + 28LL
                          + 94LL
                          * *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4))
                                            + 8)
                          + 4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6)));
}
