/*
 * XREFs of PpmPerfCheckRequired @ 0x14038E388
 * Callers:
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfCheckRequired(__int64 a1)
{
  char v1; // dl
  _BYTE *v2; // r8
  unsigned int v3; // r10d
  char v4; // r9
  __int64 i; // rax

  v1 = 0;
  v2 = (_BYTE *)(a1 + 26);
  v3 = 0;
  while ( 1 )
  {
    v4 = v2[2];
    if ( *v2 != v4 )
      break;
    if ( *v2 == 100 && v4 == 100 && ((*(_DWORD *)(a1 + 56) - 1) & 0xFFFFFFFD) == 0 )
    {
      for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 444) > 0x64u )
          return 1;
      }
    }
    ++v3;
    ++v2;
    if ( v3 >= 2 )
      return v1;
  }
  return 1;
}
