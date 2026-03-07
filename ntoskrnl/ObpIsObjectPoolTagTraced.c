char __fastcall ObpIsObjectPoolTagTraced(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  _DWORD *i; // rax

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( (ObpTraceFlags & 0x10) != 0 )
  {
    v2 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)]
                   + 192);
    for ( i = (_DWORD *)ObpTracePoolTags; v2 != *i; ++i )
    {
      if ( (unsigned int)++v1 >= 0x10 )
        return 0;
    }
  }
  return 1;
}
