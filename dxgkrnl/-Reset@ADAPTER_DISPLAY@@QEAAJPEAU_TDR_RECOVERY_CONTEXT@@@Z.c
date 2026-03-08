/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BA8B0
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B4D9C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C017DAF0 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1C02B9410 (-OpmReset@ADAPTER_DISPLAY@@AEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BAA38 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0344464 (-Reset@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C03AA2C0 (-DmmReset@@YAXPEAX@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03CEFC0 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(void **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  unsigned int i; // edi
  struct _TDR_RECOVERY_CONTEXT *v4; // rdx
  void **j; // rax
  DXGPROTECTEDSESSION *k; // rdi
  _QWORD *v7; // rdi
  unsigned int m; // esi
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  DmmReset(this[2]);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 76), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)((char *)this[16] + 4000 * i), v4);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  }
  IterateOutputDuplMgrsForRender(
    (struct DXGADAPTER *)this[2],
    (__int64 (__fastcall *)(__int64, void *))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  ADAPTER_DISPLAY::OpmReset((DXGADAPTER **)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  for ( j = (void **)this[10]; j != this + 10 && j; j = (void **)*j )
    *((_DWORD *)j + 14) = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 83));
  for ( k = (DXGPROTECTEDSESSION *)this[89]; k != (DXGPROTECTEDSESSION *)(this + 89) && k; k = *(DXGPROTECTEDSESSION **)k )
    DXGPROTECTEDSESSION::Reset(k);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 83);
  v7 = this[56];
  if ( v7 )
  {
    for ( m = 0; m < *(_DWORD *)v7; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(v7[1] + 2920LL * m), 0);
  }
  v9 = this + 115;
  v10 = 2LL;
  do
  {
    *(v9 - 1) = 0LL;
    *v9 = 0LL;
    v9 += 10;
    --v10;
  }
  while ( v10 );
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return 0LL;
}
