__int64 __fastcall UsbhAllocateTimeoutObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *Pool2; // rax
  unsigned int v7; // r10d

  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20LL, 1112885333LL);
  if ( Pool2 )
  {
    *Pool2 = 1867468116;
    v7 = 0;
    Pool2[4] = *(_DWORD *)(a2 + 400);
    *a3 = Pool2;
  }
  else
  {
    *a3 = 0LL;
    Log(a1, 1024, 1635020577, a2, 0LL);
  }
  return v7;
}
