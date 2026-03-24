/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02151DC
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020FAD0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0048E50 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00EEE48 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1C02140E4 (-OpmReset@ADAPTER_DISPLAY@@AEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02153A8 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C02DF22C (-DmmReset@@YAXPEAX@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C02FF6BC (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(void **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  unsigned int i; // edi
  struct _TDR_RECOVERY_CONTEXT *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  void **j; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  void **k; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  unsigned int m; // esi
  _QWORD *v18; // rbx
  _BYTE v20[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  DmmReset(this[2]);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(this + 65), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)((char *)this[14] + 3968 * i), v4);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v5);
    if ( v20[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v6);
  }
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    (ADAPTER_DISPLAY *)this,
    (__int64 (__fastcall *)(__int64, __int64))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  ADAPTER_DISPLAY::OpmReset((DXGADAPTER **)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  for ( j = (void **)this[8]; j != this + 8 && j; j = (void **)*j )
    *((_DWORD *)j + 14) = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v7);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 71));
  v10 = 2LL;
  for ( k = (void **)this[76]; k != this + 76 && k; k = (void **)*k )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)k[2] + 2)) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v14 + 24) = 1162LL;
      WdLogEvent5_WdAssertion(v14);
    }
    *((_DWORD *)k + 6) = 2;
    DXGPROTECTEDSESSION::SetSessionStatus((DXGPROTECTEDSESSION *)k, DXGK_PROTECTED_SESSION_STATUS_INVALID);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 71, v9);
  v16 = this[48];
  if ( v16 )
  {
    for ( m = 0; m < *(_DWORD *)v16; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(v16[1] + 2904LL * m), 0);
  }
  v18 = this + 102;
  do
  {
    *(v18 - 1) = 0LL;
    *v18 = 0LL;
    v18 += 10;
    --v10;
  }
  while ( v10 );
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v15);
  return 0LL;
}
