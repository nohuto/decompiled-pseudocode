unsigned __int64 __fastcall XmStosOp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 StringAddress; // rax
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned int v7; // esi
  int v8; // ecx
  unsigned int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned int v13; // r9d
  bool v14; // zf
  int v15; // edi
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+40h] [rbp+8h] BYREF

  XmSetSourceValue(a1, a1 + 24);
  if ( !*(_BYTE *)(v2 + 139) )
  {
    StringAddress = XmGetStringAddress(v2, 0LL, 7LL);
    v5 = *(unsigned int *)(a1 + 108);
    *(_QWORD *)(a1 + 88) = StringAddress;
    return XmStoreResult(a1, v5);
  }
  if ( *(_BYTE *)(v2 + 137) )
  {
    v7 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v2 + 28) = 0;
  }
  else
  {
    v7 = *(unsigned __int16 *)(v2 + 28);
    *(_WORD *)(v2 + 28) = 0;
  }
  v8 = *(_DWORD *)(v2 + 120);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v9 = *(_DWORD *)(a1 + 108);
      goto LABEL_9;
    }
    v16 = *(unsigned __int16 *)(a1 + 108);
    v15 = v16 << 16;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a1 + 108) | (*(unsigned __int8 *)(a1 + 108) << 8);
    v16 = v15 << 16;
  }
  v9 = v16 | v15;
LABEL_9:
  v10 = (unsigned int)(v8 + 1);
  result = 4 / v10;
  v11 = 4 % v10;
  v12 = 4 / v10;
  while ( v7 )
  {
    v18 = v7;
    result = XmGetStringAddressRange(a1, v11, v3, &v18);
    v13 = v18;
    v7 -= v18;
    v14 = (*(_DWORD *)(a1 + 16) & 0x400) == 0;
    *(_QWORD *)(a1 + 88) = result;
    if ( !v14 )
    {
      result -= v13 * (*(_DWORD *)(a1 + 120) + 1);
      *(_QWORD *)(a1 + 88) = result;
    }
    while ( v13 )
    {
      if ( v13 < (unsigned int)v12 || (result = *(_QWORD *)(a1 + 88), (result & 3) != 0) )
      {
        result = XmStoreResult(a1, v9);
        *(_QWORD *)(a1 + 88) += *(unsigned int *)(a1 + 120) + 1LL;
        v13 = v17 - 1;
      }
      else
      {
        *(_DWORD *)result = v9;
        *(_QWORD *)(a1 + 88) += 4LL;
        v13 -= v12;
      }
    }
  }
  return result;
}
