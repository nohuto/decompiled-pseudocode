/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1C0114C50
 * Callers:
 *     <none>
 * Callees:
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C0114CDC (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  char v6; // bl
  unsigned int v7; // esi
  __int64 v8; // rdx

  v4 = a2;
  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v6 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  v7 = 0;
  if ( v6 == 1 )
  {
    if ( (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, v4) )
    {
      LOBYTE(v8) = BYTE2(a1) & 0x1F;
      v7 = HmgMarkXferable(a1, v8);
    }
  }
  GreReleaseHmgrSemaphore();
  return v7;
}
