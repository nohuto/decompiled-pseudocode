/*
 * XREFs of XmInt1aReadConfigRegister @ 0x1404E8408
 * Callers:
 *     XmExecuteInt1a @ 0x1404E8114 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall XmInt1aReadConfigRegister(__int64 a1)
{
  int v2; // ecx
  char v3; // di
  int v4; // ecx
  int v5; // ecx
  int v6; // r8d
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v2 = *(unsigned __int8 *)(a1 + 24);
  v3 = -121;
  if ( (_BYTE)v2 == 9 && (*(_BYTE *)(a1 + 36) & 1) != 0 || (_BYTE)v2 == 10 && (*(_BYTE *)(a1 + 36) & 3) != 0 )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
  }
  v4 = v2 - 8;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        v6 = 4;
      else
        v6 = 0;
    }
    else
    {
      v6 = 2;
    }
  }
  else
  {
    v6 = 1;
  }
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, int))XmGetPciData)(
         *(unsigned __int8 *)(a1 + 37),
         (*(unsigned __int8 *)(a1 + 36) >> 3) | (32 * (*(_BYTE *)(a1 + 36) & 7u)),
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
    v3 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 1u;
  }
  *(_BYTE *)(a1 + 25) = v3;
  return v7;
}
