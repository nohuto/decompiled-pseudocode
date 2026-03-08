/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C00D22C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029CEC0 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  result = *(_QWORD *)a1;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 2080LL);
  while ( v4 )
  {
    LOBYTE(a2) = 14;
    result = HmgShareLockCheck(*v4, a2);
    v6 = result;
    v5 = v4;
    if ( result )
    {
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v6, a1);
      result = v6;
    }
    v4 = *(_QWORD **)(*(_QWORD *)a1 + 2080LL);
    if ( v4 == v5 )
    {
      v4 = (_QWORD *)v4[1];
      *(_QWORD *)(*(_QWORD *)a1 + 2080LL) = v4;
    }
    if ( result )
      result = DEC_SHARE_REF_CNT(result);
  }
  return result;
}
