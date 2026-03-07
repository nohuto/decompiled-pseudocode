bool __fastcall ObpEnumFindHandleProcedure(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 HandlePointer; // rdx
  bool v8; // bl
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  HandlePointer = ExGetHandlePointer(a2);
  v8 = 0;
  if ( !*a4 || *a4 == HandlePointer )
  {
    v10 = a4[1];
    if ( !v10
      || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(_BYTE *)(HandlePointer + 24) ^ BYTE1(HandlePointer))) == *(_BYTE *)(v10 + 40) )
    {
      v11 = (_QWORD *)a4[2];
      if ( !v11 || *v11 == __PAIR64__(a2[1] & 0x1FFFFFF, ((__int64)*(unsigned int *)a2 >> 17) & 7) )
        v8 = 1;
    }
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v8;
}
