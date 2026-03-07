BOOL __stdcall WNDOBJ_bEnum(WNDOBJ *pwo, ULONG cj, ULONG *pul)
{
  return XCLIPOBJ::bEnum((XCLIPOBJ *)pwo, cj, (char *)pul, 0LL);
}
