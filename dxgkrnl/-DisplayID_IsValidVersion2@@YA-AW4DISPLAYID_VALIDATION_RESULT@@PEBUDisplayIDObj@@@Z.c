__int64 __fastcall DisplayID_IsValidVersion2(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || !*(_DWORD *)(a1 + 20) || !*(_BYTE *)(a1 + 16) )
    return 1LL;
  if ( (**(_BYTE **)a1 & 0xF0) != 0x20 )
    return 2LL;
  if ( (int)DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK((const struct DisplayIDObj *)a1, &v4) < 0 )
    return 3LL;
  if ( (int)DisplayID_GetBlock(a1, 34LL, &v4) < 0 )
    return 4LL;
  if ( (int)DisplayID_GetBlock(a1, 33LL, &v4) < 0 )
    return 5;
  return v1;
}
