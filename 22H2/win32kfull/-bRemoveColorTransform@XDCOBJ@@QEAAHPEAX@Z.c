/*
 * XREFs of ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0293A28
 * Callers:
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0293864 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bRemoveColorTransform(XDCOBJ *this, void *a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // rax

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD **)(*(_QWORD *)this + 2088LL);
  if ( !v3 )
    return 0LL;
  v4 = v3;
  while ( 1 )
  {
    v5 = v3[1];
    if ( (void *)*v3 == a2 )
      break;
    v4 = v3;
    v3 = (_QWORD *)v3[1];
    if ( !v5 )
      return 0LL;
  }
  if ( v4 == v3 )
    *(_QWORD *)(v2 + 2088) = v5;
  else
    v4[1] = v5;
  Win32FreePool(v3);
  return 1LL;
}
