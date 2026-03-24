/*
 * XREFs of ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02B91B0
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B8C28 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02B8AC4 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02B8B7C (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C02B96EC (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 */

__int64 __fastcall STACKOBJ::bPushMergeScrScan(STACKOBJ *this)
{
  __int64 v1; // rbp
  int v2; // esi
  int v4; // edi
  unsigned int v5; // edi
  unsigned int v6; // edx
  unsigned int v7; // r14d
  _DWORD *v8; // rdx
  __int64 v9; // r9

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v4 = *(_DWORD *)(v1 + 4);
  if ( v4 )
  {
    v5 = 8 * v4 + 24;
    v6 = v5 + *((_DWORD *)this + 1);
    v7 = v5;
    if ( v6 > *(_DWORD *)this && !(unsigned int)STACKOBJ::bExpand(this, v6) )
      return 0LL;
    *(_QWORD *)(v1 + 16) = *((_QWORD *)this + 1);
    if ( *((_DWORD *)this + 1) )
    {
      v8 = (_DWORD *)*((_QWORD *)this + 1);
      v9 = (unsigned int)v8[2];
      if ( *v8 == **((_DWORD **)this + 2) )
      {
        v5 = v9 + v5 - 24;
        v7 -= 24;
        if ( v5 > *(_DWORD *)(*((_QWORD *)this + 3) + 8LL) && !(unsigned int)STACKOBJ::bExpandScanline(this, v5, 1) )
          return 0LL;
        **((_DWORD **)this + 3) = **((_DWORD **)this + 2);
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = *(_DWORD *)(*((_QWORD *)this + 2) + 4LL)
                                                 + *(_DWORD *)(*((_QWORD *)this + 1) + 4LL);
        vMergeSpans(
          (struct _SPAN *)(*((_QWORD *)this + 1) + 24LL),
          (struct _SPAN *)(*((_QWORD *)this + 1) + 8 * (*(unsigned int *)(*((_QWORD *)this + 1) + 4LL) + 3LL)),
          (struct _SPAN *)(*((_QWORD *)this + 2) + 24LL),
          (struct _SPAN *)(*((_QWORD *)this + 2) + 8 * (*(unsigned int *)(*((_QWORD *)this + 2) + 4LL) + 3LL)),
          (struct _SPAN *)(*((_QWORD *)this + 3) + 24LL));
        v1 = *((_QWORD *)this + 3);
        v2 = *((_DWORD *)this + 1);
      }
      else
      {
        v2 = *((_DWORD *)this + 1);
        *((_QWORD *)this + 1) = (char *)v8 + v9;
      }
    }
    *((_DWORD *)this + 1) = v2 + v7;
    *(_DWORD *)(v1 + 8) = v5;
    memmove(*((void **)this + 1), (const void *)v1, v5);
  }
  return 1LL;
}
