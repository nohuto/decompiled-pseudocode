__int64 __fastcall RtlXSaveS(__int64 _RCX, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXSave(_RCX, a2, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  return XSaveSHelper(_RCX, *(_QWORD *)(_RCX + 520) & a2);
}
