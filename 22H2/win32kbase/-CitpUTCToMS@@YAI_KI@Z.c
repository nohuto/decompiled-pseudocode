/*
 * XREFs of ?CitpUTCToMS@@YAI_KI@Z @ 0x1C008EA58
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0047850 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C008EAAC (-Citp100NSToMS@@YAI_K@Z.c)
 */

__int64 __fastcall CitpUTCToMS(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // r8d

  if ( MEMORY[0xFFFFF78000000014] > a1 )
  {
    v4 = MEMORY[0xFFFFF78000000014] - a1;
    if ( MEMORY[0xFFFFF78000000014] - a1 >= MEMORY[0xFFFFF78000000008] - (_QWORD)xmmword_1C02545A0 )
      v4 = MEMORY[0xFFFFF78000000008] - xmmword_1C02545A0;
    v5 = Citp100NSToMS(v4);
    return v6 - v5;
  }
  return a2;
}
