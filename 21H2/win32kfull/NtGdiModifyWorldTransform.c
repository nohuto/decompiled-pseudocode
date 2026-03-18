/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C00E4720
 * Callers:
 *     <none>
 * Callees:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C00396E0 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(HDC a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  int v9; // [rsp+28h] [rbp-48h]
  int v10; // [rsp+2Ch] [rbp-44h]
  _BYTE v11[32]; // [rsp+30h] [rbp-40h] BYREF
  struct _XFORML v12; // [rsp+50h] [rbp-20h] BYREF

  v3 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v11);
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  if ( v8 )
  {
    memset(&v12, 0, sizeof(v12));
    if ( a2 )
      v3 = ProbeAndConvertXFORM(a2, &v12);
    else
      LOBYTE(v3) = a3 == 1;
    if ( v3 )
      v3 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)&v8, &v12, a3);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v8);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
  return v3;
}
