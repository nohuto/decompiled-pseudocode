__int64 __fastcall sub_140143B20(__int64 a1, int *a2)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *a2;
  result = (*a2 & 1) != 0;
  if ( (*a2 & 2) != 0 )
    result = (unsigned int)result | 2;
  if ( (v2 & 4) != 0 )
    result = (unsigned int)result | 4;
  if ( (v2 & 8) != 0 )
    result = (unsigned int)result | 8;
  if ( (v2 & 0x10) != 0 )
    result = (unsigned int)result | 0x10;
  if ( (v2 & 0x20) != 0 )
    return (unsigned int)result | 0x20;
  return result;
}
