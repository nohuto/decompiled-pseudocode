/*
 * XREFs of ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x180224660
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180226C44 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D42F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801D6FD0 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180224D70 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 */

bool __fastcall CManipulationManager::CheckForBufferedDescendant(
        CManipulationManager *this,
        struct CManipulationFrame *a2,
        unsigned int a3)
{
  unsigned int v4; // r13d
  int v5; // ebx
  bool v6; // r15
  unsigned int v7; // edi
  CManipulationManager *v8; // rdx
  __int64 v9; // rcx
  char *v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 (__fastcall ***v13)(_QWORD); // rax
  char v14; // si
  __int64 v15; // r13
  __int64 (__fastcall ***v16)(_QWORD); // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  __int64 i; // [rsp+30h] [rbp-18h]
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+98h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+58h]
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v23 = a3;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  LODWORD(v22) = 0;
  v7 = 0;
  v8 = this;
  for ( i = *((_QWORD *)a2 + 31 * a3 + 23); v7 < *((_DWORD *)a2 + 4); ++v7 )
  {
    if ( v6 )
      break;
    v22 = 0LL;
    v18 = 0LL;
    v9 = 248LL * v7;
    v10 = (char *)a2 + v9;
    if ( v7 == v4 || *(_QWORD *)((char *)a2 + v9 + 184) != -1LL )
      goto LABEL_10;
    v5 |= 1u;
    v11 = (__int64 *)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
                       (char *)v8 + 184,
                       &v19,
                       v10 + 164);
    v12 = 0LL;
    if ( &v24 != v11 )
    {
      v12 = *v11;
      *v11 = 0LL;
    }
    v24 = 0LL;
    v18 = v12;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v24);
    if ( v12
      && (v13 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 24LL))(
                                                    v12,
                                                    *((unsigned int *)v10 + 41)),
          *Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v22, v13)) )
    {
      v14 = 0;
    }
    else
    {
LABEL_10:
      v14 = 1;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v19);
    }
    if ( !v14 )
    {
      v15 = i;
      while ( v22 && !v6 )
      {
        v6 = ((__int64 (*)(void))(*v22)[8])() == v15;
        v16 = (__int64 (__fastcall ***)(_QWORD))(*v22)[12](v22);
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v22, v16);
      }
      v4 = v23;
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v22);
    v8 = this;
  }
  return v6;
}
