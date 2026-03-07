char __fastcall ProcessNvmeHealthInfoLog(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 SrbExtension; // rax
  __int64 LunExtension; // r14
  char v9; // bp
  char v10; // al
  char v11; // al
  char v12; // al

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 64) & 0x80u) != 0 )
    *a3 |= 4u;
  if ( (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    *a3 |= 8u;
  if ( (*(_DWORD *)(a1 + 64) & 0x200) != 0 )
    *a3 |= 0x10u;
  v10 = *(_BYTE *)(a1 + 148);
  if ( v10 )
    a3[3] = v10;
  v11 = *(_BYTE *)(a1 + 149);
  if ( v11 )
    a3[4] = v11;
  if ( (*(_BYTE *)(a1 + 148) || *(_BYTE *)(a1 + 149)) && (unsigned __int8)a3[3] < (unsigned __int8)a3[4] )
    *a3 |= 1u;
  v12 = *a3;
  if ( *a3 && v12 != *(_BYTE *)(a1 + 26) )
  {
    *(_BYTE *)(a1 + 26) = v12;
    if ( *(_BYTE *)(a1 + 23) )
      StorPortExtendedFunction(87LL, a1, LunExtension, 2LL);
    if ( a4 == 9 && (*a3 & 2) != *a3 )
    {
      v9 = 1;
      *(_DWORD *)(a1 + 4232) = *(_DWORD *)(a1 + 4232) & ~*(unsigned __int8 *)(a1 + 26) | 2;
    }
  }
  if ( (unsigned __int8)a3[5] >= 0x5Fu && *(_BYTE *)(a1 + 23) && !*(_BYTE *)(a1 + 27) )
  {
    StorPortExtendedFunction(85LL, a1, LunExtension, 2LL);
    *(_BYTE *)(a1 + 27) = 1;
  }
  if ( (unsigned __int8)a3[3] <= 2u && *(_BYTE *)(a1 + 23) && !*(_BYTE *)(a1 + 28) )
  {
    StorPortExtendedFunction(85LL, a1, LunExtension, 2LL);
    *(_BYTE *)(a1 + 28) = 1;
  }
  return v9;
}
