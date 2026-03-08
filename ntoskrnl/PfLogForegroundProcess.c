/*
 * XREFs of PfLogForegroundProcess @ 0x1402F5C50
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     PfLogEvent @ 0x14028D0D0 (PfLogEvent.c)
 */

__int64 __fastcall PfLogForegroundProcess(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v1 = *(unsigned int *)(a1 - 576);
  v5 = 0;
  v3 = v1;
  v4 = *(_DWORD *)(a1 - 140);
  return PfLogEvent(
           7,
           dword_140C64C2C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v3,
           0x10u);
}
