/*
 * XREFs of ?STROBJ_vOffset@@YAXPEAU_STROBJ@@JJ@Z @ 0x1C02C7848
 * Callers:
 *     OffTextOut @ 0x1C02C7D78 (OffTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall STROBJ_vOffset(struct _STROBJ *a1, int a2, int a3)
{
  int pwszOrg; // ecx
  int v5; // r10d
  __int64 v6; // rax
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
    v5 = 16 * a2;
    v6 = *(_QWORD *)&a1[1].rclBkGround.top;
    if ( (pwszOrg & 0x100) == 0 )
      v5 = a2;
    v7 = 16 * a3;
    if ( (pwszOrg & 0x100) == 0 )
      v7 = a3;
    if ( (pwszOrg & 0x1400) != 0 )
    {
      cGlyphs = a1->cGlyphs;
      v9 = *(_DWORD **)&a1[4].rclBkGround.top;
      if ( a1->cGlyphs )
      {
        v10 = (_DWORD *)(v6 + 20);
        do
        {
          if ( *v9 == HIDWORD(a1[4].pwszOrg) )
          {
            *(v10 - 1) += v5;
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
      *(_DWORD *)(v6 + 16) += v5;
      *(_DWORD *)(v6 + 20) += v7;
    }
    else
    {
      v11 = a1->cGlyphs;
      if ( a1->cGlyphs )
      {
        v12 = (_DWORD *)(v6 + 20);
        do
        {
          *(v12 - 1) += v5;
          *v12 += v7;
          v12 += 6;
          --v11;
        }
        while ( v11 );
      }
    }
  }
}
