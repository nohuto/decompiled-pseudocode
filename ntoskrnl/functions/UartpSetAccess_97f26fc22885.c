char __fastcall UartpSetAccess(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r11
  __int64 (__fastcall *v5)(); // rdx
  __int64 (__fastcall *v6)(__int64, unsigned __int8); // r8
  char result; // al

  v4 = 8;
  if ( a2 )
  {
    if ( !a3 || a3 == 1 )
    {
      v5 = WriteRegisterWithIndex8;
      v6 = ReadRegisterWithIndex8;
      goto LABEL_20;
    }
    if ( a3 != 2 )
    {
      if ( a3 != 3 )
      {
        if ( a3 != 4 )
          return 0;
        v5 = WriteRegisterWithIndex64;
        v4 = 64;
        v6 = ReadRegisterWithIndex64;
        goto LABEL_20;
      }
      v5 = WriteRegisterWithIndex32;
      v6 = ReadRegisterWithIndex32;
      goto LABEL_16;
    }
    v5 = WriteRegisterWithIndex16;
    v6 = ReadRegisterWithIndex16;
LABEL_18:
    v4 = 16;
    goto LABEL_20;
  }
  if ( a3 && a3 != 1 )
  {
    if ( a3 != 2 )
    {
      if ( a3 != 3 )
        return 0;
      v5 = WritePortWithIndex32;
      v6 = ReadPortWithIndex32;
LABEL_16:
      v4 = 32;
      goto LABEL_20;
    }
    v5 = WritePortWithIndex16;
    v6 = ReadPortWithIndex16;
    goto LABEL_18;
  }
  v5 = WritePortWithIndex8;
  v6 = ReadPortWithIndex8;
LABEL_20:
  if ( ((a4 - 1) & a4) == 0 && a4 >= v4 && a4 <= 0x40u )
  {
    result = 1;
    *(_BYTE *)(a1 + 14) = a4 >> 3;
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 16) = v6;
    return result;
  }
  return 0;
}
