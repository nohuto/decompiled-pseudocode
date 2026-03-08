/*
 * XREFs of ProcessorpValidateTargetSet @ 0x1C009C3D4
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     IntPartIsInterruptSteerable @ 0x1C005EDEC (IntPartIsInterruptSteerable.c)
 */

char __fastcall ProcessorpValidateTargetSet(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 v4; // r8
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  bool v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 8);
  v2 = 0;
  v8 = 0;
  if ( (unsigned __int16)v1 >= KeQueryMaximumGroupCount() )
    return 0;
  v4 = *(_QWORD *)(ProcessorGroupByNumber + 8 * v1);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)(v4 + 36) == 1
    && (!*(_QWORD *)a1 || (*(_QWORD *)a1 & (*(_QWORD *)a1 ^ (*(_QWORD *)a1 - 1LL))) != *(_QWORD *)a1)
    && IrqMachinePolicy != 6 )
  {
    return 0;
  }
  v5 = (_QWORD *)(v4 + 16);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_10:
    if ( IrqMachinePolicy == 6 && (int)IntPartIsInterruptSteerable(a1, &v8) >= 0 )
      return v8;
  }
  else
  {
    while ( (*(_QWORD *)a1 & v6[3]) != *(_QWORD *)a1 )
    {
      v6 = (_QWORD *)*v6;
      if ( v6 == v5 )
        goto LABEL_10;
    }
    return 1;
  }
  return v2;
}
