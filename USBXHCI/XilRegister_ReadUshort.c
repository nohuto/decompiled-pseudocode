__int64 __fastcall XilRegister_ReadUshort(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 601LL) )
    return *a2;
  v3 = 0;
  Register_ReadSecureMmio(a1, (__int64)a2, 1, 1u, &v3);
  return v3;
}
