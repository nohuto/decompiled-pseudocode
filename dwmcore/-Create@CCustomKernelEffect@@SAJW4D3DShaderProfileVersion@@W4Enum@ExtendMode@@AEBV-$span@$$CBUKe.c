__int64 __fastcall CCustomKernelEffect::Create(char a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  char v4; // bl
  LPVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // ebx

  v4 = a1;
  if ( (unsigned __int8)a1 >= 2u && *a3 <= 4uLL )
    v4 = 1;
  v7 = DefaultHeap::Alloc(0x108uLL);
  if ( v7 && (LOBYTE(v8) = v4, v11 = CCustomKernelEffect::CCustomKernelEffect(v7, v8, v10, a3), (v12 = v11) != 0) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
    *a4 = v12;
    return 0;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x20u, 0LL);
  }
  return v13;
}
