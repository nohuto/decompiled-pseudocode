/*
 * XREFs of RaidAtaIdFormatString @ 0x1C00144EC
 * Callers:
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C0014440 (RaidBusEnumeratorProcessAtaInformation.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C000BEF8 (RaidRemoveTrailingBlanks.c)
 */

void __fastcall RaidAtaIdFormatString(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  char v6; // bl
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdi
  char v10; // al
  char v11; // dl
  __int64 v12; // rcx

  v3 = 0LL;
  *a1 = 0;
  v5 = (__int64)a1;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    v8 = a2 - (_QWORD)a1;
    v9 = a3;
    v7 = a3;
    do
    {
      if ( !v6 )
      {
        v10 = a1[v8];
        if ( v10 )
        {
          if ( v10 > 32 && v10 != 44 )
            goto LABEL_7;
        }
        else
        {
          v6 = 1;
        }
      }
      v10 = 32;
LABEL_7:
      *a1++ = v10;
      --v9;
    }
    while ( v9 );
  }
  *(_BYTE *)(v7 + v5) = 0;
  if ( a3 && (a3 & 1) == 0 && a3 != 1 )
  {
    do
    {
      v11 = *(_BYTE *)(v3 + v5);
      v12 = (unsigned int)(v3 + 1);
      *(_BYTE *)(v3 + v5) = *(_BYTE *)(v12 + v5);
      v3 = (unsigned int)(v3 + 2);
      *(_BYTE *)(v12 + v5) = v11;
    }
    while ( (unsigned int)v3 < a3 - 1 );
  }
  RaidRemoveTrailingBlanks(v5, a3 + 1);
}
