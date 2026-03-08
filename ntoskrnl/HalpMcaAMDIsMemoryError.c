/*
 * XREFs of HalpMcaAMDIsMemoryError @ 0x140503E64
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x140500730 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpMceRecoveryRequired @ 0x140516F9C (HalpMceRecoveryRequired.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpMcaAMDIsMemoryError(__int64 a1, __int16 a2)
{
  char v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  bool v5; // zf

  v2 = 0;
  if ( HalpMcaScalableRasSupported )
  {
    v3 = HIWORD(*(_QWORD *)(a1 + 72));
    v4 = HIDWORD(*(_QWORD *)(a1 + 72)) & 0xFFF;
    if ( v4 == 176 )
    {
      if ( (v3 & 0xFFFFFFFFFFFFFFEFuLL) == 0 )
        return 1;
      v5 = v3 == 1;
    }
    else
    {
      if ( v4 != 150 )
        return v2;
      v5 = v3 == 0;
    }
    if ( v5 )
      return 1;
  }
  else if ( *(_DWORD *)(a1 + 36) == 4 && (a2 & 0xE800) == 0x800 )
  {
    return (*(_DWORD *)(a1 + 40) & 0x170000) == 0;
  }
  return v2;
}
