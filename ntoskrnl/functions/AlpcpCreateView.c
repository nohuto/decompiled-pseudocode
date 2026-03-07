__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  int v4; // r12d
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  void *Blob; // rax
  ULONG_PTR v10; // rsi
  int v11; // r9d
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v17; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+50h] BYREF
  ULONG_PTR *v19; // [rsp+C0h] [rbp+58h]
  __int64 v20; // [rsp+C8h] [rbp+60h] BYREF

  v19 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v4 = 0;
  v18 = 0LL;
  v17 = 0LL;
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v14 = -1073741769;
  }
  else
  {
    v7 = Object[38];
    v8 = Object[3];
    if ( v7 && v7 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v14 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v14 = -1073741790;
    }
    else
    {
      Blob = (void *)AlpcpAllocateBlob(AlpcViewType, 96LL);
      v10 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v12 = (Object[32] & 0x100000) == 0;
        v17 = *(_QWORD *)(BugCheckParameter2 + 24);
        v20 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v13 = MmMapSecureViewOfSection(*(_QWORD *)v3, v8, (unsigned int)&v18, v11);
          else
            v13 = MmMapViewOfSection(
                    **(_QWORD **)(BugCheckParameter2 + 16),
                    v8,
                    &v18,
                    0LL,
                    0,
                    (__int64)&v17,
                    &v20,
                    2,
                    0,
                    4);
        }
        else
        {
          v13 = MiMapViewInSystemSpace(
                  *(_QWORD *)v3,
                  (unsigned int)&v18,
                  (unsigned int)&v20,
                  (unsigned int)&v17,
                  0LL,
                  0LL);
          v4 = 8;
        }
        v14 = v13;
        if ( v13 < 0 )
        {
          AlpcpDereferenceBlobEx(v10);
        }
        else
        {
          AlpcpReferenceBlob(v10);
          *(_QWORD *)(v10 + 40) = v18;
          *(_QWORD *)(v10 + 48) = v20;
          *(_DWORD *)(v10 + 72) = v4 | *(_DWORD *)(v10 + 72) & 0xFFFFFFF7 | 1;
          ObfReferenceObjectWithTag((PVOID)v8, 0x63706C41u);
          *(_QWORD *)(v10 + 32) = v8;
          ObfReferenceObject(Object);
          *(_QWORD *)(v10 + 24) = Object;
          AlpcpReferenceBlob(BugCheckParameter2);
          *(_QWORD *)(v10 + 16) = BugCheckParameter2;
          v15 = *(_QWORD *)(BugCheckParameter2 + 64);
          *(_QWORD *)v10 = BugCheckParameter2 + 56;
          *(_QWORD *)(v10 + 8) = v15;
          **(_QWORD **)(BugCheckParameter2 + 64) = v10;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          *(_QWORD *)(BugCheckParameter2 + 64) = v10;
          AlpcpInsertResourcePort(Object, v10);
          ExAcquirePushLockExclusiveEx(v8 + 2048, 0LL);
          *(_QWORD *)(v10 + 88) = *(_QWORD *)(v8 + 2064);
          *(_QWORD *)(v10 + 80) = v8 + 2056;
          **(_QWORD **)(v8 + 2064) = v10 + 80;
          *(_QWORD *)(v8 + 2064) = v10 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2048), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 2048));
          KeAbPostRelease(v8 + 2048);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v10;
          v14 = 0;
          *v19 = v10;
        }
      }
      else
      {
        v14 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3);
  return v14;
}
