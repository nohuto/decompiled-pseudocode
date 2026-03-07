_BOOL8 __fastcall IsMetaRedirectionBitmap(struct _SURFOBJ *a1)
{
  return a1->iType == 3 && (HIDWORD(a1[1].hsurf) & 9) != 0;
}
