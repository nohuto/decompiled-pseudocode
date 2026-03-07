__int64 (__fastcall *__fastcall SmKmInitialize(__int64 a1))(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, unsigned int); // rax

  memset((void *)a1, 0, 0x1B8uLL);
  *(_DWORD *)(a1 + 432) = -1;
  result = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  *(_QWORD *)(a1 + 256) = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  return result;
}
