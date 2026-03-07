_BYTE *__fastcall DmrFindDrhdForDeviceScope(__int64 a1, __int16 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r14
  _WORD *v7; // rdx
  _WORD *NextRemappingStructure; // rax
  _WORD *v9; // rdi
  _BYTE *v10; // rsi
  __int64 i; // rdx
  __int64 NextDrhdDeviceScope; // rax
  __int64 v13; // rbp

  v3 = 0LL;
  v6 = a1;
  if ( *a3 == 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v7);
      v9 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*NextRemappingStructure )
      {
        v10 = NextRemappingStructure + 2;
        if ( NextRemappingStructure[3] == a2 )
        {
          if ( (*v10 & 1) != 0 )
            return v10;
          for ( i = 0LL; ; i = v13 )
          {
            NextDrhdDeviceScope = DmrGetNextDrhdDeviceScope(v9, i);
            v13 = NextDrhdDeviceScope;
            if ( !NextDrhdDeviceScope )
              break;
            if ( (unsigned __int8)DmrCheckPathMatch(NextDrhdDeviceScope, a3) )
              return v10;
          }
        }
      }
      v7 = v9;
      a1 = v6;
    }
  }
  return (_BYTE *)v3;
}
