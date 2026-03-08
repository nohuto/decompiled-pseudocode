/*
 * XREFs of ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C029D08C
 * Callers:
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029CEC0 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bRemoveColorTransform(XDCOBJ *this, void *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v6; // rdx

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD **)(*(_QWORD *)this + 2080LL);
  if ( !v3 )
    return 0LL;
  v4 = v3;
  while ( (void *)*v3 != a2 )
  {
    v4 = v3;
    v3 = (_QWORD *)v3[1];
    if ( !v3 )
      return 0LL;
  }
  v6 = v3[1];
  if ( v4 == v3 )
    *(_QWORD *)(v2 + 2080) = v6;
  else
    v4[1] = v6;
  Win32FreePool(v3);
  return 1LL;
}
