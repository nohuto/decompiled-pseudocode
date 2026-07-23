/*
 * XREFs of RtlpIsDuplicateAce @ 0x14064F3B0
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140651850 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlpCompareKnownObjectAces @ 0x140913F2C (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // dl
  int v5; // eax
  unsigned __int8 *v6; // rbx
  char v7; // cl
  int v8; // r12d
  char v9; // r8
  int v10; // edi
  char v11; // dl
  int v12; // r14d
  int v13; // r13d
  __int64 v14; // rcx
  int v15; // r15d
  unsigned __int8 v16; // r9
  __int64 v17; // rdx
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d

  if ( *a2 <= 8u && *a2 != 4 )
  {
    v4 = a2[1];
    if ( (v4 & 0x10) != 0 )
    {
      v5 = *(unsigned __int16 *)(a1 + 4);
      v6 = (unsigned __int8 *)(a1 + 8);
      v7 = v4 & 2;
      v8 = *((_DWORD *)a2 + 1);
      v9 = v4 & 1;
      v10 = 0;
      v11 = v4 & 8;
      if ( v5 - 1 <= 0 )
        return 0;
      v12 = *((_DWORD *)a2 + 1);
      v13 = v12;
      if ( !v7 )
        v12 = 0;
      if ( !v9 )
        v13 = 0;
      if ( v11 )
        v8 = 0;
      while ( 1 )
      {
        v14 = *v6;
        v15 = v12;
        if ( (unsigned __int8)v14 > 8u )
          goto LABEL_19;
        if ( (_BYTE)v14 == 4 )
          goto LABEL_19;
        v16 = v6[1];
        if ( (v16 & 0x10) == 0 )
          goto LABEL_19;
        v17 = *a2;
        if ( (unsigned __int8)v14 >= 5u )
        {
          if ( (unsigned __int8)(v17 - 5) > 3u || !(unsigned __int8)RtlpCompareKnownObjectAces(v6, a2) )
            goto LABEL_19;
        }
        else if ( (unsigned __int8)(v17 - 5) <= 3u
               || *((_BYTE *)&RtlBaseAceType + v17) != *((_BYTE *)&RtlBaseAceType + v14)
               || *((_BYTE *)&RtlIsSystemAceType + v17) && ((a2[1] ^ v16) & 0xC0) != 0
               || !RtlEqualSid(a2 + 8, v6 + 8) )
        {
          goto LABEL_19;
        }
        v19 = ~*((_DWORD *)v6 + 1);
        v12 &= v19;
        if ( (v6[1] & 2) == 0 )
          v12 = v15;
        v20 = v13 & ~*((_DWORD *)v6 + 1);
        if ( (v6[1] & 1) == 0 )
          v20 = v13;
        v21 = v8 & v19;
        v13 = v20;
        if ( (v6[1] & 8) != 0 )
          v21 = v8;
        v8 = v21;
        if ( !(v12 | v20 | v21) )
          return 1;
LABEL_19:
        ++v10;
        v6 += *((unsigned __int16 *)v6 + 1);
        if ( v10 >= *(unsigned __int16 *)(a1 + 4) - 1 )
          return 0;
      }
    }
  }
  return 0;
}
