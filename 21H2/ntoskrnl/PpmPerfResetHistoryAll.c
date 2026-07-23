/*
 * XREFs of PpmPerfResetHistoryAll @ 0x1407BC134
 * Callers:
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     PpmPerfResetHistory @ 0x1403C2848 (PpmPerfResetHistory.c)
 */

__int64 PpmPerfResetHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  __int64 i; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0;
  v6 = 0;
  v9 = 0;
  v5[1] = (unsigned __int16 *)qword_140C113C8[0];
  v5[0] = (unsigned __int16 *)PpmCheckRegistered;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v9, v5);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v9);
    PpmPerfResetHistory(Prcb + 33128);
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 200) )
    {
      v3 = 0;
      do
      {
        result = v3;
        v4 = *(_QWORD *)(i + 216) + 136LL * v3;
        if ( *(_DWORD *)(v4 + 16) == 1 )
          result = PpmPerfResetHistory(*(_QWORD *)v4);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(i + 200) );
    }
  }
  return result;
}
