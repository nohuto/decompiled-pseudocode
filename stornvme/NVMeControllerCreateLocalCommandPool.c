__int64 __fastcall NVMeControllerCreateLocalCommandPool(__int64 a1)
{
  __int64 v1; // rbx
  __int64 LocalCommand; // rax

  v1 = a1 + 4512;
  *(_OWORD *)(a1 + 4512) = 0LL;
  LocalCommand = NVMeControllerAllocateLocalCommand(a1);
  if ( !LocalCommand )
    return 3238002691LL;
  if ( !v1 || LocalCommand == -112 )
    return 3238002694LL;
  return StorPortExtendedFunction(38LL, a1, v1, LocalCommand + 112);
}
