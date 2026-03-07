NTSTATUS __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(__int64 a1, __int64 a2, USHORT a3)
{
  NTSTATUS result; // eax
  ULONG CompressFragmentWorkSpaceSize; // [rsp+30h] [rbp+8h] BYREF

  CompressFragmentWorkSpaceSize = 0;
  result = RtlGetCompressionWorkSpaceSize(a3, (PULONG)(a1 + 132), &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(a1, a2, 0LL);
    if ( result >= 0 )
    {
      *(_DWORD *)(a1 + 88) = 1;
      result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(a1, a2, 1LL);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
