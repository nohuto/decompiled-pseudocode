char __fastcall XmInt1aReadConfigRegister(__int64 a1)
{
  int v1; // edx
  _BYTE *v3; // rcx
  char v4; // di
  _BYTE *v5; // r9
  int v6; // r8d
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 24);
  v9 = 0;
  v3 = (_BYTE *)(a1 + 36);
  v4 = -121;
  if ( (_BYTE)v1 == 9 && (*v3 & 1) != 0 || (v5 = v3, (_BYTE)v1 == 10) && (*v3 & 3) != 0 )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    v5 = v3;
    *(_BYTE *)(a1 + 25) = -121;
  }
  switch ( v1 )
  {
    case 8:
      v6 = 1;
      break;
    case 9:
      v6 = 2;
      break;
    case 10:
      v6 = 4;
      break;
    default:
      v6 = 0;
      break;
  }
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, int))XmGetPciData)(
         *(unsigned __int8 *)(a1 + 37),
         ((unsigned __int8)*v5 >> 3) | (32 * (*v5 & 7u)),
         &v9,
         *(unsigned __int16 *)(a1 + 52),
         v6);
  if ( v7 )
  {
    switch ( *(_BYTE *)(a1 + 24) )
    {
      case 8:
        LOBYTE(v7) = v9;
        *(_BYTE *)(a1 + 28) = v9;
        break;
      case 9:
        LOBYTE(v7) = v9;
        *(_WORD *)(a1 + 28) = v9;
        break;
      case 0xA:
        LOBYTE(v7) = v9;
        *(_DWORD *)(a1 + 28) = v9;
        break;
    }
    *(_DWORD *)(a1 + 16) &= ~1u;
    v4 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 1u;
  }
  *(_BYTE *)(a1 + 25) = v4;
  return v7;
}
