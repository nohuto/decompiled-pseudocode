/*
 * XREFs of MiInitializeWalkBounds @ 0x1402090D0
 * Callers:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiGenerateRandomPte @ 0x140318308 (MiGenerateRandomPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 result; // rax

  if ( (*(_WORD *)a1 & 0x800) != 0 )
  {
    *a2 = 0LL;
    a2[1] = 0xFFFFF67FFFFFFFFFuLL;
    a2[2] = 0xFFFFF70000000000uLL;
    result = 2LL;
    a2[3] = -1LL;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 1;
    switch ( *(_BYTE *)(v2 + 184) & 7 )
    {
      case 0:
        *a2 = 0LL;
        a2[1] = 0x7FFFFFFFFFFFLL;
        a2[2] = qword_140C4E360;
        v4 = qword_140C4E370;
        if ( !qword_140C4E370 )
        {
          v4 = 276840448LL;
          qword_140C4E380 = 0x10000000LL;
          qword_140C4E370 = 276840448LL;
          qword_140C4E378 = 276824064LL;
        }
        v3 = 2;
        a2[3] = qword_140C4E360 - 1 + v4;
        return v3;
      case 1:
        *a2 = qword_140C4DDD8;
        a2[1] = qword_140C4DDD8 + 0x7FFFFFFFFFLL;
        return 1LL;
      case 2:
        *a2 = qword_140C4E1D8;
        result = 1LL;
        a2[1] = qword_140C4E1D8 - 1 + (qword_140C4E1B8 << 21);
        break;
      case 3:
        *a2 = qword_140C4E190;
        result = 1LL;
        a2[1] = qword_140C4E190 - 1 + (qword_140C4E170 << 21);
        break;
      case 4:
        *a2 = qword_140C4E100;
        result = 1LL;
        a2[1] = qword_140C4E100 - 1 + (qword_140C4E0E0 << 21);
        break;
      case 6:
        *a2 = qword_140C4E070;
        result = 1LL;
        a2[1] = qword_140C4E070 - 1 + (qword_140C4E050 << 21);
        break;
      default:
        return v3;
    }
  }
  return result;
}
