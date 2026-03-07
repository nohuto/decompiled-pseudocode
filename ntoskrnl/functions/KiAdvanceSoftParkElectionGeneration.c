void *__fastcall KiAdvanceSoftParkElectionGeneration(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 696);
  *(_DWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 696) = v1 + 1;
  return memset((void *)(a1 + 784), 0, 0x388uLL);
}
