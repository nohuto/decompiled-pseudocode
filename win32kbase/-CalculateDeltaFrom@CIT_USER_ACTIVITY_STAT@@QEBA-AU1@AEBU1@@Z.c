/*
 * XREFs of ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA?AU1@AEBU1@@Z @ 0x1C00B0A54
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00B0564 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // eax
  unsigned int v6; // r11d
  unsigned int v7; // r11d
  unsigned int v8; // edx
  unsigned int v10; // eax

  v3 = *a1;
  v5 = *a3;
  v6 = *a1;
  *a2 = 0;
  v7 = v6 - v5;
  a2[1] = 0;
  if ( v3 >= v5 )
    goto LABEL_2;
  v10 = -1;
  if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                        - xmmword_1C02D4DC0) <= 0xFFFFFFFF )
    v10 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - xmmword_1C02D4DC0;
  if ( v7 <= v10 )
LABEL_2:
    *a2 = v7;
  v8 = a3[1] & 0x7FFFFFFF;
  if ( (a1[1] & 0x7FFFFFFF) > v8 )
    a2[1] = (a1[1] - v8) & 0x7FFFFFFF;
  return a2;
}
