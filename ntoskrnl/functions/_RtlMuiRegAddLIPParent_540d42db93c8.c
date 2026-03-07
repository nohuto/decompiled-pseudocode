__int64 __fastcall RtlMuiRegAddLIPParent(__int64 a1, __int64 a2, unsigned int a3, WCHAR *a4)
{
  __int64 v4; // rsi
  __int64 v8; // r8
  unsigned int v9; // edx
  __int16 v10; // r10
  __int64 v11; // rcx
  int v12; // r9d
  __int16 v13; // r11
  _WORD *v14; // r8
  int v15; // ecx
  __int16 v16; // ax
  int v18; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING v19[3]; // [rsp+28h] [rbp-30h] BYREF
  __int16 v20; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  v18 = 0;
  v20 = -1;
  v19[0] = 0LL;
  if ( !a1 || !a2 || a3 >= 4 || !a4 || !*a4 )
    return 3221225485LL;
  RtlInitUnicodeString(v19, a4);
  if ( !RtlCultureNameToLCID(&v19[0].Length, &v18) )
    return (unsigned int)-1073741823;
  LOBYTE(v8) = 1;
  v9 = RtlpMuiRegGetOrAddString(a1, a4, v8, &v20);
  if ( (v9 & 0x80000000) != 0 )
    return (unsigned int)-1073741823;
  v10 = v20;
  if ( v20 < 0 )
    return (unsigned int)-1073741823;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = 0;
  v13 = v18;
  v14 = *(_WORD **)(v11 + 16);
  v15 = *(unsigned __int16 *)(v11 + 6);
  if ( !v15 )
  {
LABEL_19:
    if ( (_WORD)v18 )
    {
      *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & ~(3 << (2 * v4)) | (1 << (2 * v4));
      *(_WORD *)(a2 + 2 * v4 + 12) = v13;
      return v9;
    }
    if ( v20 > 0 )
    {
      *(_WORD *)(a2 + 8) = (3 << (2 * v4)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * v4));
      *(_WORD *)(a2 + 2 * v4 + 12) = v10;
      return v9;
    }
    return (unsigned int)-1073741823;
  }
  while ( 1 )
  {
    if ( (*v14 & 0x3024) != 0x20 )
      goto LABEL_18;
    if ( (((unsigned __int16)v18 - 4096) & 0xFFFFFBFF) != 0 )
      break;
    if ( v14[3] == v20 )
      goto LABEL_15;
LABEL_18:
    ++v12;
    v14 += 14;
    if ( v12 >= v15 )
      goto LABEL_19;
  }
  if ( v14[2] != (_WORD)v18 )
    goto LABEL_18;
  v16 = v14[3];
  if ( v16 >= 0 && v16 != v20 )
    return (unsigned int)-1073741823;
LABEL_15:
  if ( (v12 & 0x8000u) != 0 )
    goto LABEL_19;
  *(_WORD *)(a2 + 8) = (2 << (2 * v4)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * v4));
  *(_WORD *)(a2 + 2 * v4 + 12) = v12;
  return v9;
}
