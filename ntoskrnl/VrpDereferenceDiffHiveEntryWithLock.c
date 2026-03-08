/*
 * XREFs of VrpDereferenceDiffHiveEntryWithLock @ 0x140738258
 * Callers:
 *     VrpDereferenceDiffHiveEntry @ 0x140738160 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDereferenceDiffHiveEntryWithLock(volatile signed __int64 *P)
{
  __int64 v1; // rax
  volatile signed __int64 *i; // rdx
  __int64 v3; // [rsp+30h] [rbp+8h]

  v1 = _InterlockedDecrement64(P + 2);
  if ( v1 <= 0 )
  {
    if ( v1 )
      __fastfail(0xEu);
    v3 = P[1] & (-1LL << (dword_140C0E224 & 0x1F));
    for ( i = (volatile signed __int64 *)(qword_140C0E228
                                        + 8LL
                                        * ((37
                                          * (BYTE6(v3)
                                           + 37
                                           * (BYTE5(v3)
                                            + 37
                                            * (BYTE4(v3)
                                             + 37
                                             * (BYTE3(v3)
                                              + 37
                                              * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883)))))))
                                          + HIBYTE(v3)) & (((unsigned int)dword_140C0E224 >> 5) - 1)));
          (*i & 1) == 0;
          i = (volatile signed __int64 *)*i )
    {
      if ( *(volatile signed __int64 **)i == P )
      {
        *i = *P;
        --gLoadedDiffHives;
        *P |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag((PVOID)P, 0x67655256u);
  }
}
