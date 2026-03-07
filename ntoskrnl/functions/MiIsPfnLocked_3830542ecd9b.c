_BOOL8 __fastcall MiIsPfnLocked(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdx

  v1 = *(unsigned __int16 *)(a1 + 32);
  if ( v1 > (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    return 1LL;
  if ( (unsigned __int16)v1 > 1u )
    return 1LL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    return 1LL;
  v3 = *(_QWORD *)(a1 + 40) >> 60;
  LOBYTE(v3) = v3 & 7;
  return (_BYTE)v3 == 1
      || (*(_BYTE *)a1 & 1) == 0
      || (unsigned int)MiPfnIsNonPagedPool(a1, v3, 0x3FFFFFFFFELL, 1LL) != 0;
}
