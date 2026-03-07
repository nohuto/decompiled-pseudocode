__int64 __fastcall PiRegStateOpenClassKey(unsigned int *a1, __int64 a2, int a3, int *a4, _QWORD *a5)
{
  __int64 result; // rax
  int v8; // r8d
  int v9; // r9d
  HANDLE v10; // rbx
  int WstrKey; // eax
  int v12; // esi
  int v13; // edi
  int v14; // [rsp+70h] [rbp-61h] BYREF
  int v15; // [rsp+74h] [rbp-5Dh]
  HANDLE Handle; // [rsp+78h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-51h] BYREF
  wchar_t Dest[40]; // [rsp+90h] [rbp-41h] BYREF

  v15 = a3;
  Handle = 0LL;
  v17[0] = 0LL;
  *a5 = 0LL;
  v14 = 0;
  if ( a4 )
    *a4 = 0;
  result = CmRegUtilOpenExistingWstrKey(
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
             131097LL,
             &Handle);
  if ( (int)result >= 0 )
  {
    _snwprintf(
      Dest,
      0x27uLL,
      L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
      *a1,
      *((unsigned __int16 *)a1 + 2),
      *((unsigned __int16 *)a1 + 3),
      *((unsigned __int8 *)a1 + 8),
      *((unsigned __int8 *)a1 + 9),
      *((unsigned __int8 *)a1 + 10),
      *((unsigned __int8 *)a1 + 11),
      *((unsigned __int8 *)a1 + 12),
      *((unsigned __int8 *)a1 + 13),
      *((unsigned __int8 *)a1 + 14),
      *((unsigned __int8 *)a1 + 15));
    v10 = Handle;
    Dest[38] = 0;
    if ( v15 )
    {
      WstrKey = CmRegUtilCreateWstrKey((_DWORD)Handle, (unsigned int)Dest, v8, v9, 0LL, (__int64)&v14, (__int64)v17);
      v12 = v14;
    }
    else
    {
      WstrKey = CmRegUtilOpenExistingWstrKey(Handle, Dest, 983103LL, v17);
      v12 = 2;
    }
    v13 = WstrKey;
    ZwClose(v10);
    if ( v13 >= 0 )
    {
      *a5 = v17[0];
      if ( a4 )
        *a4 = v12;
    }
    return (unsigned int)v13;
  }
  return result;
}
