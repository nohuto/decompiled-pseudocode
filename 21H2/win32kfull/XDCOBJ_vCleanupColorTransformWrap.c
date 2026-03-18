/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C00E8460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026ACF0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02918A8 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  result = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 2080LL);
  while ( v5 )
  {
    COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v8, *(void **)v5);
    v6 = v9;
    v7 = v5;
    if ( v9 )
    {
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v8, a1, a2);
      v6 = v9;
    }
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 2080LL);
    if ( v5 == v7 )
    {
      v5 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(*(_QWORD *)a1 + 2080LL) = v5;
      v6 = v9;
    }
    if ( v6 )
      DEC_SHARE_REF_CNT(v6);
    result = UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v8);
  }
  return result;
}
