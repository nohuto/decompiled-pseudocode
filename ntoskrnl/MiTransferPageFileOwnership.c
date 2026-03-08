/*
 * XREFs of MiTransferPageFileOwnership @ 0x14029D878
 * Callers:
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiUpdatePageFileBlockOwner @ 0x1406646BC (MiUpdatePageFileBlockOwner.c)
 */

char __fastcall MiTransferPageFileOwnership(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  char result; // al
  __int64 v5; // rax

  v2 = *(unsigned __int8 *)(a1 + 34);
  if ( (v2 & 0x10) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    result = (unsigned __int8)v3 >> 2;
    if ( (v3 & 4) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( qword_140C657C0 )
      {
        if ( (v3 & 0x10) == 0 )
          v5 = ~qword_140C657C0 & v3;
      }
      return MiUpdatePageFileBlockOwner(
               *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                         + 8LL * ((unsigned __int16)v3 >> 12)
                         + 17056),
               HIDWORD(v5),
               *(_QWORD *)(a1 + 8),
               a2,
               (v2 >> 3) & 1);
    }
  }
  return result;
}
