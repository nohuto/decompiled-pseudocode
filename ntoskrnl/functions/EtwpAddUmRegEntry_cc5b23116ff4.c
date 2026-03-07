__int64 __fastcall EtwpAddUmRegEntry(ULONG_PTR a1, int a2, __int16 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v6; // rsi
  int Object; // ebx
  __int64 v12; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp+7h] BYREF
  int v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+84h] [rbp+23h]
  __int128 v16; // [rsp+88h] [rbp+27h]

  v12 = 0LL;
  v6 = a4;
  v15 = 0;
  v13[1] = 0LL;
  v13[2] = 0LL;
  LOBYTE(a4) = 1;
  v13[0] = 48LL;
  v14 = 64;
  v16 = 0LL;
  Object = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)v13, a4);
  if ( Object >= 0 )
  {
    EtwpInitializeRegEntry(a1, 1, a2, v6, 0LL, a3, 0LL);
    ObReferenceObjectByPointer(0LL, 0, EtwpRegistrationObjectType, 0);
    Object = ObInsertObjectEx(0LL, 0LL, 0, (__int64)&v12, a6);
    *a5 = 0LL;
    if ( Object >= 0 )
      ObfDereferenceObject(0LL);
  }
  return (unsigned int)Object;
}
