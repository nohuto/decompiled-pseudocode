char __fastcall UsbhInternalValidateCommonDescriptorHeader(
        __int64 a1,
        unsigned __int8 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // esi
  _BYTE *v7; // r11
  __int64 v8; // rdi
  char result; // al
  __int64 v10; // r9
  int v11; // edx
  int v12; // r8d
  unsigned int v13; // ecx
  int v14; // r10d

  v5 = *a3 + a3[4] - (_DWORD)a2;
  v6 = a3[2] - (_DWORD)a2;
  v7 = a2;
  v8 = a1;
  result = 1;
  if ( v5 < 2 )
  {
    v10 = v5;
    v11 = 256;
    v12 = 1447248945;
LABEL_11:
    Log(a1, v11, v12, v10, 0LL);
    return 0;
  }
  v13 = *a2;
  v14 = 256;
  *a4 = v13;
  if ( v13 > v5 )
  {
    Log(v8, 256, 1447248946, v13, v5);
    result = 0;
    *a4 = v5;
  }
  if ( (unsigned __int8)*v7 > v6 )
  {
    Log(v8, v14, 1447248947, (unsigned __int8)*v7, v6);
    result = 0;
  }
  if ( *v7 < 2u )
  {
    Log(v8, v14, 1447248948, (unsigned __int8)*v7, 0LL);
    result = 0;
  }
  if ( !*v7 )
  {
    v10 = 0LL;
    v12 = 1447248949;
    v11 = v14;
    a1 = v8;
    goto LABEL_11;
  }
  return result;
}
