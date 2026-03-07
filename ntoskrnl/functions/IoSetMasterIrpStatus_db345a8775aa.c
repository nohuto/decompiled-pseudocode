__int64 __fastcall IoSetMasterIrpStatus(__int64 a1, signed __int32 a2)
{
  signed __int32 v2; // r8d
  __int64 result; // rax

  do
  {
    v2 = *(_DWORD *)(a1 + 48);
    if ( a2 != -2147483626 )
    {
      if ( v2 == -2147483626 )
        break;
      if ( v2 != 1073741877 )
      {
        if ( a2 == 1073741877 )
          break;
        result = a2 & 0xC0000000;
        if ( (unsigned int)result <= (v2 & 0xC0000000) )
          break;
      }
    }
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), a2, v2);
  }
  while ( v2 != (_DWORD)result );
  return result;
}
