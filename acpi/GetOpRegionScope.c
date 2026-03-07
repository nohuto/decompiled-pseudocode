__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *Pool2; // rax
  _QWORD *v8; // rdi
  __int64 v10; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 56LL, 1181770561LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = a1;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v10 = AMLIGetParent(a1);
  *((_DWORD *)v8 + 6) = -1;
  v8[1] = v10;
  v8[5] = a3;
  v8[4] = &PciConfigSpaceHandlerWorker;
  v8[6] = a4;
  return GetOpRegionScopeWorker(a1, 0LL, 0LL, v8);
}
