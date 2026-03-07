void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v3; // r11d
  unsigned int v4; // r8d
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  _BYTE *v8; // r9
  _BYTE *v9; // r10
  struct _RTL_BALANCED_NODE *v10; // rax
  _QWORD *Children; // rdx
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx

  if ( a2 )
  {
    ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    v3 = *((_DWORD *)this + 1754);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_QWORD *)this + 5028);
      while ( 2 )
      {
        v6 = 1616LL * v4;
        v7 = 0LL;
        v8 = (_BYTE *)(v6 + v5 + 688);
        v9 = (_BYTE *)(v6 + v5 + 520);
        do
        {
          if ( (*v9 & 1) != 0 )
          {
            v10 = VIDMM_PARTITION::_PartitionTree;
            Children = 0LL;
            while ( v10 )
            {
              Children = v10->Children;
              v10 = v10->Children[0];
            }
            if ( Children )
            {
              while ( !*(_BYTE *)(*(_QWORD *)(Children[5] + 384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + 24)
                                + 344LL * v4
                                + 136) )
              {
                v12 = (_QWORD **)Children[1];
                v13 = Children;
                if ( v12 )
                {
                  v14 = *v12;
                  for ( Children = (_QWORD *)Children[1]; v14; v14 = (_QWORD *)*v14 )
                    Children = v14;
                }
                else
                {
                  while ( 1 )
                  {
                    Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !Children || (_QWORD *)*Children == v13 )
                      break;
                    v13 = Children;
                  }
                }
                if ( !Children )
                  goto LABEL_20;
              }
LABEL_24:
              ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              goto LABEL_25;
            }
          }
          else if ( *v8 )
          {
            goto LABEL_24;
          }
LABEL_20:
          ++v7;
          v8 += 344;
          v9 += 24;
        }
        while ( v7 < 2 );
        if ( ++v4 < v3 )
          continue;
        break;
      }
    }
    ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  }
  else
  {
LABEL_25:
    _InterlockedIncrement64((volatile signed __int64 *)this + 5578);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 176LL), 0, 0);
  }
}
