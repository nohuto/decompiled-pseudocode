/*
 * XREFs of ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F70AC
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C01F821C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA328 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetExtraInfoForHook(CMouseProcessor::CMouseEvent *this)
{
  unsigned int *v1; // rdx

  v1 = (unsigned int *)*((_QWORD *)this + 1);
  if ( (v1[28] & 0x20) == 0 || ((v1[26] - 4) & 0xFFFFFFFB) != 0 )
    return v1[10];
  else
    return (unsigned __int8)v1[10] | 0xFF515700LL;
}
