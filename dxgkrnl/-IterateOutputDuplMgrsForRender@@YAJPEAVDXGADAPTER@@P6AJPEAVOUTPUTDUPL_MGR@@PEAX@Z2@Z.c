__int64 __fastcall IterateOutputDuplMgrsForRender(
        struct DXGADAPTER *a1,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  _QWORD v10[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 11140LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11140LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)a1 + 365);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (result = a2(v7, a3), (int)result >= 0) )
  {
    v10[0] = *(_QWORD *)((char *)a1 + 404);
    v10[1] = a2;
    v10[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_,
             v10);
  }
  return result;
}
