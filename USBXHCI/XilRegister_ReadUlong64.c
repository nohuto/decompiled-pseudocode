__int64 __fastcall XilRegister_ReadUlong64(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( *(_BYTE *)(v2 + 601) )
  {
    Register_ReadSecureMmio(a1, a2, 3, 1u, &v4);
  }
  else
  {
    if ( (*(_QWORD *)(v2 + 336) & 1) == 0 )
      return *(_QWORD *)a2;
    return *(_QWORD *)a2;
  }
  return v4;
}
