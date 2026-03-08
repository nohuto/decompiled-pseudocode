/*
 * XREFs of ViWdBeforeCallDriver @ 0x140ADB1D4
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     VfTargetDriversIsEnabled @ 0x140AC8614 (VfTargetDriversIsEnabled.c)
 */

void __fastcall ViWdBeforeCallDriver(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax

  if ( !*a3 && *(_BYTE *)(a1 + 64) == 1 && (unsigned int)VfTargetDriversIsEnabled(a2) && ViWdInitialized )
  {
    v5 = ExAllocateFromNPagedLookasideList(&ViWdIrpLookasideList);
    if ( v5 )
    {
      v5[2] = a1;
      *((_BYTE *)v5 + 29) = *(_BYTE *)(a1 + 67);
      *((_BYTE *)v5 + 28) = 0;
      *a3 = v5;
    }
  }
}
