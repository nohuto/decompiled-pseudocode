/*
 * XREFs of RtlpIsDuplicateAce @ 0x140699C50
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140699FA0 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     RtlpCompareKnownObjectAces @ 0x1409B97E8 (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // cl
  unsigned __int8 *v5; // rbx
  int v6; // ebp
  int v7; // edi
  int v8; // r13d
  int v9; // r12d
  __int64 v10; // rcx
  int v11; // r14d
  unsigned __int8 v12; // r9
  __int64 v13; // rdx
  unsigned __int8 v15; // dl
  int v16; // r8d
  int v17; // ecx
  int v18; // r8d

  if ( *a2 <= 8u && *a2 != 4 )
  {
    v4 = a2[1];
    if ( (v4 & 0x10) != 0 )
    {
      v5 = (unsigned __int8 *)(a1 + 8);
      v6 = *((_DWORD *)a2 + 1);
      v7 = 0;
      if ( (v4 & 2) == 0 )
        v6 = 0;
      v8 = *((_DWORD *)a2 + 1);
      if ( (v4 & 1) == 0 )
        v8 = 0;
      v9 = 0;
      if ( (v4 & 8) == 0 )
        v9 = *((_DWORD *)a2 + 1);
      if ( *(unsigned __int16 *)(a1 + 4) - 1 <= 0 )
        return 0;
      while ( 1 )
      {
        v10 = *v5;
        v11 = v6;
        if ( (unsigned __int8)v10 > 8u )
          goto LABEL_19;
        if ( (_BYTE)v10 == 4 )
          goto LABEL_19;
        v12 = v5[1];
        if ( (v12 & 0x10) == 0 )
          goto LABEL_19;
        v13 = *a2;
        if ( (unsigned __int8)v10 >= 5u )
        {
          if ( (unsigned __int8)(v13 - 5) > 3u || !(unsigned __int8)RtlpCompareKnownObjectAces(v5, a2) )
            goto LABEL_19;
        }
        else if ( (unsigned __int8)(v13 - 5) <= 3u
               || *((_BYTE *)&RtlBaseAceType + v13) != *((_BYTE *)&RtlBaseAceType + v10)
               || *((_BYTE *)RtlIsSystemAceType + v13) && ((a2[1] ^ v12) & 0xC0) != 0
               || !RtlEqualSid(a2 + 8, v5 + 8) )
        {
          goto LABEL_19;
        }
        v15 = v5[1];
        v16 = ~*((_DWORD *)v5 + 1);
        v6 &= v16;
        if ( (v15 & 2) == 0 )
          v6 = v11;
        v17 = v8 & ~*((_DWORD *)v5 + 1);
        if ( (v15 & 1) == 0 )
          v17 = v8;
        v18 = v9 & v16;
        v8 = v17;
        if ( (v15 & 8) != 0 )
          v18 = v9;
        v9 = v18;
        if ( !(v6 | v17 | v18) )
          return 1;
LABEL_19:
        ++v7;
        v5 += *((unsigned __int16 *)v5 + 1);
        if ( v7 >= *(unsigned __int16 *)(a1 + 4) - 1 )
          return 0;
      }
    }
  }
  return 0;
}
