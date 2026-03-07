char __fastcall IsVariableFont(struct _IFIMETRICS *a1)
{
  __int64 dpwszStyleName; // rdx
  char result; // al
  int v3; // ecx

  if ( (a1->flInfo & 0x4000001) == 0 )
    return 0;
  if ( a1->cjIfiExtra <= 0xC )
    return 0;
  dpwszStyleName = (unsigned int)a1[1].dpwszStyleName;
  result = 0;
  if ( !(_DWORD)dpwszStyleName )
    return 0;
  if ( *(ULONG *)((char *)&a1->cjIfiExtra + dpwszStyleName) )
  {
    v3 = *(ULONG *)((char *)&a1->cjThis + dpwszStyleName);
    if ( v3 == 134248052 || v3 == 134248035 )
      return 1;
  }
  return result;
}
