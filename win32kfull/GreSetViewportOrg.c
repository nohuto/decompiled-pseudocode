__int64 __fastcall GreSetViewportOrg(HDC a1, int a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // edi
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = v10[0];
  v6 = 0;
  if ( !v10[0] )
  {
LABEL_11:
    DCOBJ::~DCOBJ((DCOBJ *)v10);
    return v6;
  }
  v7 = *(_QWORD *)(v10[0] + 976LL);
  v8 = -a2;
  if ( (*(_DWORD *)(v7 + 108) & 1) == 0 )
    v8 = a2;
  if ( (unsigned int)(v8 + 134217726) <= 0xFFFFFFC && (unsigned int)(a3 + 134217726) <= 0xFFFFFFC )
  {
    if ( (*(_DWORD *)(v7 + 152) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 1026);
      if ( v11[0] )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v11,
          (struct _POINTFIX *)(*(_QWORD *)(v10[0] + 976LL) + 8LL),
          (struct _POINTL *)(*(_QWORD *)(v10[0] + 976LL) + 216LL),
          1uLL);
      *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) &= ~0x100u;
      v5 = v10[0];
    }
    *(_DWORD *)(*(_QWORD *)(v5 + 976) + 152LL) |= 0x200u;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, -2147483132);
    *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 340LL) |= 0x2010u;
    *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 324LL) = v8;
    *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 328LL) = a3;
    EXFORMOBJ::vInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, 0x402u, 0);
    v6 = 1;
    goto LABEL_11;
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return 0LL;
}
