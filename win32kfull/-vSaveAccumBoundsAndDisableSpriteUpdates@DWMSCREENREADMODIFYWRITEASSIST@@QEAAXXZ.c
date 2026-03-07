void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  int Bounds; // eax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edx
  int v9; // r9d

  if ( **((_QWORD **)this + 3) )
  {
    v2 = Gre::Base::Globals(this);
    *(_DWORD *)(**((_QWORD **)this + 3) + 488LL) = 0;
    Bounds = GreGetBounds(***((_QWORD ***)this + 3), (char *)this + 4, 4LL);
    v4 = *((_QWORD *)this + 3);
    *(_DWORD *)this = Bounds;
    ERECTL::bOffsetSubtract(
      (DWMSCREENREADMODIFYWRITEASSIST *)((char *)this + 4),
      (const struct _POINTL *)(*(_QWORD *)v4 + 8 * ((*(_DWORD *)(*(_QWORD *)v4 + 40LL) & 1) + 127LL)),
      0);
    v5 = (_QWORD *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = *(unsigned __int8 *)(*(_QWORD *)(*v5 + 976LL) + 212LL);
    v6 = *(_QWORD *)(*v5 + 976LL);
    if ( (*(_DWORD *)(v6 + 152) & 0x1000) != 0 )
    {
      *((_QWORD *)this + 5) = *(_QWORD *)(v6 + 160);
      GreDCSelectBrush(*v5, *(_QWORD *)(*((_QWORD *)v2 + 396) + 40LL));
    }
    else
    {
      *((_QWORD *)this + 5) = GreDCSelectBrush(*v5, *(_QWORD *)(*((_QWORD *)v2 + 396) + 40LL));
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 976LL) + 212LL) = 11;
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 152LL);
    *((_DWORD *)this + 16) = (v8 & 0x100) == 0;
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 152LL) & 0x200;
    *((_DWORD *)this + 17) = v9 == 0;
    if ( (v8 & 0x100) == 0 )
      *((_QWORD *)this + 6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 216LL);
    if ( !v9 )
      *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 8LL);
  }
}
