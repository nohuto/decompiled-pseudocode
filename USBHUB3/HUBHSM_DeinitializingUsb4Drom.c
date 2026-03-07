__int64 __fastcall HUBHSM_DeinitializingUsb4Drom(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2688);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x68334855u);
    *(_QWORD *)(v1 + 2688) = 0LL;
  }
  return 2053LL;
}
