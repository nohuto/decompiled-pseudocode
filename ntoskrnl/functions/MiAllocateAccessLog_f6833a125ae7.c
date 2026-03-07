unsigned __int64 **__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int64 v2; // rbx
  SIZE_T v3; // rbx
  void *SharedVm; // rsi
  unsigned __int64 *v5; // rdi
  PVOID Pool; // rax
  unsigned __int64 **v7; // rdx
  unsigned __int64 **result; // rax
  unsigned __int64 *v9; // rcx

  v2 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( !(unsigned int)MiSufficientAvailablePages(v2, 1056LL)
    || *(__int64 *)(v2 + 17280) < 1056
    || (v3 = 4096LL, (unsigned __int64)(MiState[0] - qword_140C65108) < 0x800) )
  {
    v3 = 512LL;
  }
  SharedVm = MiGetSharedVm(a1);
  v5 = (unsigned __int64 *)*((_QWORD *)SharedVm + 5);
  if ( v5 && (v3 == 512 || *v5 && *(_QWORD *)*v5) )
  {
    MiEmptyPageAccessLog(v5);
    v5 = 0LL;
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  do
  {
    Pool = MiAllocatePool(64, v3, 0x63416D4Du);
    if ( Pool )
    {
      *((_QWORD *)SharedVm + 5) = Pool;
      MiInitializePageAccessLogging(a1, Pool, v3);
      result = v7;
      *v7 = v5;
      return result;
    }
    v9 = (unsigned __int64 *)*((_QWORD *)SharedVm + 5);
    if ( v9 )
    {
      MiEmptyPageAccessLog(v9);
      v5 = 0LL;
      *((_QWORD *)SharedVm + 5) = 0LL;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x200 );
  return 0LL;
}
