/*
 * XREFs of HalpAcpiSetupPmRegister @ 0x140B63078
 * Callers:
 *     HalpAcpiInitializePmRegisters @ 0x140B62E74 (HalpAcpiInitializePmRegisters.c)
 *     HalpAcpiSetupPmRegisterLegacy @ 0x140B6301C (HalpAcpiSetupPmRegisterLegacy.c)
 * Callees:
 *     HalMapIoSpace @ 0x14037AD90 (HalMapIoSpace.c)
 */

__int64 __fastcall HalpAcpiSetupPmRegister(SIZE_T NumberOfBytes, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  SIZE_T v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  void *v11; // rax
  int v13; // ecx

  v5 = 0;
  v7 = (unsigned int)NumberOfBytes;
  *(_DWORD *)(a4 + 24) = a2;
  switch ( *(_BYTE *)(a3 + 3) )
  {
    case 0:
    case 1:
      v8 = 1;
      break;
    case 2:
      v8 = 2;
      break;
    case 3:
      v8 = 4;
      break;
    case 4:
      v8 = 8;
      break;
    default:
      return (unsigned int)-1073741823;
  }
  v9 = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)v9 )
    v10 = v9 >> 3;
  else
    v10 = v8;
  if ( v8 < a2 )
    return (unsigned int)-1073741823;
  *(_DWORD *)(a4 + 28) = v10;
  if ( !*(_QWORD *)(a3 + 4) )
    return (unsigned int)-1073741823;
  switch ( *(_BYTE *)a3 )
  {
    case 0:
      *(_QWORD *)(a4 + 8) = HalMapIoSpace(*(LARGE_INTEGER *)(a3 + 4), v7, MmNonCached);
      *(_QWORD *)(a4 + 32) = HalpAcpiPmRegisterReadRegister;
      v11 = HalpAcpiPmRegisterWriteRegister;
      goto LABEL_12;
    case 1:
      *(_QWORD *)(a4 + 8) = *(unsigned int *)(a3 + 4);
      *(_QWORD *)(a4 + 32) = HalpAcpiPmRegisterReadPort;
      v11 = HalpAcpiPmRegisterWritePort;
LABEL_12:
      *(_QWORD *)(a4 + 40) = v11;
      goto LABEL_13;
    case 2:
      *(_DWORD *)(a4 + 16) = 0;
      v13 = *(_DWORD *)(a3 + 8) & 0x1F;
      *(_DWORD *)(a4 + 16) = v13;
      *(_DWORD *)(a4 + 16) = v13 | (*(_DWORD *)(a3 + 4) >> 11) & 0xE0;
      *(_WORD *)(a4 + 20) = *(_WORD *)(a3 + 4);
      *(_WORD *)(a4 + 22) = *(_WORD *)(a3 + 10);
      *(_QWORD *)(a4 + 32) = PdcCreateWatchdogAroundClientCall;
      v11 = PdcCreateWatchdogAroundClientCall;
      *(_QWORD *)(a4 + 8) = a4 + 16;
      goto LABEL_12;
  }
  v5 = -1073741637;
LABEL_13:
  if ( *(_QWORD *)(a4 + 8) )
    *(_BYTE *)a4 = 1;
  return v5;
}
