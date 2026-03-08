/*
 * XREFs of ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C017DB80
 * Callers:
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C017DAF0 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0195B40 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        DXGGLOBAL *this,
        int (*a2)(struct OUTPUTDUPL_MGR_INDIRECT *, void *),
        void *a3)
{
  _QWORD **v4; // rsi
  _QWORD *i; // rbx
  int v7; // edi
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (_QWORD **)((char *)this + 1600);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 1552), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  for ( i = *v4; i != v4 && i; i = (_QWORD *)*i )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD *, void *))a2)(i, a3);
    if ( v7 < 0 )
      goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return (unsigned int)v7;
}
