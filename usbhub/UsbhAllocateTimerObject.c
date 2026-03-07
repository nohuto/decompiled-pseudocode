__int64 __fastcall UsbhAllocateTimerObject(__int64 a1, __int64 a2, int a3)
{
  __int64 Pool2; // r9

  Pool2 = ExAllocatePool2(64LL, 80LL, 1112885333LL);
  if ( Pool2 )
  {
    Log(a1, 0x2000, 1768843604, Pool2, a2);
    *(_DWORD *)(Pool2 + 4) = 0;
    *(_DWORD *)Pool2 = 1332899156;
    *(_QWORD *)(Pool2 + 48) = a2;
    *(_DWORD *)(Pool2 + 72) = a3;
    *(_DWORD *)(Pool2 + 8) = 1;
  }
  return Pool2;
}
