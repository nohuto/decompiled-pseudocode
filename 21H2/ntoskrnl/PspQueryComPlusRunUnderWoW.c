/*
 * XREFs of PspQueryComPlusRunUnderWoW @ 0x1407F8490
 * Callers:
 *     PspSelectMachineForProcess @ 0x140711058 (PspSelectMachineForProcess.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 */

int __fastcall PspQueryComPlusRunUnderWoW(__int64 a1, _BYTE *a2)
{
  char v2; // al
  void *v5; // rcx
  int result; // eax
  int v7; // [rsp+50h] [rbp+18h] BYREF
  ULONG v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = MEMORY[0xFFFFF780000002E0];
  v7 = MEMORY[0xFFFFF780000002E0];
  if ( MEMORY[0xFFFFF780000002E0] == -1 )
  {
    result = ZwQuerySystemInformation(59LL, (__int64)&v7);
    if ( result < 0 )
      return result;
    v2 = v7;
  }
  if ( (v2 & 1) == 0 )
    goto LABEL_14;
  v5 = *(void **)(a1 + 192);
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
      return -1073741823;
    goto LABEL_5;
  }
  v8 = 0;
  result = RtlQueryImageFileKeyOption(v5, L"Wow64", 4, &v8, 4u, 0LL);
  if ( result >= 0 )
  {
    if ( !v8 )
      goto LABEL_5;
LABEL_14:
    *a2 = 1;
    return 0;
  }
  if ( result == -1073741772 )
  {
LABEL_5:
    *a2 = 0;
    return 0;
  }
  return result;
}
