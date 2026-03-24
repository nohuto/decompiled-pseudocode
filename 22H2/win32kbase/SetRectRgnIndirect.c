/*
 * XREFs of SetRectRgnIndirect @ 0x1C0035C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0035D10 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0035D50 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C9240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall SetRectRgnIndirect(HRGN a1, LONG *a2)
{
  LONG v2; // esi
  LONG v3; // ebp
  LONG v4; // edi
  LONG v5; // r14d
  unsigned int v6; // ebx
  struct _RECTL v8; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v9[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2[3];
  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a1, 0, 0);
  v6 = 0;
  if ( v9[0] )
  {
    v8.left = v5;
    v8.top = v4;
    v8.right = v3;
    v8.bottom = v2;
    if ( ((v5 & 0xF8000000) == 0 || (v5 & 0xF8000000) == -134217728)
      && (((v2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && ((v3 & 0xF8000000) == 0 || (v3 & 0xF8000000) == 0xF8000000)
      && ((v4 & 0xF8000000) == 0 || (v4 & 0xF8000000) == 0xF8000000) )
    {
      if ( v5 > v3 )
      {
        v8.left = v3;
        v8.right = v5;
      }
      if ( v4 > v2 )
      {
        v8.top = v2;
        v8.bottom = v4;
      }
      RGNOBJ::vSet((RGNOBJ *)v9, &v8);
      v6 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
  return v6;
}
