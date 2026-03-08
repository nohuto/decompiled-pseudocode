/*
 * XREFs of AlignRects @ 0x1C00CC4F8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z @ 0x1C00CC4E0 (-DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z.c)
 * Callees:
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1C02474D8 (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C0247A38 (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall AlignRects(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  struct tagRECT *v4; // rdi
  __int64 v5; // rbp
  LONG left; // r8d
  LONG top; // r9d
  LONG *p_bottom; // rdx
  __int64 result; // rax

  v4 = &a1[a2];
  v5 = a3;
  if ( a2 <= 1 || (RemoveOverlaps(a1, a2), result = RemoveGaps(a1, a2), (_DWORD)result) )
  {
    left = a1[v5].left;
    top = a1[v5].top;
    if ( a1 < v4 )
    {
      p_bottom = &a1->bottom;
      do
      {
        *(p_bottom - 3) -= left;
        *(p_bottom - 1) -= left;
        *p_bottom -= top;
        *(p_bottom - 2) -= top;
        p_bottom += 4;
      }
      while ( p_bottom - 3 < (LONG *)v4 );
    }
    return 1LL;
  }
  return result;
}
