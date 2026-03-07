__int64 __fastcall CCompSwapChain::GetPresentCount(CCompSwapChain *this)
{
  __int64 v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 10);
  v3 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 136LL))(v1, &v3);
  return v3;
}
