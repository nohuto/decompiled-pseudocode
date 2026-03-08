/*
 * XREFs of ??1CManipulationManager@@MEAA@XZ @ 0x18027FDEC
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x18027FD98 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x180280040 (--_ECManipulationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CQueue@PEAVCResource@@@@QEAA@XZ @ 0x18010DDF8 (--1-$CQueue@PEAVCResource@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x18027FF10 (--1MCCollections@@QEAA@XZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  _DWORD *v2; // rdi
  int i; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CManipulationManager::`vftable';
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 30);
  v2 = (_DWORD *)((char *)this + 232);
  if ( *((_QWORD *)this + 28) )
  {
    for ( i = 0; i < *v2; ++i )
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(*((_QWORD *)this + 28) + 8LL * i));
    operator delete(*((void **)this + 28));
    *((_QWORD *)this + 28) = 0LL;
  }
  *v2 = 0;
  *((_DWORD *)this + 59) = 0;
  MCCollections::~MCCollections((CManipulationManager *)((char *)this + 160));
  CQueue<CResource *>::~CQueue<CResource *>((_DWORD *)this + 20);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
