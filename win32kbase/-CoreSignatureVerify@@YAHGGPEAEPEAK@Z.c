__int64 __fastcall CoreSignatureVerify(unsigned __int16 a1, unsigned __int16 a2, unsigned __int8 *a3, unsigned int *a4)
{
  unsigned int v8; // r10d

  v8 = _VerifyTHQBlob(a1, a2, a3, "RSA1");
  if ( v8 )
  {
    *a4 = 1;
  }
  else
  {
    v8 = _VerifyTHQBlob(a1, a2, a3, "RSA1");
    *a4 = v8 != 0 ? 2 : 0;
  }
  return v8;
}
