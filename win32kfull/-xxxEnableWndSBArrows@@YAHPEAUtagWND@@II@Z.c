/*
 * XREFs of ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D4D10
 * Callers:
 *     xxxSetScrollBar @ 0x1C00A60D8 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C00D4CD0 (xxxEnableScrollBar.c)
 * Callees:
 *     xxxDrawScrollBar @ 0x1C0013C30 (xxxDrawScrollBar.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     IsVisible @ 0x1C00A66A0 (IsVisible.c)
 *     _InitPwSB @ 0x1C00DA0E8 (_InitPwSB.c)
 */

__int64 __fastcall xxxEnableWndSBArrows(struct tagWND *a1, int a2, int a3)
{
  unsigned int *inited; // rbx
  unsigned int v4; // edi
  int v8; // r12d
  unsigned int v9; // ebp
  HDC DCEx; // r15
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int64 v15; // rcx
  struct tagWND *v16; // rcx
  __int64 v17; // rcx
  struct tagWND *v18; // rcx

  inited = (unsigned int *)*((_QWORD *)a1 + 19);
  v4 = 0;
  v8 = 0;
  if ( inited )
  {
    v9 = *inited;
  }
  else
  {
    if ( !a3 )
      return 0LL;
    v9 = 0;
    inited = (unsigned int *)InitPwSB(a1);
    if ( !inited )
      return 0LL;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( DCEx )
  {
    if ( !a2 || a2 == 3 )
    {
      v11 = *inited & 0xFFFFFFFC;
      if ( a3 )
        v11 = a3 | *inited;
      *inited = v11;
      if ( v11 != v9 )
      {
        v9 = v11;
        v8 = 1;
        v15 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v15 + 16) & 4) != 0 && (*(_BYTE *)(v15 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible((__int64)a1) )
          {
            xxxDrawScrollBar(v16, DCEx, 0);
            if ( inited != *((unsigned int **)a1 + 19) )
              goto LABEL_16;
          }
        }
      }
      if ( ((*(_BYTE *)inited ^ (unsigned __int8)v9) & 1) != 0 )
      {
        xxxWindowEvent(0x800Au, a1, -6, 1u, 1);
        if ( inited != *((unsigned int **)a1 + 19) )
          goto LABEL_16;
      }
      if ( ((*(_BYTE *)inited ^ (unsigned __int8)v9) & 2) != 0 )
      {
        xxxWindowEvent(0x800Au, a1, -6, 5u, 1);
        if ( inited != *((unsigned int **)a1 + 19) )
          goto LABEL_16;
      }
    }
    if ( ((a2 - 1) & 0xFFFFFFFD) == 0 )
    {
      v12 = *inited;
      v13 = a3 ? (4 * a3) | v12 : v12 & 0xFFFFFFF3;
      *inited = v13;
      if ( v13 != v9 )
      {
        v17 = *((_QWORD *)a1 + 5);
        v8 = 1;
        if ( (*(_BYTE *)(v17 + 16) & 2) != 0 && (*(_BYTE *)(v17 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible((__int64)a1) )
          {
            xxxDrawScrollBar(v18, DCEx, 1u);
            if ( inited != *((unsigned int **)a1 + 19) )
              goto LABEL_16;
          }
        }
        if ( ((*(_BYTE *)inited ^ (unsigned __int8)v9) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, a1, -5, 1u, 1);
          if ( inited != *((unsigned int **)a1 + 19) )
            goto LABEL_16;
        }
        if ( ((*(_BYTE *)inited ^ (unsigned __int8)v9) & 8) != 0 )
          xxxWindowEvent(0x800Au, a1, -5, 5u, 1);
      }
    }
    v4 = v8;
LABEL_16:
    _ReleaseDC(DCEx);
    return v4;
  }
  return 0LL;
}
