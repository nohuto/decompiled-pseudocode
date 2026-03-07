__int64 (__fastcall *__fastcall CmRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5))(__int64, __int64, _QWORD, __int64, __int64 *)
{
  DEVPROPKEY **v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  DEVPROPKEY **v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, __int64 *); // rax
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  int v17; // [rsp+38h] [rbp-10h]
  int v18; // [rsp+3Ch] [rbp-Ch]

  v18 = 0;
  if ( a3 == 1 )
  {
    v9 = &CmDeviceRegPropMap;
    v10 = a3 - 1 + 33;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_9;
    v9 = &CmClassRegPropMap;
    v10 = 9;
  }
  v11 = 0;
  do
  {
    v12 = v9;
    if ( *((_DWORD *)v9 + 3) == a5 )
      break;
    v12 = 0LL;
    ++v11;
    v9 += 3;
  }
  while ( v11 < v10 );
  if ( v12 && *v12 )
  {
    v13 = CmMapCmObjectTypeToPnpObjectType(a3);
    PnpObjectRaisePropertyChangeEvent(a1, a2, v13, a4, 0LL, v14);
  }
LABEL_9:
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(a1 + 512);
  if ( result )
  {
    v16 = a4;
    v17 = a5;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64 *))result(a1, a2, a3, 4LL, &v16);
  }
  return result;
}
