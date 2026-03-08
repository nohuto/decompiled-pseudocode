/*
 * XREFs of _lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator() @ 0x1C00818D4
 * Callers:
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084480 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

__int64 __fastcall lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator()(struct CFlipPresentUpdate ***a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(_QWORD, struct CFlipPresentUpdate *); // rax
  struct CFlipPresentUpdate **v4; // rcx

  CFlipManager::ReleaseKernelPresentUpdateReferences((CFlipManager *)a1, *a1[1]);
  v2 = (__int64)*a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  v3 = *(__int64 (__fastcall **)(_QWORD, struct CFlipPresentUpdate *))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069)
                                                                     + 160LL);
  v4 = *a1;
  v4[21] = (struct CFlipPresentUpdate *)((char *)v4[21] - 1);
  return v3(*((unsigned int *)v4 + 83), v4[21]);
}
