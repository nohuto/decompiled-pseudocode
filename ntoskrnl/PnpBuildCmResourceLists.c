void __fastcall PnpBuildCmResourceLists(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // esi
  unsigned int v6; // r13d
  _DWORD *v7; // rbx
  int v8; // eax
  _DWORD *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 i; // rdi
  __int64 v14; // rbx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax

  v4 = a1;
  if ( a3 )
  {
    for ( i = a1; i < a2; i += 64LL )
    {
      if ( *(_QWORD *)i )
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)i + 312LL) + 40LL);
      else
        v14 = 0LL;
      ExAcquireFastMutex(&PiResourceListLock);
      v15 = *(void **)(v14 + 416);
      if ( v15 )
      {
        ExFreePoolWithTag(v15, 0);
        *(_QWORD *)(v14 + 416) = 0LL;
      }
      v16 = *(void **)(v14 + 424);
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        *(_QWORD *)(v14 + 424) = 0LL;
      }
      ExReleaseFastMutex(&PiResourceListLock);
    }
  }
  v5 = -1;
  do
  {
    v6 = v5;
    v5 = 0;
    if ( v4 >= a2 )
      break;
    v7 = (_DWORD *)(v4 + 56);
    do
    {
      *((_QWORD *)v7 - 2) = 0LL;
      v8 = *(v7 - 12);
      if ( (v8 & 0x28) == 0 )
      {
        if ( (v8 & 0x10) != 0 )
        {
          *v7 = -1073741823;
        }
        else if ( v6 == -1 || *v7 == -1073741267 )
        {
          *v7 = 0;
          v9 = v7 - 14;
          PnpBuildCmResourceList(v7 - 14, 1LL);
          if ( *v7 == -1073741267 )
          {
            ++v5;
          }
          else
          {
            if ( a3 )
            {
              if ( *(_QWORD *)v9 )
                v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 312LL) + 40LL);
              else
                v17 = 0LL;
              if ( (*(v7 - 12) & 0x400) != 0 )
                PipClearDevNodeFlags(v17, 3072);
              ExAcquireFastMutex(&PiResourceListLock);
              v18 = *((_QWORD *)v7 - 2);
              *(_QWORD *)(v17 + 416) = v18;
              if ( !v18 )
                PipSetDevNodeFlags(v17, 256);
              *(_QWORD *)(v17 + 424) = *((_QWORD *)v7 - 1);
              ExReleaseFastMutex(&PiResourceListLock);
            }
            v10 = *((_QWORD *)v7 - 2);
            if ( v10 )
            {
              if ( *(_QWORD *)v9 )
                v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 312LL) + 40LL);
              else
                v11 = 0LL;
              v12 = PnpDetermineResourceListSize(*((_DWORD **)v7 - 2));
              IopWriteAllocatedResourcesToRegistry(v11, v10, v12);
            }
          }
        }
      }
      v7 += 16;
    }
    while ( (unsigned __int64)(v7 - 14) < a2 );
    v4 = a1;
    if ( !v5 )
      break;
  }
  while ( v5 < v6 );
}
