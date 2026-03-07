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
