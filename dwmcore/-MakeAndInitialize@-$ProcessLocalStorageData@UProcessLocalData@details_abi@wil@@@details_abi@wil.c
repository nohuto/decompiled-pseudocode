__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        wil::details **a3)
{
  wil::details *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  wil::details *v9; // rbx
  unsigned int v10; // edi
  void *v11; // rdx
  int v12; // eax
  void *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  wil::details *v19; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = (wil::details *)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v19 = v6;
  v9 = v6;
  if ( !v6 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x144, (int)"wil", (const char *)0x8007000ELL);
LABEL_7:
    wistd::unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>::~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>(
      &v19,
      v11);
    return v10;
  }
  *(_OWORD *)v17 = 0LL;
  if ( ((unsigned __int8)v6 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
  v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
          (wil::details **)v17,
          a1,
          v8,
          (unsigned __int64)v6 >> 2);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x147, (int)"wil", (const char *)(unsigned int)v12);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v17, v13);
    goto LABEL_7;
  }
  *(_DWORD *)v9 = 1;
  *((_QWORD *)v9 + 1) = *a2;
  v15 = *(_QWORD *)v17;
  *a2 = 0LL;
  *((_QWORD *)v9 + 2) = v15;
  v16 = *(_QWORD *)&v17[2];
  memset(v17, 0, sizeof(v17));
  *((_QWORD *)v9 + 3) = v16;
  memset_0((char *)v9 + 32, 0, 0x58uLL);
  *((_WORD *)v9 + 16) = 88;
  *((_DWORD *)v9 + 9) = 1;
  memset_0((char *)v9 + 40, 0, 0x50uLL);
  result = 0LL;
  *a3 = v9;
  return result;
}
