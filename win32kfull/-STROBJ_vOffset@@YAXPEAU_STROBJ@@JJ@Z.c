/*
 * XREFs of ?STROBJ_vOffset@@YAXPEAU_STROBJ@@JJ@Z @ 0x1C000AD38
 * Callers:
 *     OffTextOut @ 0x1C000ABF0 (OffTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall STROBJ_vOffset(struct _STROBJ *a1, int a2, int a3)
{
  int pwszOrg; // ecx
  __int64 v5; // rax
  int v6; // r10d
  int v7; // r11d
  ULONG cGlyphs; // edx
  _DWORD *v9; // r8
  _DWORD *v10; // rcx
  ULONG v11; // ecx
  _DWORD *v12; // rax

  if ( a2 || a3 )
  {
    a1->rclBkGround.left += a2;
    a1->rclBkGround.right += a2;
    a1->rclBkGround.top += a3;
    a1->rclBkGround.bottom += a3;
    pwszOrg = (int)a1[4].pwszOrg;
    v5 = *(_QWORD *)&a1[1].rclBkGround.top;
    v6 = 16 * a2;
    if ( (pwszOrg & 0x100) == 0 )
      v6 = a2;
    v7 = 16 * a3;
    if ( (pwszOrg & 0x100) == 0 )
      v7 = a3;
    if ( (pwszOrg & 0x1400) != 0 )
    {
      cGlyphs = a1->cGlyphs;
      v9 = *(_DWORD **)&a1[4].rclBkGround.top;
      if ( a1->cGlyphs )
      {
        v10 = (_DWORD *)(v5 + 20);
        do
        {
          if ( *v9 == HIDWORD(a1[4].pwszOrg) )
          {
            *(v10 - 1) += v6;
            --cGlyphs;
            *v10 += v7;
          }
          v10 += 6;
          ++v9;
        }
        while ( cGlyphs );
      }
    }
    else if ( a1->ulCharInc )
    {
      *(_DWORD *)(v5 + 16) += v6;
      *(_DWORD *)(v5 + 20) += v7;
    }
    else
    {
      v11 = a1->cGlyphs;
      if ( a1->cGlyphs )
      {
        v12 = (_DWORD *)(v5 + 20);
        do
        {
          *(v12 - 1) += v6;
          *v12 += v7;
          v12 += 6;
          --v11;
        }
        while ( v11 );
      }
    }
  }
}
