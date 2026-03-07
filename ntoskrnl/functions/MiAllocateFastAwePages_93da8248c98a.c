__int64 __fastcall MiAllocateFastAwePages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int64 a5)
{
  unsigned int v8; // edi
  __int64 AwePageSize; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int16 *AweInfoPartition; // rbp
  int v14; // ecx
  int v15; // eax
  int v16; // r14d
  char v17; // r9
  int v18; // edx
  char v19; // r8
  int LargePfnList; // ebx
  __int64 v21; // r8
  _QWORD v22[2]; // [rsp+50h] [rbp-C8h] BYREF
  BOOL v23; // [rsp+60h] [rbp-B8h]
  int v24; // [rsp+64h] [rbp-B4h]
  _QWORD v25[12]; // [rsp+70h] [rbp-A8h] BYREF

  memset(v25, 0, sizeof(v25));
  v8 = 0;
  AwePageSize = MiGetAwePageSize(a2);
  v10 = AwePageSize * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  AweInfoPartition = (unsigned __int16 *)MiGetAweInfoPartition(v11);
  if ( (int)MiAcquireNonPagedResources((unsigned __int64)AweInfoPartition, v10, 0LL, 2u) < 0 )
    return 3221225773LL;
  v14 = *(_DWORD *)(a2 + 80);
  v22[0] = 0LL;
  v22[1] = AwePageSize;
  if ( v14 )
  {
    v15 = 4;
    if ( v14 == 2 )
      v15 = 28;
    v24 = v15;
  }
  else
  {
    v24 = 12;
  }
  v16 = *(_DWORD *)(a2 + 8) & 4;
  v23 = v16 != 0;
  MiInitializeLargePfnList(v25);
  LargePfnList = MiCreateLargePfnList(
                   (__int64)v22,
                   0LL,
                   v10,
                   AwePageSize,
                   v18,
                   v17 & (unsigned __int8)(a4 >> 1),
                   0LL,
                   v19,
                   v25);
  if ( LargePfnList < 0 )
    goto LABEL_9;
  LargePfnList = MiFillUserPhysicalMdl(a1, v25, a5);
  if ( LargePfnList < 0 )
  {
    LOBYTE(v8) = v16 != 0;
    MiFreeLargeZeroPages((int)AweInfoPartition, (__int64)v25, v8);
LABEL_9:
    MiReleaseNonPagedResources((__int64)AweInfoPartition, v10, v21);
    return (unsigned int)LargePfnList;
  }
  if ( AweInfoPartition == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C69630, v10);
  return 0LL;
}
