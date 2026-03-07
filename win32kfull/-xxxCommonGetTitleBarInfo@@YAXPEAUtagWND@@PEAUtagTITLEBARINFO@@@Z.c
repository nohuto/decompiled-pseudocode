void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int WindowDpiLastNotify; // esi
  __int64 v8; // rax
  int v9; // ebp
  int v10; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r8
  int v13; // eax
  int WindowBordersForDpiWithCompatFlags2; // eax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rax
  char v22; // cl
  char *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax

  v4 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v4;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 16) & 8) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 288) & 0xF;
      if ( v6 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v6
             && (v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v5 + 88);
      v8 = *((_QWORD *)a1 + 5);
      v9 = *(_DWORD *)(v8 + 24);
      v10 = *(_DWORD *)(v8 + 28);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
        v13 = 0;
      else
        v13 = *(_DWORD *)(ThreadWin32Thread + 648);
      WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                              v10,
                                              v9,
                                              v12,
                                              0,
                                              WindowDpiLastNotify,
                                              v13);
      *((_DWORD *)a2 + 1) += WindowBordersForDpiWithCompatFlags2;
      *((_DWORD *)a2 + 3) -= WindowBordersForDpiWithCompatFlags2;
      *((_DWORD *)a2 + 2) += WindowBordersForDpiWithCompatFlags2;
      *((_DWORD *)a2 + 4) -= WindowBordersForDpiWithCompatFlags2;
      v15 = 22LL;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
        v15 = 2LL;
      *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(v15, WindowDpiLastNotify);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v16 = *((_DWORD *)a2 + 4);
        v17 = *((_DWORD *)a2 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v17 - v16 + 1;
        else
          *((_DWORD *)a2 + 1) += v16 - v17 - 1;
      }
      v18 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v18 + 30) & 8) != 0 || (*(_BYTE *)(v18 + 21) & 2) == 0 )
      {
        if ( !(unsigned int)xxxMNCanClose(a1) )
          *((_DWORD *)a2 + 10) |= 1u;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
          *((_DWORD *)a2 + 10) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 10) |= 0x8000u;
      }
      v19 = *((_QWORD *)a1 + 5);
      v20 = *(_BYTE *)(v19 + 30);
      if ( (v20 & 8) != 0 || (*(_BYTE *)(v19 + 21) & 2) == 0 )
      {
        if ( (v20 & 1) == 0 )
        {
          v24 = *((_DWORD *)a2 + 8);
          if ( (v20 & 2) != 0 )
            v25 = v24 | 1;
          else
            v25 = v24 | 0x8000;
          *((_DWORD *)a2 + 8) = v25;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v21 = *((_QWORD *)a1 + 5);
      v22 = *(_BYTE *)(v21 + 30);
      if ( (v22 & 8) != 0 || (*(_BYTE *)(v21 + 21) & 2) == 0 )
      {
        if ( (v22 & 2) == 0 )
        {
          v26 = *((_DWORD *)a2 + 7);
          if ( (v22 & 1) != 0 )
            v27 = v26 | 1;
          else
            v27 = v26 | 0x8000;
          *((_DWORD *)a2 + 7) = v27;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v23 = (char *)*((_QWORD *)a1 + 5);
      if ( (v23[25] & 4) == 0 || (v23[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v23[21] < 0 )
      {
        *((_DWORD *)a2 + 9) |= 8u;
      }
      *((_DWORD *)a2 + 6) = 0x8000;
    }
    else
    {
      *((_DWORD *)a2 + 5) = v4 | 0x10000;
      *(_OWORD *)((char *)a2 + 4) = 0LL;
    }
  }
  else
  {
    *((_DWORD *)a2 + 5) = v4 | 0x8000;
  }
}
