/*
 * XREFs of GreDCSelectPen @ 0x1C0005440
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C017E210 (-GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0005598 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0057600 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreSetSolidBrushLight @ 0x1C017E620 (GreSetSolidBrushLight.c)
 */

__int64 __fastcall GreDCSelectPen(DC *this, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rsi
  int v5; // r12d
  __int64 v6; // rbx
  char *v7; // r15
  __int64 v8; // rax
  char *v9; // r14
  __int64 v10; // rcx
  char *v12; // [rsp+38h] [rbp-60h] BYREF
  int v13; // [rsp+40h] [rbp-58h]
  int v14; // [rsp+44h] [rbp-54h]
  DC *v15; // [rsp+48h] [rbp-50h] BYREF
  int v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+54h] [rbp-44h]

  v2 = a2;
  v4 = 0LL;
  v16 = 0;
  v17 = 0;
  v15 = this;
  if ( this )
  {
    v5 = 0;
    v6 = *((_QWORD *)this + 18);
    v7 = (char *)this + 976;
    v4 = *(_QWORD *)(*((_QWORD *)this + 122) + 168LL);
    if ( a2 != *(_QWORD *)v6 )
    {
      LOBYTE(a2) = 16;
      v8 = HmgShareLockCheck(v2, a2);
      v6 = v8;
      if ( v8 && (*(_DWORD *)(v8 + 40) & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)this + 18));
        *(_DWORD *)(*(_QWORD *)v7 + 152LL) |= 2u;
        *((_QWORD *)this + 18) = v6;
        v5 = 1;
      }
      else
      {
        if ( v8 )
        {
          HmgDecrementShareReferenceCountEx(v8, 0LL);
          v6 = 0LL;
        }
        v4 = 0LL;
      }
    }
    if ( v6 )
    {
      if ( v4 )
      {
        v9 = *(char **)(v6 + 48);
        v12 = v9;
        if ( v9 != (char *)(v6 + 72) && (*(_DWORD *)v9 & 4) != 0 )
        {
          GreSetSolidBrushLight((struct OBJECT *)v6);
          *(_DWORD *)(*(_QWORD *)v7 + 152LL) |= 2u;
          *(_DWORD *)v9 &= ~4u;
          v5 = 1;
        }
        if ( v5 )
        {
          v10 = *(_QWORD *)v7;
          v13 = *(_DWORD *)(*(_QWORD *)v7 + 208LL);
          v14 = *(_DWORD *)(v10 + 108) & 1;
          if ( (*(_DWORD *)(v10 + 340) & 0x1E000) != 0 )
            EXFORMOBJ::vInit((EXFORMOBJ *)&v12, (struct XDCOBJ *)&v15, 0x204u, 0);
          else
            v12 = (char *)this + 320;
          DC::vRealizeLineAttrs(this, (struct EXFORMOBJ *)&v12);
        }
      }
      *(_QWORD *)(*(_QWORD *)v7 + 168LL) = v2;
      *(_DWORD *)(*(_QWORD *)v7 + 152LL) &= ~0x2000u;
    }
  }
  return v4;
}
