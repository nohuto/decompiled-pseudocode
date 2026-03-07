void __fastcall CmpUnfreezeHive(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  CmpInitializeDelayDerefContext(&v3);
  v2 = *(_QWORD *)(a1 + 2936);
  *(_BYTE *)(a1 + 2944) = 0;
  if ( v2 )
  {
    CmpDereferenceKeyControlBlockWithLock(v2, (__int64)&v3, 0);
    *(_QWORD *)(a1 + 2936) = 0LL;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v3);
}
