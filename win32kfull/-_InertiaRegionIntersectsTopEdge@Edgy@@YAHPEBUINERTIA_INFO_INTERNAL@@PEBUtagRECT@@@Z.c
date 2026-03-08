/*
 * XREFs of ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C01E95B8
 * Callers:
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E89DC (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GetInertiaRegionInVirtualizedScreen @ 0x1C01F8A64 (GetInertiaRegionInVirtualizedScreen.c)
 */

__int64 __fastcall Edgy::_InertiaRegionIntersectsTopEdge(
        Edgy *this,
        const struct INERTIA_INFO_INTERNAL *a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  _DWORD *v6; // rcx
  int v7; // ebp
  int v8; // edi
  int v9; // r11d
  int v10; // r10d
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // edx
  _BYTE v15[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( (unsigned int)GetInertiaRegionInVirtualizedScreen(this, v15, a3) )
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = v15;
    v7 = *(_DWORD *)a2;
    v8 = *((_DWORD *)a2 + 2);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v6[1] > v5 )
        v10 = 1;
      else
        v9 = 1;
      if ( *v6 > v7 )
        v11 = 1;
      if ( *v6 < v8 )
        v12 = 1;
      if ( v9 && v10 && v11 && v12 )
        break;
      ++v13;
      v6 += 2;
      if ( v13 >= 4 )
        return v4;
    }
    return 1;
  }
  return v4;
}
