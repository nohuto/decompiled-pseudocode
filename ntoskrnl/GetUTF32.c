__int64 __fastcall GetUTF32(unsigned __int16 *a1)
{
  int v1; // edx

  v1 = *a1;
  if ( (unsigned __int16)(v1 + 10240) > 0x7FFu )
    return *a1;
  else
    return ((v1 - 55287) << 10) + (unsigned int)a1[1];
}
