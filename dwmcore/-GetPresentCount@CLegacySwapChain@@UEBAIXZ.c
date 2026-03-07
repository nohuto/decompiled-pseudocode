__int64 __fastcall CLegacySwapChain::GetPresentCount(CLegacySwapChain *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 28);
  result = 0LL;
  v3 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 120LL))(v1, &v3);
    return v3;
  }
  return result;
}
