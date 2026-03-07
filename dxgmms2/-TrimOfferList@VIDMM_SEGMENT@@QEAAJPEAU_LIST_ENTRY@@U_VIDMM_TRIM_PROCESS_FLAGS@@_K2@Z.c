__int64 __fastcall VIDMM_SEGMENT::TrimOfferList(
        VIDMM_SEGMENT *a1,
        _QWORD *a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*((_QWORD *)a1 + 1) + 39976LL));
  v9 = (_QWORD *)*a2;
  while ( v9 != a2 )
  {
    v10 = (__int64)(v9 - 53);
    v11 = v9;
    v12 = v9[14];
    v9 = (_QWORD *)*v9;
    if ( *(_WORD *)(v12 + 4) != 1 )
    {
      if ( (_QWORD *)v9[1] != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v9;
      v9[1] = v13;
      *v11 = 0LL;
      if ( *(_DWORD *)(v10 + 112) == 2
        && *(VIDMM_SEGMENT **)(v10 + 120) == a1
        && *(_WORD *)(*(_QWORD *)(v10 + 536) + 4LL) == 2
        && (int)VIDMM_SEGMENT::TrimAllocation(a1, v10, a3, a4, a5) >= 0 )
      {
        break;
      }
    }
  }
  v14 = *((_QWORD *)a1 + 1) + 39976LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  return 3221225473LL;
}
