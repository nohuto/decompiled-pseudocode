void __fastcall MiDeletePartialCloneVads(char *P)
{
  char *v1; // r14
  char *v2; // rbx
  _KPROCESS *i; // rbp
  __int64 v4; // rcx
  void *VadWakeList; // rdi
  __int64 **v6; // rdi
  int *v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *j; // rsi
  __int64 v12; // r13
  unsigned int SessionId; // eax
  int v14; // ecx
  __int64 *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+10h] BYREF

  v1 = P;
  v2 = P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = v1 )
  {
    v1 = *(char **)v1;
    MiFreeVadEventBitmap(i, (__int64)v2, 4);
    if ( MiIsVadLargePrivate((__int64)v2) )
    {
      VadWakeList = (void *)MiGetVadWakeList(v4, 16);
      MiFreeLargePageView(i, v2, VadWakeList, 1LL);
      if ( VadWakeList )
        ExFreePoolWithTag(VadWakeList, 0);
      v6 = (__int64 **)(v2 + 72);
      v7 = (int *)(v2 + 48);
    }
    else
    {
      v6 = (__int64 **)(v2 + 72);
      v8 = *((_DWORD *)v2 + 12) & 0x70;
      if ( v8 == 80 )
      {
        if ( *(_QWORD *)(**v6 + 64) )
        {
          v9 = (unsigned __int8)v2[32];
          v10 = *((unsigned int *)v2 + 6);
          v16 = 0LL;
          v15 = 0LL;
          MiGetProtoPteAddress((__int64)v2, v10 | (v9 << 32), 0, &v16);
          MiGetProtoPteAddress(
            (__int64)v2,
            *((unsigned int *)v2 + 7) | ((unsigned __int64)(unsigned __int8)v2[33] << 32),
            0,
            &v15);
          for ( j = v16; ; j = (__int64 *)j[2] )
          {
            MiDecrementLargeSubsections(j, j);
            if ( j == v15 )
              break;
          }
        }
        v7 = (int *)(v2 + 48);
      }
      else
      {
        v7 = (int *)(v2 + 48);
        if ( v8 == 32 )
        {
          v12 = **v6;
          if ( (*(_DWORD *)(v12 + 56) & 0x8000000) != 0 )
          {
            SessionId = MmGetSessionIdEx((__int64)i);
            MiDereferencePerSessionProtos((__int64 *)v12, SessionId);
          }
        }
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit((__int64)v2) )
      MiRemoveSharedCommitNode(**v6, (unsigned __int64)i, 0);
    v14 = *v7;
    if ( (*v7 & 0x200000) == 0 && (v14 & 0x70) == 0x20 && (v14 & 0x400000) != 0 )
      --*(_QWORD *)(i[1].ActiveProcessors.StaticBitmap[28] + 368);
    MiFreePlaceholderStorage((__int64)v2);
    MiFreeVadEvents((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
}
