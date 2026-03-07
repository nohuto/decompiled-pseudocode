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
