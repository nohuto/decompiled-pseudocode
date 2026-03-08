/*
 * XREFs of ??_G?$SignedWithClassSignature@VDMMVIDEOPRESENTTARGETSET@@@@UEAAPEAXI@Z @ 0x1C0067E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[2] |= 0x6D640000u;
  *(_QWORD *)a1 = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(a1, 0);
  return a1;
}
