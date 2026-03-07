__int64 __fastcall GreSetWindowOrg(HDC a1, int a2, int a3)
{
  DC *v6; // rdx
  DC *v7; // rcx
  DC *v8[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v8, -2147483132);
    v6 = v8[0];
    if ( (*(_DWORD *)(*((_QWORD *)v8[0] + 122) + 152LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v8, 1026);
      if ( v9[0] )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v9,
          (struct _POINTFIX *)(*((_QWORD *)v8[0] + 122) + 8LL),
          (struct _POINTL *)(*((_QWORD *)v8[0] + 122) + 216LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v8[0] + 122) + 152LL) &= ~0x100u;
      v6 = v8[0];
    }
    *(_DWORD *)(*((_QWORD *)v6 + 122) + 152LL) |= 0x200u;
    *(_DWORD *)(*((_QWORD *)v8[0] + 122) + 340LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v8[0] + 122) + 308LL) = a2;
    *(_DWORD *)(*((_QWORD *)v8[0] + 122) + 312LL) = a3;
    v7 = v8[0];
    *(_DWORD *)(*((_QWORD *)v8[0] + 122) + 304LL) = a2;
    DC::MirrorWindowOrg(v7);
    EXFORMOBJ::vInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v8, 0x402u, 0);
    if ( v8[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
    return 1LL;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v8);
    return 0LL;
  }
}
