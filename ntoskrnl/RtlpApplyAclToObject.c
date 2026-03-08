/*
 * XREFs of RtlpApplyAclToObject @ 0x14071C11C
 * Callers:
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14071C08C (ExpWnfSpecializeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpApplyAclToObject(__int64 a1, _DWORD *a2)
{
  unsigned __int8 *v3; // r8
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  __int64 result; // rax

  if ( a1 )
  {
    v3 = (unsigned __int8 *)(a1 + 8);
    v4 = 0;
    if ( *(_WORD *)(a1 + 4) )
    {
      do
      {
        v5 = *v3;
        if ( ((unsigned __int8)v5 < 0xBu || (unsigned __int8)(v5 - 13) <= 1u) && (v3[1] & 8) == 0 )
        {
          v6 = *((_DWORD *)v3 + 1);
          if ( v6 < 0 )
            v6 |= *a2;
          if ( (v6 & 0x40000000) != 0 )
            v6 |= a2[1];
          if ( (v6 & 0x20000000) != 0 )
            v6 |= a2[2];
          if ( (v6 & 0x10000000) != 0 )
            v6 |= a2[3];
          v7 = v6 & 0xFFFFFFF;
          *((_DWORD *)v3 + 1) = v7;
          if ( (unsigned __int8)v5 <= 0xAu && (v8 = 1651, _bittest(&v8, v5)) )
            *((_DWORD *)v3 + 1) = a2[3] & v7;
          else
            *((_DWORD *)v3 + 1) = v7 & (a2[3] | 0x1000000);
        }
        ++v4;
        v3 += *((unsigned __int16 *)v3 + 1);
        result = *(unsigned __int16 *)(a1 + 4);
      }
      while ( v4 < (unsigned int)result );
    }
  }
  return result;
}
