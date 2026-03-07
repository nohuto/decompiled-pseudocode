__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(ADAPTER_DISPLAY *this, const struct tagRECT *const a2)
{
  DXGPROCESS *Current; // rax
  unsigned int v5; // ebp
  __int64 *v6; // rdi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // r9
  LONG right; // ecx
  LONG left; // r8d
  __int64 v13; // rbp
  LONG bottom; // ecx
  LONG top; // r8d
  __int64 v16; // rcx

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2492LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pWindowClientRect != NULL", 2492LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( DXGPROCESS::IsRemoteConnection(Current) )
    return 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    v6 = (__int64 *)((char *)this + 128);
    while ( *(_DWORD *)(4000LL * v5 + *v6 + 736) != 1 || !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v5) )
    {
      v8 = *((_DWORD *)this + 24);
      if ( ++v5 >= v8 )
      {
        v9 = 0;
        if ( !v8 )
          return 261LL;
        while ( 1 )
        {
          if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v9)
            || !DmmIsTargetNonStandard(*((struct DXGADAPTER **)this + 2), *(_DWORD *)(4000LL * v9 + *v6 + 1088)) )
          {
            v10 = *v6;
            right = a2->right;
            left = a2->left;
            v13 = 4000LL * v9;
            if ( right >= *(_DWORD *)(*v6 + v13 + 636) )
              right = *(_DWORD *)(*v6 + v13 + 636);
            if ( left <= *(_DWORD *)(*v6 + v13 + 628) )
              left = *(_DWORD *)(*v6 + v13 + 628);
            if ( left < right )
            {
              bottom = a2->bottom;
              top = a2->top;
              if ( bottom >= *(_DWORD *)(v10 + v13 + 640) )
                bottom = *(_DWORD *)(v10 + v13 + 640);
              if ( top <= *(_DWORD *)(v10 + v13 + 632) )
                top = *(_DWORD *)(v10 + v13 + 632);
              if ( top < bottom )
              {
                if ( !*(_DWORD *)(v10 + v13 + 736) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v9) )
                  return 0LL;
                v16 = *v6;
                if ( a2->left >= *(_DWORD *)(*v6 + v13 + 628)
                  && a2->right <= *(_DWORD *)(v16 + v13 + 636)
                  && a2->top >= *(_DWORD *)(v16 + v13 + 632)
                  && a2->bottom <= *(_DWORD *)(v16 + v13 + 640) )
                {
                  break;
                }
              }
            }
          }
          if ( ++v9 >= *((_DWORD *)this + 24) )
            return 261LL;
        }
        return 3221225473LL;
      }
    }
    return 0LL;
  }
  return 261LL;
}
