/*
 * XREFs of ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1800387F8
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x18003887C (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

int __fastcall KeyframeValue::CreateExpressionKeyframeValue(unsigned __int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v7; // r14d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  v7 = a1;
  v8 = KeyframeValue::operator new(a1);
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 0;
    *v8 = &KeyframeValue::`vftable';
    LODWORD(v8) = CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 1));
  }
  else
  {
    v9 = 0LL;
  }
  v9[3] = a2;
  *((_DWORD *)v9 + 8) = a3;
  *((_DWORD *)v9 + 5) = 2;
  *((_DWORD *)v9 + 4) = v7;
  *a4 = v9;
  return (int)v8;
}
