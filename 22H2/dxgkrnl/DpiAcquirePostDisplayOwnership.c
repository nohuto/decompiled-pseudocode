/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x1C0399F38
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1C0398A40 (DpAcquirePostDisplayOwnership.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x1C0398A60 (DpAcquirePostDisplayOwnership2.c)
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C0398DA0 (DpGetPostDisplayInfoPlusEdid.c)
 * Callees:
 *     memmove @ 0x1C0028340 (memmove.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // r8d

  v6 = 0;
  if ( KeGetCurrentIrql() <= 1u )
  {
    if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C01407F8 && a1 == qword_1C0140800 )
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
      if ( qword_1C0140740 == a1 )
      {
        memmove(a2, &xmmword_1C0140750, 0x20uLL);
        if ( a3 )
          *a3 ^= ((unsigned __int8)dword_1C014083C ^ (unsigned __int8)*a3) & 0xF;
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
