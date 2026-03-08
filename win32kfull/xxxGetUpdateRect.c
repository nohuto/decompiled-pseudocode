/*
 * XREFs of xxxGetUpdateRect @ 0x1C00FE78C
 * Callers:
 *     NtUserGetUpdateRect @ 0x1C00FE640 (NtUserGetUpdateRect.c)
 * Callees:
 *     GreTransformPoints @ 0x1C0006C84 (GreTransformPoints.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     IntersectWithParents @ 0x1C00FEB48 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRect(struct tagWND *a1, _OWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 **v14; // rcx
  int v15; // r8d
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF

  v16 = 0LL;
  if ( a3 )
    xxxSimpleDoSyncPaint(a1);
  SetOrClrWF(0, (__int64 *)a1, 0x120u, 1);
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(v5 + 136);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v16 = *(_OWORD *)(v5 + 104);
    }
    else
    {
      if ( (unsigned int)GreGetRgnBox(v6, &v16) < 2 )
        v16 = 0LL;
      IntersectRect(&v16, &v16, *((_QWORD *)a1 + 5) + 104LL);
    }
    if ( (unsigned int)IntersectWithParents(a1, &v16) )
    {
      if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      {
        v7 = *((_QWORD *)a1 + 5);
        v8 = *(_DWORD *)(v7 + 104);
        v9 = -*(_DWORD *)(v7 + 108);
        HIDWORD(v16) -= *(_DWORD *)(v7 + 108);
        v10 = -v8;
        LODWORD(v16) = v10 + v16;
        DWORD2(v16) += v10;
        DWORD1(v16) += v9;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v13 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v13 + 21) & 1) != 0 || *(_QWORD *)(v13 + 136) != 1LL )
        {
          GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
          v14 = *(__int64 ***)(gpDispInfo + 24LL);
          if ( v14 )
          {
            while ( v14[2] != (__int64 *)a1 || ((_DWORD)v14[8] & 2) != 0 )
            {
              v14 = (__int64 **)*v14;
              if ( !v14 )
                goto LABEL_28;
            }
            GreTransformPoints((HDC)v14[1], (struct _POINTL *)&v16, (struct _POINTL *)&v16, 2, 0);
          }
LABEL_28:
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        }
      }
    }
    else
    {
      v16 = 0LL;
    }
    if ( a2 )
    {
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
      {
        v15 = *(_DWORD *)(v11 + 112) - *(_DWORD *)(v11 + 104) - v16;
        LODWORD(v16) = *(_DWORD *)(v11 + 112) - *(_DWORD *)(v11 + 104) - DWORD2(v16);
        DWORD2(v16) = v15;
      }
      *a2 = v16;
    }
    return 1LL;
  }
  else
  {
    if ( a2 )
      *a2 = 0LL;
    return 0LL;
  }
}
