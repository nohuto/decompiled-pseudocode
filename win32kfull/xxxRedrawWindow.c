__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, int *a2, __int64 a3, int a4)
{
  struct tagWND *v6; // r8
  struct tagWND *v8; // rbx
  struct tagWND *v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  __int128 v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v8 = a1;
  if ( !a1 )
    v8 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  v9 = v8;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)v9 + 5);
      v11 = *(_BYTE *)(v10 + 31);
      if ( (v11 & 0x10) == 0 || (v11 & 0x20) != 0 && v9 != v8 )
        break;
      if ( (*(_WORD *)(v10 + 42) & 0x2FFF) != 0x29D )
      {
        v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
        if ( v9 )
          continue;
      }
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v23 = 0LL;
    v22 = 0LL;
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion((__int64)v8, ghrgnInv0, 1);
          a3 = ghrgnInv0;
        }
        if ( v8 != (struct tagWND *)GetDesktopWindow((__int64)v8) )
          GreOffsetRgn(
            a3,
            *(unsigned int *)(*((_QWORD *)v8 + 5) + 104LL),
            *(unsigned int *)(*((_QWORD *)v8 + 5) + 108LL));
      }
      else if ( a2 )
      {
        v16 = *((_QWORD *)v8 + 5);
        a3 = ghrgnInv0;
        if ( (*(_BYTE *)(v16 + 26) & 0x40) != 0 )
        {
          v19 = *(_DWORD *)(v16 + 112) - *(_DWORD *)(v16 + 104);
          v20 = v19 - a2[2];
          v21 = v19 - *a2;
          *a2 = v20;
          a2[2] = v21;
        }
        v17 = *((_QWORD *)v8 + 3);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          if ( v18 )
            v6 = *(struct tagWND **)(v18 + 24);
        }
        if ( v8 == v6 )
          SetRectRgnIndirect(ghrgnInv0, a2);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*a2 + *(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL)),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + a2[1]),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL) + a2[2]),
            *(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + a2[3]);
      }
      else
      {
        a3 = 1LL;
      }
    }
    ThreadLock(v8, &v22);
    xxxInternalInvalidate(v8, (HRGN)a3, a4 | 0x1000);
    ThreadUnlock1(v13, v12, v14);
  }
  return 1LL;
}
