/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C00B6140
 * Callers:
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C00B6228 (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00B6308 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00B6580 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CitpInitialize(const unsigned __int16 *a1)
{
  PCWSTR v1; // r10
  __int64 result; // rax

  *(_QWORD *)&qword_1C0293D24 = 1000LL;
  dword_1C0293D2C = 0;
  *(_QWORD *)&xmmword_1C0293D14 = 0xEA6000000040LL;
  *((_QWORD *)&xmmword_1C0293D14 + 1) = 0xEA6000000001LL;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C0293D14);
  *(_OWORD *)&xmmword_1C0293D30 = 0LL;
  xmmword_1C0293D50 = 0LL;
  xmmword_1C0293D40 = 0LL;
  *(_QWORD *)&xmmword_1C0293D50 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LOBYTE(g_CompatImpact) = 1;
  *((_DWORD *)&xmmword_1C0293D30 + 2) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CitpParametersLoad((struct _CIT_PARAMETERS *)&xmmword_1C0293D14, v1);
  if ( !*((_BYTE *)&qword_1C0293D24 + 4) )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
