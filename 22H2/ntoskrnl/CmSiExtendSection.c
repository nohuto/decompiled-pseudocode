/*
 * XREFs of CmSiExtendSection @ 0x140363460
 * Callers:
 *     HvpViewMapExtendStorage @ 0x14072425C (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1403FB680 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewSectionSize; // [rsp+38h] [rbp+10h] BYREF

  NewSectionSize = a2;
  return ZwExtendSection(a1, &NewSectionSize);
}
