/*
 * XREFs of _lambda_88f3ed85026e62755ea077db9998d4dd_::operator() @ 0x1C008255C
 * Callers:
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084F98 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00851F0 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

__int64 __fastcall lambda_88f3ed85026e62755ea077db9998d4dd_::operator()(struct CFlipPresentUpdate **a1)
{
  struct CFlipPresentUpdate *v2; // rcx
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // rax
  struct CFlipPresentUpdate *v4; // rcx

  CFlipManager::ReleaseKernelPresentUpdateReferences((CFlipManager *)a1, a1[1]);
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 160LL);
  v4 = *a1;
  return v3(*((unsigned int *)v4 + 83), --*((_QWORD *)v4 + 21));
}
