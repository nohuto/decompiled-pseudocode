void __fastcall HdlspPutData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax

  if ( a2 )
  {
    v3 = 0;
    v4 = a2;
    v5 = 0LL;
    do
    {
      LOBYTE(a2) = *(_BYTE *)(v5 + a1);
      InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2, a3);
      v5 = ++v3;
    }
    while ( v3 < v4 );
  }
}
