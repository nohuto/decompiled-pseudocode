__int64 __fastcall IopAddBugcheckTriageUnicodeString(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = 0;
  if ( (_WORD)v1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int16)v1 > 0x100u )
    {
      if ( KiIsAddressRangeValid(v4, 256LL) )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 8), (PVOID)0x100);
        return (unsigned int)-2147483643;
      }
    }
    else
    {
      v5 = (unsigned __int64)(v1 + 7) >> 3;
      if ( KiIsAddressRangeValid(v4, 8 * v5) )
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 8), (PVOID)(unsigned int)(8 * v5));
      else
        return (unsigned int)-1073741823;
    }
  }
  return v2;
}
