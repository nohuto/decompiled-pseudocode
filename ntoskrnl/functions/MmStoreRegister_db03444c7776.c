__int64 __fastcall MmStoreRegister(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  int v7; // eax
  char *Pool; // rax
  _DWORD *v9; // rbx
  struct _KEVENT *v10; // rbp
  _DWORD *v11; // r15
  int SystemThread; // esi
  RTL_BITMAP *v13; // rax
  RTL_BITMAP *v14; // r14
  unsigned int v15; // edx
  unsigned __int64 v16; // r9
  __int64 *v17; // r8
  __int64 v18; // r10
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 Pagefile; // rax
  _WORD *v23; // rsi
  int inserted; // ebx
  int v25; // eax
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  Handle = 0LL;
  v6 = *a1;
  v7 = *(_DWORD *)(*a1 + 4);
  *(_DWORD *)(*a1 + 1196) = 1;
  if ( (v7 & 0x80u) != 0 )
    return 3221225659LL;
  if ( !(unsigned int)MmStoreCheckPagefiles(a1) )
    return 3221225799LL;
  Pool = (char *)MiAllocatePool(64, 0x28uLL, 0x70546D4Du);
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = (struct _KEVENT *)(Pool + 8);
  *(_QWORD *)Pool = v6;
  KeInitializeEvent((PRKEVENT)(Pool + 8), NotificationEvent, 0);
  v11 = v9 + 8;
  v9[8] = 0;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   *(void **)(*(_QWORD *)(v6 + 200) + 120LL),
                   0LL,
                   (__int64)MiStoreEvictThread,
                   (__int64)v9,
                   0LL,
                   0LL);
  if ( SystemThread >= 0 )
  {
    v13 = (RTL_BITMAP *)MiAllocatePool(
                          64,
                          8 * (((unsigned int)dword_140D1D1DC >> 6) + ((dword_140D1D1DC & 0x3F) != 0) + 2),
                          0x20206D4Du);
    v14 = v13;
    if ( v13 )
    {
      v13->SizeOfBitMap = dword_140D1D1DC;
      v13->Buffer = &v13[1].SizeOfBitMap;
      RtlClearAllBits(v13);
      v15 = *(_DWORD *)(v6 + 17048);
      v16 = 0LL;
      if ( v15 )
      {
        v17 = (__int64 *)(v6 + 17056);
        v18 = v15;
        do
        {
          v19 = *v17++;
          v20 = *(_QWORD *)(v19 + 8);
          if ( v16 >= v20 )
            v20 = v16;
          v16 = v20;
          --v18;
        }
        while ( v18 );
      }
      v21 = qword_140C6F350 + v16;
      if ( !v15 )
        v21 *= 2LL;
      if ( v21 > 0xFFFFFFF )
        v21 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile(v6, 0, 0, v21, v21, 0LL, 0, 2);
      v23 = (_WORD *)Pagefile;
      if ( Pagefile )
      {
        inserted = MiInsertPageFileInList(Pagefile);
        if ( inserted >= 0 )
        {
          Object = 0LL;
          *(_QWORD *)(v6 + 1336) = v14;
          *(_DWORD *)(v6 + 1196) = 254;
          v25 = v23[102] & 0xF;
          *(_QWORD *)(v6 + 1344) = a4;
          *(_DWORD *)(v6 + 1188) = v25;
          ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          *(_QWORD *)(v6 + 1232) = Object;
          *(_DWORD *)(v6 + 1356) = a5;
          *(_DWORD *)(v6 + 1192) = 1;
          MiMoveModifiedPagesToCompressList(v6);
          inserted = 0;
LABEL_18:
          KeSetEvent(v10, 0, 0);
          ObCloseHandle(Handle, 0);
          return (unsigned int)inserted;
        }
      }
      else
      {
        inserted = -1073741670;
      }
      *v11 = 1;
      ExFreePoolWithTag(v14, 0);
      if ( v23 )
        MiDeletePagefile(v23);
      goto LABEL_18;
    }
    *v11 = 1;
    inserted = -1073741670;
    goto LABEL_18;
  }
  ExFreePoolWithTag(v9, 0);
  return (unsigned int)SystemThread;
}
