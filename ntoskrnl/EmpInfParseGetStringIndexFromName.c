__int64 __fastcall EmpInfParseGetStringIndexFromName(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v4; // bl
  __int64 ValueFromSectionAndKeyName; // r11
  unsigned int v6; // eax
  unsigned __int8 **v7; // rdx
  unsigned __int8 *v8; // rcx
  int v9; // r10d
  int v10; // r8d

  v4 = 0;
  ValueFromSectionAndKeyName = EmpInfParseGetValueFromSectionAndKeyName(a1, "Strings", a2);
  if ( ValueFromSectionAndKeyName )
  {
    v6 = 0;
    if ( EmpNumberOfStrings )
    {
      v7 = (unsigned __int8 **)EmpStringTable;
      while ( 1 )
      {
        v8 = *v7;
        do
        {
          v9 = v8[ValueFromSectionAndKeyName - (_QWORD)*v7];
          v10 = *v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ++v6;
        ++v7;
        if ( v6 >= EmpNumberOfStrings )
          goto LABEL_11;
      }
      v4 = 1;
    }
LABEL_11:
    *a3 = v6;
  }
  return v4 == 0 ? 0xC0000225 : 0;
}
