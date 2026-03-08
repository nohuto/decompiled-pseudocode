/*
 * XREFs of HalpPciGetHpetInterruptSource @ 0x140B8F930
 * Callers:
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 * Callees:
 *     HalSocGetAcpiTable @ 0x14037601C (HalSocGetAcpiTable.c)
 *     HalpPciGetHpetInterruptSourceAmd @ 0x140B8F9FC (HalpPciGetHpetInterruptSourceAmd.c)
 *     HalpPciGetHpetInterruptSourceIntel @ 0x140B8FAE8 (HalpPciGetHpetInterruptSourceIntel.c)
 */

__int64 __fastcall HalpPciGetHpetInterruptSource(char a1, __int64 a2, int *a3, int *a4)
{
  int HpetInterruptSourceAmd; // esi
  __int64 AcpiTable; // rax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax

  HpetInterruptSourceAmd = -1073741275;
  AcpiTable = HalSocGetAcpiTable(1380011332);
  v11 = 0;
  if ( !AcpiTable
    || (LOBYTE(v10) = a1,
        HpetInterruptSourceAmd = HalpPciGetHpetInterruptSourceIntel(AcpiTable, v10, a2),
        HpetInterruptSourceAmd == -1073741275) )
  {
    v12 = HalSocGetAcpiTable(1397904969);
    if ( !v12 )
    {
LABEL_7:
      *(_QWORD *)(a2 + 4) = 0LL;
      *(_DWORD *)a2 = 0;
      *a3 = 0;
      goto LABEL_8;
    }
    LOBYTE(v13) = a1;
    HpetInterruptSourceAmd = HalpPciGetHpetInterruptSourceAmd(v12, v13, a2);
  }
  if ( HpetInterruptSourceAmd < 0 )
    goto LABEL_7;
  *a3 = *(unsigned __int8 *)(a2 + 8) | (*(_DWORD *)(a2 + 4) << 8);
  *a4 = 0;
  v14 = *(_BYTE *)(a2 + 9) & 0x1F;
  *a4 = v14;
  v11 = v14 | (32 * (*(_BYTE *)(a2 + 10) & 7));
LABEL_8:
  *a4 = v11;
  return (unsigned int)HpetInterruptSourceAmd;
}
