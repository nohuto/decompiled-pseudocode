/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C00FE5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026C990 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0293864 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  result = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 2088LL);
  while ( v5 )
  {
    COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v9, *(void **)v5);
    v7 = v10;
    v8 = v5;
    if ( v10 )
    {
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v9, a1, a2);
      v7 = v10;
    }
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 2088LL);
    if ( v5 == v8 )
    {
      v5 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(*(_QWORD *)a1 + 2088LL) = v5;
      v7 = v10;
    }
    if ( v7 )
      DEC_SHARE_REF_CNT(v7, v6);
    result = UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v9);
  }
  return result;
}
