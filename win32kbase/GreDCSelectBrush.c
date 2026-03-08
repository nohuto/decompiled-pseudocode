/*
 * XREFs of GreDCSelectBrush @ 0x1C00457E0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00CD950 (-GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     GreSetSolidBrushLight @ 0x1C017E620 (GreSetSolidBrushLight.c)
 */

__int64 __fastcall GreDCSelectBrush(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // r15

  v2 = a2;
  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v6 = a1 + 976;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 160LL);
    if ( a2 != *(_QWORD *)v5 )
    {
      LOBYTE(a2) = 16;
      v5 = HmgShareLockCheck(v2, a2);
      if ( v5 )
      {
        DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(a1 + 136));
        *(_DWORD *)(*(_QWORD *)v6 + 152LL) |= 1u;
        *(_QWORD *)(a1 + 136) = v5;
      }
      else
      {
        v4 = 0LL;
      }
    }
    if ( v5 )
    {
      if ( v4 )
      {
        v7 = *(_DWORD **)(v5 + 48);
        if ( v7 != (_DWORD *)(v5 + 72) && (*v7 & 4) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)v6 + 152LL) |= 1u;
          GreSetSolidBrushLight((struct OBJECT *)v5);
          *v7 &= ~4u;
        }
      }
      *(_QWORD *)(*(_QWORD *)v6 + 160LL) = v2;
      *(_DWORD *)(*(_QWORD *)v6 + 152LL) &= ~0x1000u;
    }
  }
  return v4;
}
