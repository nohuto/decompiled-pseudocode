/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008EADC
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C008DF28 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  if ( *((_WORD *)a1 + 148) != *((_WORD *)a1 + 133) && (unsigned int)dword_1C024ABEC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024ABE0);
  if ( *((_WORD *)a1 + 149) != *((_WORD *)a1 + 134) && (unsigned int)dword_1C024AC34 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024AC28);
  if ( *((_WORD *)a1 + 151) != *((_WORD *)a1 + 136) && (unsigned int)dword_1C024AC4C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024AC40);
  if ( *((_WORD *)a1 + 153) != *((_WORD *)a1 + 138) && (unsigned int)dword_1C024AC04 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024ABF8);
  if ( *((_WORD *)a1 + 154) != *((_WORD *)a1 + 139) && (unsigned int)dword_1C024AC1C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024AC10);
  if ( *((_WORD *)a1 + 156) != *((_WORD *)a1 + 141) && (unsigned int)dword_1C024AB74 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024AB68);
  if ( *((_WORD *)a1 + 158) != *((_WORD *)a1 + 143) && (unsigned int)dword_1C024AB8C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024AB80);
  if ( *((_WORD *)a1 + 159) != *((_WORD *)a1 + 144) && (unsigned int)dword_1C024AB5C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024AB50);
  if ( *((_WORD *)a1 + 150) != *((_WORD *)a1 + 135) && (unsigned int)dword_1C024937C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0249370);
  if ( *((_WORD *)a1 + 152) != *((_WORD *)a1 + 137) && (unsigned int)dword_1C0249394 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C0249388);
  if ( *((_WORD *)a1 + 155) != *((_WORD *)a1 + 140) && (unsigned int)dword_1C024ABD4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024ABC8);
  if ( *((_WORD *)a1 + 157) != *((_WORD *)a1 + 142) && (unsigned int)dword_1C024ABA4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024AB98);
  if ( *((_WORD *)a1 + 160) != *((_WORD *)a1 + 145) && (unsigned int)dword_1C024ABBC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C024ABB0);
  v2 = *((_DWORD *)a1 + 72);
  v3 = *((_QWORD *)a1 + 35);
  *(_OWORD *)((char *)a1 + 294) = *(_OWORD *)((char *)a1 + 264);
  *(_QWORD *)((char *)a1 + 310) = v3;
  *(_DWORD *)((char *)a1 + 318) = v2;
  *((_WORD *)a1 + 161) = *((_WORD *)a1 + 146);
}
