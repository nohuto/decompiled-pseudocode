/*
 * XREFs of ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800F5524
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x18003887C (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

_QWORD *__fastcall KeyframeValue::CreateStartingValueKeyframeValue(int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rbx

  result = KeyframeValue::operator new();
  v7 = result;
  if ( result )
  {
    *((_DWORD *)result + 2) = 0;
    *result = &KeyframeValue::`vftable';
    result = (_QWORD *)CMILRefCountImpl::AddReference((CMILRefCountImpl *)(result + 1));
  }
  else
  {
    v7 = 0LL;
  }
  v7[3] = a2;
  *((_DWORD *)v7 + 4) = a1;
  *((_DWORD *)v7 + 5) = 3;
  *a3 = v7;
  return result;
}
