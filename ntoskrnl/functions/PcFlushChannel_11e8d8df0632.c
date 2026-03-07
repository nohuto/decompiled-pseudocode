unsigned __int8 __fastcall PcFlushChannel(__int64 *a1)
{
  unsigned __int8 v1; // r8
  __int64 v2; // rdx
  unsigned __int8 result; // al
  unsigned __int16 v4; // dx

  v1 = *((_BYTE *)a1 + 16);
  v2 = *a1;
  result = v1 | 4;
  *((_BYTE *)a1 + 19) = v1 | 4;
  if ( v1 >= 4u )
    v4 = v2 + 20;
  else
    v4 = v2 + 10;
  __outbyte(v4, result);
  return result;
}
