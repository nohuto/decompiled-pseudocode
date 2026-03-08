/*
 * XREFs of PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140726450
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x14073C194 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsInitialize @ 0x140B62918 (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     RtlRandomEx @ 0x1402A6210 (RtlRandomEx.c)
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1402B36C0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407261A0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140726370 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperSetBlockerVerboseDescription @ 0x14099F0E0 (SleepstudyHelperSetBlockerVerboseDescription.c)
 */

__int64 __fastcall PopPowerRequestStatsCreateSleepstudyBlocker(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v5; // xmm0
  int v6; // eax
  __int64 *v7; // rdi
  int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  ULONG Seed; // [rsp+78h] [rbp+28h] BYREF
  __int64 *v13; // [rsp+88h] [rbp+38h] BYREF

  v13 = 0LL;
  if ( PopPowerRequestSleepstudyHandle )
  {
    v10 = RtlRandomEx(&Seed);
    v5 = v10;
    v10 = 0LL;
    v11 = v5;
    LODWORD(v10) = -1428313379;
    BYTE4(v10) = 6;
    v6 = SleepstudyHelperCreateBlockerFromGuid(PopPowerRequestSleepstudyHandle, &v10, &v11, a1 + 8, 7u, (__int64 *)&v13);
    v7 = v13;
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( (*(_DWORD *)a1 & 1) == 0
        || (v8 = SleepstudyHelperSetBlockerVerboseDescription(
                   (_DWORD)v13,
                   *(unsigned __int16 *)(a1 + 40),
                   (int)a1 + 24,
                   *(_DWORD *)(a1 + 44),
                   a1 + 48),
            v8 >= 0) )
      {
        v8 = SleepstudyHelperBuildBlocker(v7, a3);
        if ( v8 >= 0 )
        {
          v7 = 0LL;
          v8 = 0;
        }
      }
    }
    if ( v7 )
      SleepstudyHelperDestroyBlockerBuilder(v7);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
