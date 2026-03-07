NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v5; // r13d
  void *v7; // rcx
  NTSTATUS result; // eax
  const void **v9; // rdi
  int PortNameInformation; // esi
  ULONG_PTR v11; // r14
  __int64 v12; // r13
  __int64 *v13; // r12
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // r12
  signed __int64 *v17; // rdi
  signed __int64 *v18; // r12
  _QWORD *v19; // r13
  unsigned int v20; // r14d
  bool v21; // [rsp+30h] [rbp-78h]
  ULONG_PTR v22; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  const void **v24; // [rsp+48h] [rbp-60h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h]
  void *v26; // [rsp+58h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-48h]
  unsigned int v28; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+18h]
  unsigned int *v30; // [rsp+C8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v5 = a3;
  v22 = 0LL;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(void **)a2;
    v26 = *(void **)a2;
  }
  else
  {
    v7 = *(void **)a2;
    v26 = *(void **)a2;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(v7, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = 0LL;
    v24 = 0LL;
    v28 = 0;
    v21 = 0;
    v25 = 0LL;
    PortNameInformation = AlpcpReferenceMessageByWaitingThread(Object, &v22);
    if ( PortNameInformation == -1073741275 )
    {
      v11 = 0LL;
      PortNameInformation = 0;
    }
    else
    {
      if ( PortNameInformation < 0 )
      {
        ObfDereferenceObject(Object);
        return PortNameInformation;
      }
      v11 = v22;
      AlpcpLockForCachedReferenceBlob(v22);
      --*(_WORD *)(v11 - 30);
      if ( v11 == *((_QWORD *)Object + 175) )
      {
        v12 = *(_QWORD *)(v11 + 24);
        if ( v12 && (v13 = *(__int64 **)(v12 + 16)) != 0LL )
        {
          BugCheckParameter2 = (ULONG_PTR)(v13 - 2);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
          AlpcpUnlockMessage(v11);
          v22 = 0LL;
          v14 = *v13;
          if ( !*v13 )
            goto LABEL_25;
          v14 &= -(__int64)(ObReferenceObjectSafe(*v13) != 0);
          if ( !v14 )
            goto LABEL_25;
          v15 = *(_DWORD *)(v12 + 416) & 6;
          if ( v15 != 2 && v15 != 4 )
            v13 += 2;
          v16 = *v13;
          v17 = (signed __int64 *)v16;
          if ( v16 )
          {
            if ( v16 != v14 && !ObReferenceObjectSafe(v16) )
LABEL_25:
              v17 = 0LL;
          }
          v18 = (signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v18);
          KeAbPostRelease((ULONG_PTR)v18);
          if ( !v17 || !v14 )
            goto LABEL_40;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v17 + 44), 0LL);
          v19 = 0LL;
          if ( (v17[3] & 1) == 0 )
            v19 = (_QWORD *)v17[3];
          if ( v19 )
            ObfReferenceObjectWithTag(v19, 0x63706C41u);
          if ( _InterlockedCompareExchange64(v17 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v17 + 44);
          KeAbPostRelease((ULONG_PTR)(v17 + 44));
          if ( v19 )
          {
            v25 = v19[136];
            ObfDereferenceObjectWithTag(v19, 0x63706C41u);
            v5 = v29;
            if ( v29 > 0x10 )
              v28 = v29 - 16;
            PortNameInformation = AlpcpGetPortNameInformation((char *)v14, &v24, &v28);
            v21 = PortNameInformation >= 0;
          }
          else
          {
LABEL_40:
            v5 = v29;
          }
          if ( v14 )
            ObfDereferenceObject((PVOID)v14);
          if ( v17 && v17 != (signed __int64 *)v14 )
            ObfDereferenceObject(v17);
          v9 = v24;
          v11 = v22;
        }
        else
        {
          v5 = v29;
        }
      }
    }
    if ( v11 )
      AlpcpUnlockMessage(v11);
    ObfDereferenceObject(Object);
    v20 = 32;
    if ( v9 )
    {
      v20 = *((unsigned __int16 *)v9 + 1) + 32;
    }
    else if ( PortNameInformation == -1073741820 )
    {
      v20 = v28 + 16;
    }
    if ( v5 < v20 )
      PortNameInformation = -1073741820;
    if ( PortNameInformation >= 0 )
    {
      *(_BYTE *)a2 = v21;
      *(_QWORD *)(a2 + 8) = v25;
      if ( v9 )
      {
        *(_WORD *)(a2 + 16) = *(_WORD *)v9;
        *(_WORD *)(a2 + 18) = *((_WORD *)v9 + 1);
        *(_QWORD *)(a2 + 24) = a2 + 32;
        memmove((void *)(a2 + 32), v9[1], *((unsigned __int16 *)v9 + 1));
      }
      else
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
    }
    if ( v30 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
      *v30 = v20;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return PortNameInformation;
  }
  return result;
}
