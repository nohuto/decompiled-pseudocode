char *__fastcall rimObsCheckForExistingDeviceHandle(__int64 a1, PVOID a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  __int64 v6; // rbp
  char *v7; // r14
  int v8; // r8d
  bool v9; // bl
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a1 + 128);
  v4 = *(_QWORD **)(a1 + 128);
  v6 = -1LL;
  while ( v4 != v2 )
  {
    v7 = (char *)v4[2];
    v8 = *(_DWORD *)(a1 + 72);
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v7, 3u, v8, &Object) >= 0 )
    {
      v9 = Object == a2;
      ObfDereferenceObject(Object);
      if ( v9 )
        return v7;
    }
    v4 = (_QWORD *)*v4;
  }
  return (char *)v6;
}
