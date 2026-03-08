/*
 * XREFs of ??1CRenderTargetManager@@IEAA@XZ @ 0x1801B1104
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B20F0 (-clear@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_TARGE.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(CRenderTargetManager *this)
{
  char *v2; // rcx
  CRenderTargetManager *v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rsi
  void *v6; // rcx
  void *v7; // rcx

  v2 = (char *)*((_QWORD *)this + 66);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 65);
  detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear((char *)this + 80);
  v3 = (CRenderTargetManager *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v3 == (CRenderTargetManager *)((char *)this + 104) )
    v3 = 0LL;
  operator delete(v3);
  v4 = (__int64 *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 8);
    while ( v4 != v5 )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v4++);
    std::_Deallocate<16,0>(
      *((void **)this + 7),
      (*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 6) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 3) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
