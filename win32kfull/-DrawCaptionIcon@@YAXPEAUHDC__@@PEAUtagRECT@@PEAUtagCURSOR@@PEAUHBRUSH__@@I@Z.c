void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  unsigned int v6; // ebp
  int DpiForSystem; // eax
  __int64 v11; // rdx
  __int64 i; // rcx
  int v13; // esi
  struct tagCURSOR **v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r8
  __int128 v20; // xmm1
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  char *OemBitmapInfoForDpi; // rax
  LONG left; // edi
  LONG top; // esi
  __int64 v29; // rcx
  int v30; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  RECT v35; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  if ( v6 != *((__int16 *)GetOemBitmapInfoForDpi(29LL, DpiForSystem) + 3)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v35.left = left;
    v35.top = top;
    v35.right = left + v6;
    v35.bottom = top + v6;
    FillRect(a1, &v35, a4);
    v30 = GetDpiForSystem(v29);
    DpiDependentMetric = GetDpiDependentMetric(20, v30);
    v33 = GetDpiForSystem(v32);
    v34 = GetDpiDependentMetric(21, v33);
    DrawIconEx(
      a1,
      (int)(v6 - DpiDependentMetric) / 2 + left + 1,
      top + (int)(v6 - v34) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v34,
      0,
      0LL,
      3);
  }
  else
  {
    v11 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 )
    {
      i = (__int64)a3 - gcachedCaptions[0];
      v13 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v13 = 1;
      i = 1LL;
      v14 = (struct tagCURSOR **)&gcachedCaptions[2];
      do
      {
        if ( *v14 == a3 )
          break;
        ++v13;
        ++i;
        v14 += 2;
      }
      while ( i < 5 );
    }
    if ( v13 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v15 = &gcachedCaptions[2];
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v15 )
            break;
          ++v13;
          v15 += 2;
        }
      }
      v16 = GetDpiForSystem(i);
      v17 = GetDpiDependentMetric(20, v16);
      BltMe4Times(gcachedCaptions[2 * v13 + 1], v6, v17, ghdcMem, a3, a5);
      *(_QWORD *)&v35.right = a3;
      *(_QWORD *)&v35.left = &gcachedCaptions[2 * v13];
      HMAssignmentLock(&v35, 0LL);
    }
    if ( v13 > 1LL )
    {
      v18 = v13 - 1LL;
      v19 = 16LL * v13;
      v13 = 1;
      do
      {
        v11 = v19 + gcachedCaptions[0];
        v19 -= 16LL;
        v20 = *(_OWORD *)v11;
        *(_OWORD *)v11 = *(_OWORD *)(v19 + gcachedCaptions[0]);
        *(_OWORD *)(v19 + gcachedCaptions[0]) = v20;
        --v18;
      }
      while ( v18 );
    }
    v21 = gcachedCaptions[2 * v13 + 1];
    v23 = PrepareHDCBITSBitmap(0LL, v11);
    if ( v23 )
    {
      v24 = GetDpiForSystem(v22);
      v25 = v21 + 1;
      if ( (a5 & 1) != 0 )
        v25 = v21;
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v25, v24);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v6,
        v6,
        v23,
        *(__int16 *)OemBitmapInfoForDpi,
        *((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  a2->left += v6;
}
