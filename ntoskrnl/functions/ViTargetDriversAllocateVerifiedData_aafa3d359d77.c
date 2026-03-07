union _SLIST_HEADER *__fastcall ViTargetDriversAllocateVerifiedData(unsigned __int64 a1)
{
  union _SLIST_HEADER *Pool2; // rax
  union _SLIST_HEADER *v3; // rbx

  Pool2 = (union _SLIST_HEADER *)ExAllocatePool2(64LL, 0x130uLL, 0x44566656u);
  v3 = Pool2;
  if ( Pool2 )
  {
    Pool2->Alignment = a1;
    Pool2[2].Region = 2557876544LL;
    Pool2[1].Region = (unsigned __int64)&Pool2[1];
    Pool2[1].Alignment = (unsigned __int64)&Pool2[1];
    Pool2[6].Region = (unsigned __int64)&Pool2[6];
    Pool2[6].Alignment = (unsigned __int64)&Pool2[6];
    InitializeSListHead(Pool2 + 4);
    InitializeSListHead(v3 + 5);
    v3[17].Alignment = (unsigned __int64)&v3[16].Region;
    v3[16].Region = (unsigned __int64)&v3[16].Region;
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
  }
  return v3;
}
