__int64 xxxRemoveQueueCompletion()
{
  unsigned int v0; // ebx
  int v1; // eax
  int v2; // eax
  _OWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  memset(v4, 0, sizeof(v4));
  v0 = 1;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1464LL), v4, 1LL, &v5, &v6, 0);
  v2 = xxxHandleQueueCompletion(gptiCurrent, v1, (__int64)v4, 1u);
  if ( v2 == 3 )
  {
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1488LL),
      *(_QWORD *)(gptiCurrent + 1464LL),
      *(_QWORD *)(gptiCurrent + 1480LL),
      0LL,
      1LL,
      0,
      0LL,
      0LL);
  }
  else if ( v2 == 4 )
  {
    return v0;
  }
  return 0;
}
