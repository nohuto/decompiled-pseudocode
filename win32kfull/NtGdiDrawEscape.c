__int64 __fastcall NtGdiDrawEscape(HDC a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  _QWORD *inited; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int16 v13; // [rsp+38h] [rbp-28h]
  _BYTE v14[32]; // [rsp+40h] [rbp-20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v5 = a2;
  v12 = 0LL;
  v13 = 0;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    inited = umptr_r<char>::init_probe((__int64)v14, a4, a3);
    v7 = *inited;
    v11 = inited[1];
    v8 = inited[2];
    v13 = *((_WORD *)inited + 12);
    v10 = v7;
    v12 = v8;
    if ( !v7 )
      return 0xFFFFFFFFLL;
    a2 = v5;
  }
  else if ( a3 )
  {
    return 0xFFFFFFFFLL;
  }
  return GreDrawEscape(a1, a2, &v10);
}
