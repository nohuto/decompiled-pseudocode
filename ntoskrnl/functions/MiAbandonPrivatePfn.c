__int64 __fastcall MiAbandonPrivatePfn(__int64 a1, int a2)
{
  __int64 v2; // r9
  _QWORD *v4; // rdi
  __int64 v5; // r10
  char v6; // si
  __int64 v8; // r10
  char v9; // r11
  char v10; // r8

  v2 = 0LL;
  if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(a1 + 16)) )
    *(_BYTE *)(a1 + 34) = v10 | 0x10;
  v4 = (_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( (v5 & 2) != 0 )
  {
    if ( a2
      || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(
                         *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
                         v4) )
    {
      v9 = 1;
    }
    else
    {
      v2 = v8;
    }
    v6 = 1;
    if ( !v9 )
    {
LABEL_9:
      *v4 &= ~2uLL;
      return v2;
    }
LABEL_10:
    v2 = MiCapturePageFileInfoInline(a1 + 16, 1LL, 1LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
    if ( !v6 )
      return v2;
    goto LABEL_9;
  }
  if ( a2 && (v5 & 4) != 0 )
    goto LABEL_10;
  return v2;
}
