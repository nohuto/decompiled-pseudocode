/*
 * XREFs of PsQueryFullProcessImageName @ 0x14071F6D4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall PsQueryFullProcessImageName(__int64 a1, _OWORD *a2, void *a3, unsigned int *a4)
{
  const void **v6; // rdx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v10; // rax
  __int128 v12; // [rsp+28h] [rbp-20h]

  v6 = *(const void ***)(a1 + 1472);
  v7 = *a4;
  *a4 = *((unsigned __int16 *)v6 + 1);
  if ( *((unsigned __int16 *)v6 + 1) > v7 )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v12 = *(_OWORD *)v6;
    v8 = (unsigned __int64)*v6 >> 16;
    v9 = 0;
    v10 = 0LL;
    if ( WORD1(*(_OWORD *)v6) )
      v10 = a3;
    *((_QWORD *)&v12 + 1) = v10;
    *a2 = v12;
    if ( (_WORD)v8 )
      memmove(a3, v6[1], *((unsigned __int16 *)v6 + 1));
  }
  return v9;
}
