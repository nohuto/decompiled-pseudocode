/*
 * XREFs of xxxGetUpdateRect @ 0x1C008BB5C
 * Callers:
 *     NtUserGetUpdateRect @ 0x1C008BA10 (NtUserGetUpdateRect.c)
 * Callees:
 *     GreTransformPoints @ 0x1C0006CF4 (GreTransformPoints.c)
 *     IntersectWithParents @ 0x1C008BCA0 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0118654 (xxxSimpleDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRect(struct tagWND *a1, _OWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 **v15; // rcx
  int v16; // r8d
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF

  v17 = 0LL;
  if ( a3 )
    xxxSimpleDoSyncPaint(a1);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(v5 + 136);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v17 = *(_OWORD *)(v5 + 104);
    }
    else
    {
      if ( (unsigned int)GreGetRgnBox(v6, &v17) < 2 )
        v17 = 0LL;
      IntersectRect(&v17, &v17, *((_QWORD *)a1 + 5) + 104LL);
    }
    if ( (unsigned int)IntersectWithParents(a1, &v17) )
    {
      if ( a1 != (struct tagWND *)GetDesktopWindow(a1, v7) )
      {
        v8 = *((_QWORD *)a1 + 5);
        v9 = *(_DWORD *)(v8 + 104);
        v10 = -*(_DWORD *)(v8 + 108);
        HIDWORD(v17) -= *(_DWORD *)(v8 + 108);
        v11 = -v9;
        LODWORD(v17) = v11 + v17;
        DWORD2(v17) += v11;
        DWORD1(v17) += v10;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v14 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v14 + 21) & 1) != 0 || *(_QWORD *)(v14 + 136) != 1LL )
        {
          GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
          v15 = *(__int64 ***)(gpDispInfo + 24LL);
          if ( v15 )
          {
            while ( v15[2] != (__int64 *)a1 || ((_DWORD)v15[8] & 2) != 0 )
            {
              v15 = (__int64 **)*v15;
              if ( !v15 )
                goto LABEL_28;
            }
            GreTransformPoints((HDC)v15[1], (struct _POINTL *)&v17, (struct _POINTFIX *)&v17, 2, 0);
          }
LABEL_28:
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        }
      }
    }
    else
    {
      v17 = 0LL;
    }
    if ( a2 )
    {
      v12 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 )
      {
        v16 = *(_DWORD *)(v12 + 112) - *(_DWORD *)(v12 + 104) - v17;
        LODWORD(v17) = *(_DWORD *)(v12 + 112) - *(_DWORD *)(v12 + 104) - DWORD2(v17);
        DWORD2(v17) = v16;
      }
      *a2 = v17;
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
