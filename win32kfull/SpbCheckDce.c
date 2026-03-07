char __fastcall SpbCheckDce(__int64 a1)
{
  __int64 v2; // rcx
  int Bounds; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  int v7; // edx
  LONG bottom; // r14d
  int v9; // ecx
  LONG left; // edi
  LONG right; // esi
  LONG top; // r15d
  unsigned int v13; // r12d
  __int64 StyleWindow; // rax
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  struct tagWND *v18; // rbx
  struct tagRECT v20; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v20 = 0LL;
  Bounds = GreGetBounds(v2, &v20, 0LL);
  if ( Bounds )
  {
    v4 = *(_QWORD *)(a1 + 88);
    if ( !v4 || (v5 = *(_DWORD *)(a1 + 64), (v5 & 0x4000) != 0) || v5 < 0 )
    {
      bottom = v20.bottom;
      right = v20.right;
      top = v20.top;
      left = v20.left;
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 40);
      v7 = *(_DWORD *)(v6 + 32);
      bottom = v7 + v20.bottom;
      v9 = *(_DWORD *)(v6 + 28);
      left = v9 + v20.left;
      right = v9 + v20.right;
      top = v7 + v20.top;
      v20.left += v9;
      v20.top += v7;
      v20.right += v9;
      v20.bottom += v7;
    }
    v13 = *(_DWORD *)(a1 + 64);
    if ( (v13 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
      if ( StyleWindow )
      {
        v15 = *(_QWORD *)(StyleWindow + 40);
        v16 = *(_DWORD *)(v15 + 92);
        v17 = *(_DWORD *)(v15 + 88);
        v20.left = v17 + left;
        v20.right = v17 + right;
        v20.top = v16 + top;
        v20.bottom = v16 + bottom;
      }
    }
    v18 = *(struct tagWND **)(a1 + 16);
    Bounds = IntersectRect(&v20, &v20, *((_QWORD *)v18 + 5) + 88LL);
    if ( Bounds )
      LOBYTE(Bounds) = SpbCheckRect(v18, &v20, v13);
  }
  return Bounds;
}
