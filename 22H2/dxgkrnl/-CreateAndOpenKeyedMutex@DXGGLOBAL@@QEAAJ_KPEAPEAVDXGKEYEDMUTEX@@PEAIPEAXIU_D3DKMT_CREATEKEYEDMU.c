/*
 * XREFs of ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0290410
 * Callers:
 *     DxgkCreateKeyedMutex @ 0x1C0293340 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C0293680 (DxgkCreateKeyedMutex2.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C02904D4 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0291758 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAndOpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a7)
{
  __int64 v11; // rax
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF v12; // r8d
  __int64 result; // rax
  unsigned int *v14; // rdx
  struct DXGKEYEDMUTEX *v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // edi
  DXGKEYEDMUTEX *v18; // [rsp+58h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 4510LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = a7.0;
  *a4 = 0;
  v18 = 0LL;
  result = DXGGLOBAL::CreateKeyedMutex(this, a2, (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)v12, 0, &v18);
  if ( (int)result >= 0 )
  {
    v14 = a4;
    v15 = v18;
    result = DXGKEYEDMUTEX::Open(v18, v14, a5, a6, 1);
    v17 = result;
    if ( (int)result >= 0 )
    {
      *a3 = v15;
    }
    else
    {
      DXGKEYEDMUTEX::ReleaseReference(v15, v16);
      return v17;
    }
  }
  return result;
}
