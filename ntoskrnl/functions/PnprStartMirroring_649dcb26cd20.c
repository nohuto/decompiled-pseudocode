__int64 PnprStartMirroring()
{
  __int64 v0; // rax

  v0 = PnprContext;
  *(_DWORD *)(PnprContext + 64) |= 4u;
  *(_BYTE *)(v0 + 208) = 0;
  return 0LL;
}
