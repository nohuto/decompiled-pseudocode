/*
 * XREFs of HalpBlkHandleMachineCheckAbort @ 0x140B131B0
 * Callers:
 *     HalpBlkMachineCheckAbort @ 0x140B12280 (HalpBlkMachineCheckAbort.c)
 * Callees:
 *     HalpBlkFatalErrorHalt @ 0x140B110B0 (HalpBlkFatalErrorHalt.c)
 */

char __fastcall HalpBlkHandleMachineCheckAbort(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int8 v2; // bl
  unsigned __int64 v3; // rax
  char v4; // di
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rbx

  v1 = __readmsr(0x179u);
  v2 = v1;
  if ( BYTE3(KeGetPcr()->NtTib.ExceptionList[2].Handler) != 2 || (v1 & 0x1000000) == 0 )
    HalpBlkFatalErrorHalt(0x12u, a1);
  v3 = __readmsr(0x17Au);
  v4 = v3;
  if ( (v3 & 1) == 0 )
    HalpBlkFatalErrorHalt(0x12u, a1);
  LOBYTE(v5) = v2;
  if ( v2 )
  {
    v6 = 1025;
    v7 = v2;
    do
    {
      v5 = __readmsr(v6);
      v8 = v5;
      if ( v5 < 0 && (v5 & 0x2000000000000000LL) != 0 )
      {
        if ( (v5 & 0x4200000000000000LL) != 0 )
          HalpBlkFatalErrorHalt(0x12u, a1);
        LOBYTE(v5) = (v4 & 8) != 0;
        if ( (((v8 & 0x180000000000000LL) == 0x180000000000000LL) & (unsigned __int8)v5) != 0 )
          HalpBlkFatalErrorHalt(0x12u, a1);
      }
      v6 += 4;
      --v7;
    }
    while ( v7 );
  }
  return v5;
}
