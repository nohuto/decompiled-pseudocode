void __fastcall AUTO_TGO::_DisposeThis(_DWORD *a1)
{
  void (__fastcall **v1)(_DWORD *, _QWORD); // rax

  v1 = *(void (__fastcall ***)(_DWORD *, _QWORD))a1;
  a1[2] = 0;
  (*v1)(a1, 0LL);
}
