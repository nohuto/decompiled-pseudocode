void __fastcall TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
        unsigned int a1,
        const struct _D3DKMT_MOVE_RECT *a2,
        struct _D3DKMT_MOVE_RECT *a3)
{
  LONG *p_top; // r9
  signed __int64 v4; // rdx
  RECT *p_DestRect; // r10
  __int64 v6; // r8
  int v7; // eax

  if ( a1 )
  {
    p_top = &a2->DestRect.top;
    v4 = (char *)a2 - (char *)a3;
    p_DestRect = &a3->DestRect;
    v6 = a1;
    do
    {
      p_DestRect[-1].right = *(p_top - 1);
      p_DestRect[-1].bottom = *p_top;
      p_DestRect->left = *(_DWORD *)((char *)p_DestRect + v4 - 8) + *(p_top - 1);
      p_DestRect = (RECT *)((char *)p_DestRect + 24);
      v7 = *p_top + *(p_top - 2);
      p_top += 6;
      p_DestRect[-2].bottom = v7;
      p_DestRect[-1].left = *(LONG *)((char *)&p_DestRect[-2].left + v4) + *(p_top - 5);
      p_DestRect[-1].top = *(p_top - 8) + *(p_top - 4);
      --v6;
    }
    while ( v6 );
  }
}
