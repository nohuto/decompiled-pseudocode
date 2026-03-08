/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C00C57B0
 * Callers:
 *     CitProcessCallout @ 0x1C006F63C (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C00C5898 (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00C5978 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00C5BF0 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CitpInitialize(const unsigned __int16 *a1)
{
  PCWSTR v1; // r10
  __int64 result; // rax

  *(_QWORD *)&qword_1C02D4D94 = 1000LL;
  dword_1C02D4D9C = 0;
  *(_QWORD *)&xmmword_1C02D4D84 = 0xEA6000000040LL;
  *((_QWORD *)&xmmword_1C02D4D84 + 1) = 0xEA6000000001LL;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C02D4D84);
  *(_OWORD *)&xmmword_1C02D4DA0 = 0LL;
  xmmword_1C02D4DC0 = 0LL;
  xmmword_1C02D4DB0 = 0LL;
  *(_QWORD *)&xmmword_1C02D4DC0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LOBYTE(g_CompatImpact) = 1;
  *((_DWORD *)&xmmword_1C02D4DA0 + 2) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CitpParametersLoad((struct _CIT_PARAMETERS *)&xmmword_1C02D4D84, v1);
  if ( !*((_BYTE *)&qword_1C02D4D94 + 4) )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
