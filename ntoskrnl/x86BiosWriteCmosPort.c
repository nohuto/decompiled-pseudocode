__int64 __fastcall x86BiosWriteCmosPort(int a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v8; // rdx

  v3 = (unsigned __int16)a2;
  v5 = (unsigned __int16)a2;
  LOBYTE(a2) = a3;
  result = x86BiosWriteCmosPortByte(v5, a2);
  if ( a1 > 0 )
  {
    result = x86BiosWriteCmosPortByte((unsigned int)(v3 + 1), a3 >> 8);
    if ( a1 > 1 )
    {
      x86BiosWriteCmosPortByte((unsigned int)(v3 + 2), HIWORD(a3));
      LOBYTE(v8) = HIBYTE(a3);
      return x86BiosWriteCmosPortByte((unsigned int)(v3 + 3), v8);
    }
  }
  return result;
}
