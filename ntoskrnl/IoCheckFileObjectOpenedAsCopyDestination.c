bool __fastcall IoCheckFileObjectOpenedAsCopyDestination(__int64 a1)
{
  _DWORD *v1; // rax
  char v2; // cl

  v1 = *(_DWORD **)(a1 + 208);
  v2 = 0;
  if ( v1 )
    return (*v1 & 0x40) != 0;
  return v2;
}
