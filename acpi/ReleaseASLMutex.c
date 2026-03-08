/*
 * XREFs of ReleaseASLMutex @ 0x1C0054DD0
 * Callers:
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     Release @ 0x1C0055850 (Release.c)
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 * Callees:
 *     ParseRelease @ 0x1C005BF70 (ParseRelease.c)
 */

__int64 __fastcall ReleaseASLMutex(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+24h] [rbp-44h]
  int v7; // [rsp+2Ch] [rbp-3Ch]
  int v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+34h] [rbp-34h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+48h] [rbp-20h]

  v11 = a2;
  v5 = 1179403602;
  v6 = 0LL;
  v7 = 0;
  v9 = 0LL;
  v10 = 0;
  v12 = 0LL;
  v3 = 393216;
  if ( a3 )
    v3 = 458752;
  v8 = v3;
  return ParseRelease(a1, &v5, 0LL);
}
