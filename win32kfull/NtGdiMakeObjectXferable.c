__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, int a2)
{
  char v5; // bl
  __int64 v6; // rdx
  unsigned int v7; // ebx

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v5 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore();
  if ( v5 == 1 && (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, a2) )
  {
    LOBYTE(v6) = BYTE2(a1) & 0x1F;
    v7 = HmgMarkXferable(a1, v6);
  }
  else
  {
    v7 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v7;
}
