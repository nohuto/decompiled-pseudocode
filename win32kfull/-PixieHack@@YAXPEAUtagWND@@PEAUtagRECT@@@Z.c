/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0217CA8
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 */

void __fastcall PixieHack(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != (struct tagWND *)GetThreadDesktopWindow(0LL) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x22) == 2 )
  {
    v4 = (__int64 *)*((_QWORD *)a1 + 14);
    v6 = 0LL;
    while ( v4 )
    {
      v5 = v4[5];
      if ( (*(_BYTE *)(v5 + 17) & 8) == 0 && (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)IntersectRect(&v6, &a2->left, (int *)(v5 + 88)) )
        {
          SetOrClrWF(1, v4, 0x108u, 1);
          SetOrClrWF(1, v4, 0x680u, 1);
        }
      }
      v4 = (__int64 *)v4[11];
    }
  }
}
