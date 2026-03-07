unsigned __int64 __fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rbp
  signed __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  _BYTE *v11; // rax
  unsigned __int64 HandlePointer; // rbx
  int v14; // ebp
  bool v15; // zf
  __int64 v16; // r8
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rcx
  volatile __int64 *v20; // rcx
  unsigned __int64 v21; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v23[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (__int64 *)ExpLookupHandleTableEntry(PspCidTable, a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = PspCidTable;
  _m_prefetchw(v3);
  v6 = v3[1];
  *(_QWORD *)&v23[0] = *v3;
  v7 = *(_QWORD *)&v23[0];
  *((_QWORD *)&v23[0] + 1) = v6;
  if ( (*(_QWORD *)&v23[0] & 0x1FFFELL) == 0 )
  {
LABEL_10:
    v14 = 0;
    if ( !ExLockHandleTableEntry(PspCidTable, v4) )
      return 0LL;
    HandlePointer = ExGetHandlePointer(v4);
    if ( (*(_BYTE *)HandlePointer & 0x7F) == a2 )
    {
      if ( a2 == 3 )
        v15 = (*(_DWORD *)(HandlePointer + 1124) & 0x400000C) == 0x4000000;
      else
        v15 = (*(_DWORD *)(HandlePointer + 1376) & 3) == 2;
      if ( v15 )
        v14 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v4);
      v16 = (unsigned int)(v14 + 1);
      _m_prefetchw((const void *)(HandlePointer - 48));
      v17 = *(_QWORD *)(HandlePointer - 48);
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer - 48), v16 + v17, v17);
          if ( v18 == v17 )
            break;
          if ( !v17 )
            goto LABEL_25;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(HandlePointer - 48, 1, v16, 0x746C6644u);
LABEL_20:
        v19 = PspCidTable;
        _InterlockedExchangeAdd64(v4, 1uLL);
        v20 = (volatile __int64 *)(v19 + 48);
        _InterlockedOr(v22, 0);
        if ( *v20 )
          ExfUnblockPushLock(v20, 0LL);
        return HandlePointer;
      }
LABEL_25:
      v21 = *v4 & 0xFFFFFFFFFFFE0001uLL;
      v23[1] = v21;
      *v4 = v21;
    }
    HandlePointer = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( (v7 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v5, v4, v7);
      _m_prefetchw(v4);
      v6 = v4[1];
      *(_QWORD *)&v23[0] = *v4;
      v7 = *(_QWORD *)&v23[0];
      *((_QWORD *)&v23[0] + 1) = v6;
      goto LABEL_27;
    }
    *(_QWORD *)&v8 = v7;
    *((_QWORD *)&v8 + 1) = v6;
    v9 = _InterlockedCompareExchange128(v4, v6, v7 - 2, (signed __int64 *)&v8);
    v6 = v8 >> 64;
    v10 = v8;
    v7 = v8;
    v23[0] = v8;
    if ( v9 )
      break;
LABEL_27:
    if ( (v7 & 0x1FFFE) == 0 )
      goto LABEL_10;
  }
  if ( (unsigned __int16)(v10 >> 1) == 16 )
    *(_QWORD *)&v23[0] = ((unsigned int)v7 ^ (2 * (unsigned int)(v10 >> 1) - 2)) & 0x1FFFE ^ v7;
  v11 = (_BYTE *)ExGetHandlePointer((__int64 *)v23);
  HandlePointer = (unsigned __int64)v11;
  if ( (*v11 & 0x7F) == a2 )
    return HandlePointer;
  ObfDereferenceObject(v11);
  return 0LL;
}
