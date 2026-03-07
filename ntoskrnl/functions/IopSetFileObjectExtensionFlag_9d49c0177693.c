__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a3 )
  {
    result = IopAllocateFileObjectExtension(a1, (__int64 *)&v6);
    if ( (int)result < 0 )
      return result;
    v5 = v6;
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 208);
    if ( !v5 )
      return 3221226021LL;
  }
  *v5 |= a2;
  return 0LL;
}
