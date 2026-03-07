__int64 __fastcall DrawWindowShadow(struct tagWND *this, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r14d
  __int64 RectRgn; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  HRGN ExplicitClipRgn; // rbx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  unsigned __int8 *v21; // r15
  __int64 SolidBrush; // r12
  __int128 v26; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  v26 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v9 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = v9;
  if ( RectRgn && v9 )
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
    if ( ExplicitClipRgn )
    {
      SetRectRgnIndirect(RectRgn, &v26);
      GreCombineRgn(RectRgn, RectRgn, ExplicitClipRgn, 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v26, (unsigned int)-DWORD1(v26));
      v14 = 0;
    }
    else
    {
      v12 = -(int)v26;
      LODWORD(v26) = 0;
      v13 = HIDWORD(v26) - DWORD1(v26);
      DWORD1(v26) = 0;
      HIDWORD(v26) = v13;
      DWORD2(v26) += v12;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v26), v13);
      v14 = 1;
    }
    *a5 = v14;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *((_QWORD *)PtiCurrentShared(v15) + 57)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v16) + 57) + 8LL) + 64LL) & 1) != 0
      && (v17 = *((_QWORD *)this + 5), (*(_DWORD *)(v17 + 288) & 0x4000000F) == 0x40000000)
      && (v18 = *(unsigned __int16 *)(v17 + 284), (_WORD)v18 != 96) )
    {
      v7 = GreScaleRgnToDestLogPixel(v18, RectRgn);
      if ( !v7 )
        goto LABEL_25;
    }
    else
    {
      v7 = 1;
    }
    v19 = 5;
    GreCombineRgn(v10, RectRgn, 0LL, 5LL);
    v20 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v20 = 0LL;
    }
    GreOffsetRgn(v10, v20, 5LL);
    if ( !*a5 || a4 )
    {
      v21 = (unsigned __int8 *)&unk_1C0322BA8;
      while ( 1 )
      {
        SolidBrush = GreCreateSolidBrush(*v21 | (*v21 << 16) | (*v21 << 8));
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v19);
        GreDeleteObject(SolidBrush);
        --v19;
        --v21;
        if ( v19 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_19;
        }
      }
      v7 = 0;
    }
    else
    {
      GreCombineRgn(v10, v10, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_19:
      NtGdiFillRgn(a2);
    }
  }
LABEL_25:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v10);
  return v7;
}
