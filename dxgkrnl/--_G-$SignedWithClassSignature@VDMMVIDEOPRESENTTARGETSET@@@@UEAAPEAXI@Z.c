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
