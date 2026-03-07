__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // r8d

  v6 = 0;
  if ( KeGetCurrentIrql() <= 1u )
  {
    if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C013B7F8 && a1 == qword_1C013B800 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v8 = *(_DWORD *)(v7 + 236);
          if ( v8 != 2 && (*(_DWORD *)(v7 + 240) != 2 || ((v8 - 3) & 0xFFFFFFFC) != 0 || v8 == 4) )
            *(_BYTE *)(v7 + 3920) |= 4u;
        }
      }
      if ( qword_1C013B740 == a1 )
      {
        memmove(a2, &xmmword_1C013B750, 0x20uLL);
        if ( a3 )
          *a3 ^= ((unsigned __int8)dword_1C013B83C ^ (unsigned __int8)*a3) & 0xF;
      }
      else
      {
        WdLogSingleEntry1(4LL, 0LL);
        *a2 = 0LL;
        a2[1] = 0LL;
        *((_DWORD *)a2 + 6) = -1;
        if ( a3 )
          *a3 &= 0xFFFFFFF0;
      }
    }
    else
    {
      v6 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
    }
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
  }
  return v6;
}
