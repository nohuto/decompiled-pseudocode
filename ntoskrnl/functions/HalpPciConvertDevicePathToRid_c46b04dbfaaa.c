__int64 __fastcall HalpPciConvertDevicePathToRid(unsigned __int16 *a1)
{
  unsigned __int16 v2; // cx
  unsigned __int8 *v3; // rdi
  unsigned __int8 v4; // al
  unsigned int v5; // esi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  unsigned __int16 v8; // cx
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int8 v11; // [rsp+50h] [rbp+8h] BYREF

  a1[2] = 0;
  v2 = a1[3];
  if ( !v2 )
    return 3221225485LL;
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_BYTE *)a1 + 3);
  v5 = 1;
  v11 = v4;
  v6 = *v3;
  v7 = v3[1];
  if ( v2 > 1u )
  {
    while ( 1 )
    {
      result = HalpPciReadSecondaryBusNumber(*a1, v4, v6, v7, (__int64)&v11);
      if ( (int)result < 0 )
        break;
      v10 = v5++;
      v6 = v3[2 * v10];
      v7 = v3[2 * v10 + 1];
      v4 = v11;
      if ( v5 >= a1[3] )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v8 = v7 | (unsigned __int16)(8 * (v6 | (unsigned __int16)(32 * v4)));
    result = 0LL;
    a1[2] = v8;
  }
  return result;
}
