/*
 * XREFs of xxxGetUpdateRgn @ 0x1C00FC22C
 * Callers:
 *     NtUserGetUpdateRgn @ 0x1C00FAAB0 (NtUserGetUpdateRgn.c)
 * Callees:
 *     MirrorRegion @ 0x1C002779C (MirrorRegion.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     IntersectWithParents @ 0x1C00FEB48 (IntersectWithParents.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(struct tagWND *a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF

  v13 = 0LL;
  if ( a3 )
    xxxSimpleDoSyncPaint(a1);
  SetOrClrWF(0, (__int64 *)a1, 0x120u, 1);
  v5 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v5 + 136) )
  {
    v13 = *(_OWORD *)(v5 + 104);
    v6 = IntersectWithParents(a1, &v13);
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      if ( v6 )
      {
        v7 = 2;
        if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        {
          v9 = *(_DWORD *)(v8 + 104);
          v10 = -*(_DWORD *)(v8 + 108);
          HIDWORD(v13) -= *(_DWORD *)(v8 + 108);
          v11 = -v9;
          LODWORD(v13) = v11 + v13;
          DWORD2(v13) += v11;
          DWORD1(v13) += v10;
        }
        SetRectRgnIndirect(a2, &v13);
LABEL_9:
        MirrorRegion((__int64)a1, a2, 1);
        return v7;
      }
    }
    else
    {
      SetRectRgnIndirect(ghrgnInv2, &v13);
      v7 = GreCombineRgn(a2, ghrgnInv2, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 1LL);
      if ( v7 >= 2 )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
          GreOffsetRgn(
            a2,
            (unsigned int)-*(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
            (unsigned int)-*(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
        goto LABEL_9;
      }
    }
  }
  SetEmptyRgn(a2);
  return 1LL;
}
