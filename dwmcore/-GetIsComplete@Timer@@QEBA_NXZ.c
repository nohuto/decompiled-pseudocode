/*
 * XREFs of ?GetIsComplete@Timer@@QEBA_NXZ @ 0x1800E9260
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800573C0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Timer::GetIsComplete(Timer *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 3);
  result = 0;
  if ( !*((_BYTE *)this + 16) )
  {
    if ( v1 >= *(_DWORD *)this && v1 < *((_DWORD *)this + 1) )
      return result;
    return 1;
  }
  if ( v1 <= *(_DWORD *)this || v1 > *((_DWORD *)this + 1) )
    return 1;
  return result;
}
