void __fastcall DerefIncludeRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+28h] [rbp-50h] BYREF
  tagObjLock *v18; // [rsp+38h] [rbp-40h]
  char v19; // [rsp+48h] [rbp-30h]

  if ( a3 )
  {
    v13 = *((_DWORD *)a2 + 25);
    if ( (v13 & 0x100) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 2 )
    {
      v13 &= ~0x100u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x800) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 2 )
    {
      v13 &= ~0x800u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x200) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
    {
      v13 &= ~0x200u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x400) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
    {
      v13 &= ~0x400u;
      *((_DWORD *)a2 + 25) = v13;
    }
    if ( (v13 & 0x1000) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v13 & 0xFFFFEFFF;
  }
  else
  {
    v8 = SGDGetUserSessionState(a1);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v16, (struct _KTHREAD **)(v8 + 288));
    v9 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(v9 + 24))-- == 1 )
    {
      if ( a4 )
      {
        v11 = *((_QWORD *)a1 + 3);
        if ( !(*(_DWORD *)(v11 + 20) | *(_DWORD *)(v11 + 24) | *(_DWORD *)(v11 + 32) | *(_DWORD *)(v11 + 36)) )
          FreeHidTLCInfo((_QWORD *)v11);
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v16);
  }
  v12 = *((_DWORD *)a1 + 5);
  if ( (v12 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v12 & 0xFFFFFFFE;
    if ( !a3 )
    {
      --*((_DWORD *)a2 + 20);
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        v17,
        gHidCountersLock);
      v15 = SGDGetUserSessionState(v14);
      --*(_DWORD *)(v15 + 16856);
      if ( v19 )
      {
        if ( v18 )
          tagObjLock::UnLockExclusive(v18);
      }
    }
  }
}
