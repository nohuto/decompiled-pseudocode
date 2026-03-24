/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008DC3C
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C008D088 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  if ( *((_WORD *)a1 + 148) != *((_WORD *)a1 + 133) && (unsigned int)dword_1C024BC4C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BC40);
  if ( *((_WORD *)a1 + 149) != *((_WORD *)a1 + 134) && (unsigned int)dword_1C024BBBC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BBB0);
  if ( *((_WORD *)a1 + 151) != *((_WORD *)a1 + 136) && (unsigned int)dword_1C024BBA4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BB98);
  if ( *((_WORD *)a1 + 153) != *((_WORD *)a1 + 138) && (unsigned int)dword_1C024BBEC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BBE0);
  if ( *((_WORD *)a1 + 154) != *((_WORD *)a1 + 139) && (unsigned int)dword_1C024BBD4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BBC8);
  if ( *((_WORD *)a1 + 156) != *((_WORD *)a1 + 141) && (unsigned int)dword_1C024BC1C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BC10);
  if ( *((_WORD *)a1 + 158) != *((_WORD *)a1 + 143) && (unsigned int)dword_1C024BC04 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BBF8);
  if ( *((_WORD *)a1 + 159) != *((_WORD *)a1 + 144) && (unsigned int)dword_1C024BC34 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BC28);
  if ( *((_WORD *)a1 + 150) != *((_WORD *)a1 + 135) && (unsigned int)dword_1C024A394 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024A388);
  if ( *((_WORD *)a1 + 152) != *((_WORD *)a1 + 137) && (unsigned int)dword_1C024A364 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024A358);
  if ( *((_WORD *)a1 + 155) != *((_WORD *)a1 + 140) && (unsigned int)dword_1C024BB44 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BB38);
  if ( *((_WORD *)a1 + 157) != *((_WORD *)a1 + 142) && (unsigned int)dword_1C024BB74 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BB68);
  if ( *((_WORD *)a1 + 160) != *((_WORD *)a1 + 145) && (unsigned int)dword_1C024BB5C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024BB50);
  v2 = *((_DWORD *)a1 + 72);
  v3 = *((_QWORD *)a1 + 35);
  *(_OWORD *)((char *)a1 + 294) = *(_OWORD *)((char *)a1 + 264);
  *(_QWORD *)((char *)a1 + 310) = v3;
  *(_DWORD *)((char *)a1 + 318) = v2;
  *((_WORD *)a1 + 161) = *((_WORD *)a1 + 146);
}
