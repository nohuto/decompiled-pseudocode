__int64 __fastcall XilRegister_ReadUlong(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 601LL) )
    return *a2;
  v3 = 0;
  Register_ReadSecureMmio(a1, (int)a2, 2, 1, &v3);
  return v3;
}
