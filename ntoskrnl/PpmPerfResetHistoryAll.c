/*
 * XREFs of PpmPerfResetHistoryAll @ 0x140828CC4
 * Callers:
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmPerfResetHistory @ 0x14038F778 (PpmPerfResetHistory.c)
 */

__int64 PpmPerfResetHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  __int64 i; // rbx
  int v3; // edx
  int v4; // edi
  __int64 v5; // rcx
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+32h] [rbp-16h]
  __int16 v9; // [rsp+36h] [rbp-12h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v9 = 0;
  v7 = 0;
  v10 = 0;
  v6[1] = (unsigned __int16 *)qword_140C0BD78[0];
  v6[0] = (unsigned __int16 *)&PpmCheckRegistered;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v6);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v10);
    PpmPerfResetHistory(Prcb + 33968);
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 296) )
    {
      result = 0LL;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = *(_QWORD *)(i + 312) + 144 * result;
        if ( *(_DWORD *)(v5 + 16) == 1 )
        {
          PpmPerfResetHistory(*(_QWORD *)v5);
          v3 = v4;
        }
        result = (unsigned int)(v3 + 1);
        v3 = result;
        v4 = result;
      }
      while ( (unsigned int)result < *(_DWORD *)(i + 296) );
    }
  }
  return result;
}
