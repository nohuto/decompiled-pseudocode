/*
 * XREFs of RtlSidHashLookup @ 0x14026C600
 * Callers:
 *     SepTokenIsOwner @ 0x14026C530 (SepTokenIsOwner.c)
 *     SepSidInTokenSidHash @ 0x14026C7E4 (SepSidInTokenSidHash.c)
 * Callees:
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  unsigned __int8 v4; // r14
  __int16 v5; // bp
  unsigned int v6; // r12d
  unsigned int v7; // edx
  unsigned __int64 i; // rsi
  unsigned int SidCount; // esi
  int v11; // r13d
  _SID_AND_ATTRIBUTES *SidAttr; // rcx
  int v13; // edx
  _SID_AND_ATTRIBUTES *v14; // r15
  _SID_AND_ATTRIBUTES *v15; // r15
  unsigned int v16; // r14d
  const void **p_Sid; // rdi
  int v18; // [rsp+60h] [rbp+8h]
  _SID_AND_ATTRIBUTES *v19; // [rsp+70h] [rbp+18h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = 0;
  v5 = *(_WORD *)Sid;
  v6 = 4 * *((unsigned __int8 *)Sid + 1) + 8;
  v7 = *((unsigned __int8 *)Sid + 4 * ((unsigned __int64)*(unsigned __int16 *)Sid >> 8) + 4);
  for ( i = SidAttrHash->Hash[v7 & 0xF] & SidAttrHash->Hash[((unsigned __int64)v7 >> 4) + 16]; i; i >>= 8 )
  {
    LOBYTE(v11) = i;
    if ( (_BYTE)i )
    {
      SidAttr = SidAttrHash->SidAttr;
      v19 = SidAttr;
      v13 = v4;
      do
      {
        v18 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v11);
        v14 = &SidAttr[v13 + v18];
        if ( *(_WORD *)v14->Sid == v5 )
        {
          if ( !memcmp(Sid, v14->Sid, v6) )
            return v14;
          SidAttr = v19;
          v13 = v4;
        }
        v11 = (unsigned __int8)v11 ^ (1 << v18);
      }
      while ( (_BYTE)v11 );
    }
    v4 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  v15 = SidAttrHash->SidAttr;
  v16 = 64;
  while ( 1 )
  {
    p_Sid = (const void **)&v15[v16].Sid;
    if ( *(_WORD *)*p_Sid == v5 && !memcmp(Sid, *p_Sid, v6) )
      break;
    if ( ++v16 >= SidCount )
      return 0LL;
  }
  return &v15[v16];
}
