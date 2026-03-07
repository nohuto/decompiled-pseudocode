__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        void *a8,
        void *a9,
        __int64 a10,
        char a11)
{
  struct _KPROCESS *v11; // rsi
  char PreviousMode; // r12
  __int64 result; // rax
  char *v14; // r14
  __int64 v15; // rcx
  signed __int64 *v16; // rdi
  int v17; // edi
  char v18; // al
  _DWORD *v19; // rdi
  int v20; // esi
  _DWORD *v21; // rsi
  _QWORD *Blob; // rax
  ULONG_PTR *v23; // r13
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 **v26; // rdx
  __int64 v27; // rdi
  int Message; // eax
  _QWORD *v29; // rbx
  int inserted; // ecx
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdi
  PVOID v33; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+58h] [rbp-8h] BYREF
  char v40; // [rsp+C0h] [rbp+60h]

  v11 = 0LL;
  Object = 0LL;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = 0LL;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, 0LL, 1, (__int64)AlpcPortObjectType, PreviousMode, 0LL, (__int64 *)&v33);
  else
    result = ObReferenceObjectByName(a4, 0, 0LL, 1u, (__int64)AlpcPortObjectType, PreviousMode, 0, (__int64 *)&v33);
  if ( (int)result >= 0 )
  {
    v14 = (char *)v33;
    v15 = *((unsigned int *)v33 + 104);
    if ( (*((_DWORD *)v33 + 104) & 6) != 2 )
    {
      v17 = -1073741758;
      goto LABEL_58;
    }
    if ( !a11 && (v15 & 0x1000) != 0 )
    {
      v32 = (volatile signed __int64 *)((char *)v33 + 352);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v33 + 352, 0LL);
      *((_DWORD *)v14 + 104) &= ~0x2000u;
      if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44);
      KeAbPostRelease((ULONG_PTR)(v14 + 352));
      v14 = (char *)v33;
    }
    if ( a9 || a8 )
    {
      v16 = (signed __int64 *)(v14 + 352);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 352), 0LL);
      if ( (*((_QWORD *)v14 + 3) & 1) == 0 )
        v11 = (struct _KPROCESS *)*((_QWORD *)v14 + 3);
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      if ( v11 )
      {
        v17 = AlpcpCheckConnectionSecurity(v11, PreviousMode, a9, a8);
        ObfDereferenceObjectWithTag(v11, 0x63706C41u);
        if ( v17 >= 0 )
        {
          v14 = (char *)v33;
          goto LABEL_18;
        }
      }
      else
      {
        v17 = -1073741152;
      }
      v14 = (char *)v33;
      goto LABEL_58;
    }
LABEL_18:
    LOBYTE(v15) = PreviousMode;
    v17 = AlpcpCreatePort(v15, a6, &Object);
    if ( v17 >= 0 )
    {
      if ( !a7 || (v18 = 1, (*(_DWORD *)a7 & 0x40000) == 0) )
        v18 = 0;
      v19 = Object;
      v40 = v18;
      v20 = AlpcpInitializePort((__int64)Object, 2, v18);
      if ( v20 >= 0 )
      {
        v21 = v19 + 104;
        v19[104] |= 8u;
        Blob = (_QWORD *)AlpcpAllocateBlob(AlpcConnectionType, 80LL);
        v35 = Blob;
        if ( Blob )
        {
          *((_QWORD *)v19 + 2) = Blob;
          v23 = Blob + 9;
          Blob[9] = 0LL;
          Blob[1] = 0LL;
          *Blob = v14;
          Blob[2] = v19;
          ExAcquirePushLockExclusiveEx(*((_QWORD *)v14 + 2) - 16LL, 0LL);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 352), 0LL);
          v24 = *((_QWORD *)v14 + 2) + 24LL;
          v25 = v35 + 3;
          v26 = *(__int64 ***)(*((_QWORD *)v14 + 2) + 32LL);
          if ( *v26 != (__int64 *)v24 )
            __fastfail(3u);
          *v25 = v24;
          v25[1] = (__int64)v26;
          *v26 = v25;
          *(_QWORD *)(v24 + 8) = v25;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44);
          KeAbPostRelease((ULONG_PTR)(v14 + 352));
          v27 = *((_QWORD *)v14 + 2);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v27 - 16));
          KeAbPostRelease(v27 - 16);
          Message = AlpcInitializeHandleTable(v35 + 5);
          v19 = Object;
          if ( Message >= 0 )
          {
            v29 = v33;
            Message = AlpcpValidateAndSetPortAttributes((__int64)Object, a7, (__int64)v33, a10, 0, v40, a11);
            if ( Message >= 0 )
            {
              Message = AlpcpAllocateMessage(v23, 0x30uLL);
              if ( Message >= 0 )
              {
                ++*(_WORD *)(*v23 - 30);
                *(_DWORD *)(*v23 + 264) |= 0x80000000;
                AlpcpUnlockMessage(*v23);
                if ( a11 )
                  *v21 |= 0x1000u;
                if ( (a3 & 0x80000) != 0 )
                  *v21 |= 0x100u;
                if ( *((_BYTE *)v19 + 268) == 1 )
                {
                  *v21 |= 0x400u;
LABEL_38:
                  AlpcpSetOwnerProcessPort((__int64)v19, a7);
                  if ( (v29[32] & 0x1000000) != 0 )
                  {
                    v19[64] |= 0x1000000u;
                    *((_QWORD *)v19 + 34) = v29[34];
                  }
                  ObfReferenceObject(v19);
                  inserted = ObInsertObjectEx(v19, 0LL, 0, 0LL, (__int64)&v36);
                  if ( inserted >= 0 )
                  {
                    v31 = v36;
                    *((_QWORD *)v19 + 7) = v36;
                    *a1 = v31;
                    *a2 = v19;
                    return (unsigned int)inserted;
                  }
                  v20 = inserted;
LABEL_48:
                  ObfDereferenceObject(v19);
                  return (unsigned int)v20;
                }
                v19 = Object;
                Message = SeCreateClientSecurity(
                            KeGetCurrentThread(),
                            (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                            0,
                            (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                if ( Message >= 0 )
                {
                  v29 = v33;
                  goto LABEL_38;
                }
              }
            }
          }
          v20 = Message;
          goto LABEL_48;
        }
        v20 = -1073741801;
      }
      ObfDereferenceObject(v14);
      goto LABEL_48;
    }
LABEL_58:
    ObfDereferenceObject(v14);
    return (unsigned int)v17;
  }
  return result;
}
