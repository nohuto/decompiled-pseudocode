__int64 __fastcall DXGWORKQUEUE::QueueWork(PLIST_ENTRY ListHead, void (*a2)(void *), void *a3)
{
  __int64 v6; // rax

  v6 = operator new[](0x20uLL, 0x4B677844u, 64LL);
  if ( !v6 )
    return 3221225495LL;
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 16) = a2;
  *(_QWORD *)(v6 + 24) = a3;
  ExInterlockedInsertTailList(ListHead, (PLIST_ENTRY)v6, (PKSPIN_LOCK)&ListHead[1]);
  return 0LL;
}
