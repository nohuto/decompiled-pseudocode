__int64 __fastcall GreTearDownSprites(HDEV a1, struct _RECTL *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi

  if ( ((_DWORD)a1[10] & 1) == 0 )
    return 0LL;
  if ( !*((_DWORD *)a1 + 35) )
    return bSpTearDownSprites(a1, a2, 0);
  v5 = 0;
  do
    result = bSpTearDownSprites(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v5++), a2, 0);
  while ( v5 < *((_DWORD *)a1 + 35) );
  return result;
}
