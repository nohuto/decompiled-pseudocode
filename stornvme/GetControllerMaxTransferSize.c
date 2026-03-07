__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = (unsigned int)a1[54];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[10];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[15];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
