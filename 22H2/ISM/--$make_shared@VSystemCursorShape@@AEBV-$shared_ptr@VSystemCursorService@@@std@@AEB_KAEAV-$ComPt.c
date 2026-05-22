/*
 * XREFs of ??$make_shared@VSystemCursorShape@@AEBV?$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@AEBV?$shared_ptr@VSystemCursorService@@@0@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18013E398
 * Callers:
 *     _lambda_ba6101031141f0d6e8e74a4c358feff2_::operator() @ 0x18013E7FC (_lambda_ba6101031141f0d6e8e74a4c358feff2_--operator().c)
 *     _lambda_e899d24a1372ab43d53191ccbd314951_::operator() @ 0x18013E998 (_lambda_e899d24a1372ab43d53191ccbd314951_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEBV?$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@?$_Ref_count_obj@VSystemCursorShape@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService@@@1@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18013D954 (--$-0AEBV-$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV-$ComPtr@VDataSourcePrincipal@@@WRL@M.c)
 */

_QWORD *__fastcall std::make_shared<SystemCursorShape,std::shared_ptr<SystemCursorService> const &,unsigned __int64 const &,Microsoft::WRL::ComPtr<DataSourcePrincipal> &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v8; // rax
  void *v10; // [rsp+30h] [rbp+8h]

  v10 = operator new(0x38uLL);
  v8 = std::_Ref_count_obj<SystemCursorShape>::_Ref_count_obj<SystemCursorShape>((__int64)v10, a2, a3, a4);
  a1[1] = v8;
  *a1 = v8 + 16;
  return a1;
}
