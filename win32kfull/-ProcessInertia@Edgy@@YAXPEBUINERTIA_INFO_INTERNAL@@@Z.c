/*
 * XREFs of ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E89DC
 * Callers:
 *     EditionEdgyProcessInertia @ 0x1C0149030 (EditionEdgyProcessInertia.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C00E4B94 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _GetPointerDeviceType @ 0x1C0146218 (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C01E95B8 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E998C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::ProcessInertia(Edgy *this, const struct INERTIA_INFO_INTERNAL *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  const struct tagRECT *v7; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 46) & 8) != 0
      && *((float *)this + 5) > 0.0
      && (unsigned int)(*((_DWORD *)this + 6) - 1) <= 1 )
    {
      v4 = 0;
      if ( *(_DWORD *)v3 )
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v3 + 8) + 32LL * v4;
          if ( *(_DWORD *)(v5 + 16) == 1 && (((unsigned int)GetPointerDeviceType(*(_QWORD *)v5) - 1) & 0xFFFFFFFD) == 0 )
          {
            v6 = *(_QWORD *)v5;
            v8 = 0LL;
            if ( (unsigned int)GetPointerDeviceRects(v6, 0LL, &v8) )
            {
              if ( (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(
                                   this,
                                   (const struct INERTIA_INFO_INTERNAL *)&v8,
                                   v7) )
                break;
            }
          }
          if ( ++v4 >= *(_DWORD *)v3 )
            return;
        }
        Edgy::_PostEdgyInertia(*(_QWORD *)(v5 + 8), 1LL, *(unsigned int *)(v3 + 272));
      }
    }
  }
}
