/*
 * XREFs of ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01DE1A8
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01D38A0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01D437C (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C01DE06C (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03D183C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00543C0 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x1C01DE268 (--0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C01DE300 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ??0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z @ 0x1C03D4FE4 (--0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z.c)
 *     ??0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z @ 0x1C03D512C (--0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z.c)
 */

int __fastcall BLTQUEUE::RecreateVsyncSource(__int64 a1, char a2, char a3)
{
  int v3; // r14d
  BLTQUEUE_EMULATED_VSYNC_SOURCE **v4; // rdi
  void (__fastcall ***v7)(_QWORD, _QWORD); // rcx
  DXGGLOBAL *Global; // rax
  struct _EX_TIMER *v10; // r9
  struct _EX_TIMER *v11; // r8
  struct DXGDODPRESENT *v12; // rdx
  BLTQUEUE_EMULATED_VSYNC_SOURCE *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDODPRESENT *v16; // rdx

  v3 = *(_DWORD *)(a1 + 136);
  v4 = (BLTQUEUE_EMULATED_VSYNC_SOURCE **)(a1 + 128);
  v7 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 128);
  if ( v7 )
  {
    (**v7)(v7, 0LL);
    *v4 = 0LL;
  }
  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    v13 = BLTQUEUE_HW_VSYNC_SOURCE::BLTQUEUE_HW_VSYNC_SOURCE(
            (BLTQUEUE_HW_VSYNC_SOURCE *)(a1 + 8),
            *(struct DXGDODPRESENT **)a1,
            *(struct _KEVENT **)(a1 + 376));
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::IsVmConnectedToHost(Global) || a2 )
    {
      v10 = *(struct _EX_TIMER **)(a1 + 152);
      v11 = *(struct _EX_TIMER **)(a1 + 144);
      v12 = *(struct DXGDODPRESENT **)a1;
      *(_DWORD *)(a1 + 136) = 2;
      v13 = BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
              (BLTQUEUE_EMULATED_VSYNC_SOURCE *)(a1 + 8),
              v12,
              v11,
              v10);
    }
    else
    {
      v16 = *(struct DXGDODPRESENT **)a1;
      *(_DWORD *)(a1 + 136) = 3;
      v13 = BLTQUEUE_REMOTE_VSYNC_SOURCE::BLTQUEUE_REMOTE_VSYNC_SOURCE((BLTQUEUE_REMOTE_VSYNC_SOURCE *)(a1 + 8), v16);
    }
  }
  *v4 = v13;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    LODWORD(v13) = McTemplateK0qqq_EtwWriteTransfer(
                     v14,
                     &EventBltQueueVsyncRecreateSource,
                     v15,
                     v3,
                     *(_DWORD *)(a1 + 136),
                     a3);
  return (int)v13;
}
