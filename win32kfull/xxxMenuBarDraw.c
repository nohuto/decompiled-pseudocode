__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r8
  int v23; // [rsp+28h] [rbp-39h]
  _QWORD v24[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-19h]
  __int128 v26; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1h]
  _DWORD v28[4]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v29; // [rsp+78h] [rbp+17h]
  int v30; // [rsp+80h] [rbp+1Fh]
  int v31; // [rsp+84h] [rbp+23h]
  int v32; // [rsp+88h] [rbp+27h]
  int v33; // [rsp+8Ch] [rbp+2Bh]
  __int64 v34; // [rsp+90h] [rbp+2Fh]
  int v35; // [rsp+C8h] [rbp+67h]

  SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
  v8 = a1[21];
  v27 = 0LL;
  v26 = 0LL;
  v35 = 0;
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v24, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
  {
    v9 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0 && *(_QWORD *)(a1[2] + 432LL) == gpqForeground
      || (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
          *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u)
      && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x80u) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 40LL) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 40LL) |= 0x10u;
    }
    v11 = v25;
    if ( !v25 )
      v11 = *(_QWORD *)v24[0];
    *(_DWORD *)(*(_QWORD *)(v11 + 40) + 40LL) |= 0x200u;
    ThreadLock(v11, &v26);
    v12 = GetCaptionHeight((__int64)a1) + a4;
    v13 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    if ( a1 != *(_QWORD **)(*(_QWORD *)v24[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v24[0] + 64LL)
      || !*(_DWORD *)(*(_QWORD *)v24[0] + 68LL) )
    {
      xxxMenuBarCompute(
        (unsigned int)v24,
        (_DWORD)a1,
        v12,
        a3,
        *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    }
    if ( *(_DWORD *)(*(_QWORD *)v24[0] + 64LL) > v13
      || v12 + *(_DWORD *)(*(_QWORD *)v24[0] + 68LL) > *(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v35 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v13,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v28[0] = a3;
    v28[1] = v12;
    v28[2] = *(_DWORD *)(*(_QWORD *)v24[0] + 64LL);
    v28[3] = *(_DWORD *)(*(_QWORD *)v24[0] + 68LL);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL);
    }
    else if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      v14 = *(_QWORD *)(gpsi + 4936LL);
    }
    else
    {
      v14 = *(_QWORD *)(gpsi + 4728LL);
    }
    v29 = v14;
    v30 = a3;
    v15 = *(_QWORD *)v24[0];
    v33 = 1;
    v31 = v12 + *(_DWORD *)(v15 + 68);
    v16 = a1[5];
    v32 = *(_DWORD *)(*(_QWORD *)v24[0] + 64LL);
    if ( (*(_BYTE *)(v16 + 25) & 3) == 0 || (*(_BYTE *)(v16 + 20) & 8) != 0 )
      v17 = *(_QWORD *)(gpsi + 4744LL);
    else
      v17 = *(_QWORD *)(gpsi + 4816LL);
    v34 = v17;
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v28, 2u, v23);
    v18 = a1[5];
    if ( (*(_BYTE *)(v18 + 25) & 3) == 0 || (*(_BYTE *)(v18 + 20) & 8) != 0 )
      v19 = *(_QWORD *)(gpsi + 4744LL);
    else
      v19 = *(_QWORD *)(gpsi + 4816LL);
    v20 = GreSelectBrush(a2, v19);
    xxxMenuDraw(a2);
    GreSelectBrush(a2, v20);
    if ( v35 )
      RecalcDCVisRgn(a2);
    v9 = *(_DWORD *)(*(_QWORD *)v24[0] + 68LL) + 1;
    ThreadUnlockMenuNoModify((__int64)&v26, *(_QWORD *)v24[0], v21);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
  return v9;
}
