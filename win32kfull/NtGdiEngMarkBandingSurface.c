__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF hsurf, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edi
  int v8; // esi

  LOBYTE(a2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, a2);
  LOBYTE(v4) = 5;
  v5 = v3;
  v6 = HmgShareLockCheck(hsurf, v4);
  v7 = 1;
  if ( v6 && (*(_DWORD *)(v6 + 112) & 0x40000) != 0 )
  {
    v8 = 1;
LABEL_5:
    DEC_SHARE_REF_CNT(v6);
    goto LABEL_6;
  }
  v8 = 0;
  if ( v6 )
    goto LABEL_5;
LABEL_6:
  if ( !v8 || !EngMarkBandingSurface(hsurf) )
    v7 = 0;
  if ( v5 )
    DEC_SHARE_REF_CNT(v5);
  return v7;
}
