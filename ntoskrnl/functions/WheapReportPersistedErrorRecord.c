char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  _QWORD *WheaInfo; // rsi
  unsigned int v3; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  v3 = Src[5] + 40;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v3, 1634035799LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  Pool2[4] = v3;
  Pool2[6] = 2;
  memmove(Pool2 + 10, Src, (unsigned int)Src[5]);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
