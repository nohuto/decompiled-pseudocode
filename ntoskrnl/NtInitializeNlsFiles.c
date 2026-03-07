__int64 __fastcall NtInitializeNlsFiles(_QWORD *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  _DWORD v9[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h] BYREF
  __int64 v11; // [rsp+70h] [rbp-18h] BYREF
  int v12; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 0;
  Object = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return 3221225659LL;
  v4 = 0x7FFFFFFF0000LL;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v5 = (__int64)a1;
  *(_QWORD *)v5 = *(_QWORD *)v5;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v4 = (__int64)a2;
  *(_DWORD *)v4 = *(_DWORD *)v4;
  result = ZwQueryDefaultLocale(0LL, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( (int)result >= 0 )
    {
      v10 = 0LL;
      v9[0] = 0;
      v9[1] = 0;
      v11 = 0LL;
      v7 = MmMapViewOfSection(
             (int)Object,
             (__int64)KeGetCurrentThread()->ApcState.Process,
             &v10,
             0LL,
             0,
             (__int64)v9,
             &v11,
             1,
             0x400000,
             2);
      ObfDereferenceObject(Object);
      if ( v7 >= 0 )
      {
        *a1 = v10;
        *a2 = v12;
      }
      return (unsigned int)v7;
    }
  }
  return result;
}
