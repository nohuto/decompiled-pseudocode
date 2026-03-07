__int64 __fastcall IopTrackLink(
        struct _FILE_OBJECT *Object,
        __int64 a2,
        void *a3,
        ULONG a4,
        struct _KEVENT *a5,
        KPROCESSOR_MODE AccessMode)
{
  struct _FILE_OBJECT *v9; // rsi
  unsigned int *Pool2; // rdi
  NTSTATUS v11; // eax
  void *v12; // r10
  char v13; // r12
  __int64 v14; // rax
  NTSTATUS v15; // ebx
  int v16; // eax
  struct _KEVENT *v17; // r12
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int VolumeId; // eax
  int v23; // eax
  NTSTATUS v24; // eax
  int SetObjectId; // eax
  ULONG pulResult[2]; // [rsp+48h] [rbp-2C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-2B8h]
  __int64 v29; // [rsp+58h] [rbp-2B0h]
  struct _FILE_OBJECT *v30; // [rsp+60h] [rbp-2A8h]
  __int64 v31; // [rsp+68h] [rbp-2A0h]
  __int128 v32; // [rsp+70h] [rbp-298h] BYREF
  __int128 v33; // [rsp+80h] [rbp-288h]
  __int128 v34; // [rsp+90h] [rbp-278h]
  __int128 v35; // [rsp+A0h] [rbp-268h]
  _OWORD v36[6]; // [rsp+B0h] [rbp-258h] BYREF
  _OWORD v37[6]; // [rsp+110h] [rbp-1F8h] BYREF
  _OWORD v38[4]; // [rsp+170h] [rbp-198h] BYREF
  _DWORD Src[68]; // [rsp+1B0h] [rbp-158h] BYREF

  v29 = a2;
  v31 = (__int64)a5;
  P = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  memset(v37, 0, 20);
  memset(&v36[2], 0, 0x40uLL);
  memset(&v37[2], 0, 0x40uLL);
  memset(v36, 0, 20);
  memset(v38, 0, sizeof(v38));
  memset(Src, 0, sizeof(Src));
  pulResult[0] = 0;
  if ( AccessMode )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(291LL, a4, 538996553LL);
    P = Pool2;
    memmove(Pool2, a3, a4);
  }
  else
  {
    Pool2 = (unsigned int *)a3;
    P = a3;
  }
  if ( !*(_QWORD *)Pool2 && AccessMode == 1 )
  {
LABEL_88:
    ExFreePoolWithTag(Pool2, 0);
    return 3221225485LL;
  }
  v11 = RtlULongSub(a4, 0xCu, pulResult);
  v13 = 0;
  if ( v11 < 0 )
  {
    if ( AccessMode )
      ExFreePoolWithTag(Pool2, 0);
    return 3221225621LL;
  }
  else
  {
    v14 = Pool2[2];
    if ( pulResult[0] < (unsigned int)v14 )
    {
      if ( !AccessMode )
        return 3221225485LL;
      goto LABEL_88;
    }
    if ( (unsigned __int64)(v14 + 36) <= 0x100 )
    {
      if ( v12 )
      {
        *(_QWORD *)pulResult = 0LL;
        v15 = ObReferenceObjectByHandle(v12, 2u, (POBJECT_TYPE)IoFileObjectType, AccessMode, (PVOID *)pulResult, 0LL);
        v9 = *(struct _FILE_OBJECT **)pulResult;
        v30 = *(struct _FILE_OBJECT **)pulResult;
        if ( v15 < 0 )
        {
          if ( AccessMode )
            ExFreePoolWithTag(Pool2, 0);
          return (unsigned int)v15;
        }
      }
      if ( (Object->DeviceObject->Characteristics & 0x10) != 0 )
      {
        SetObjectId = IopGetSetObjectId(Object);
        v15 = SetObjectId;
        if ( SetObjectId == -1073741772 )
          goto LABEL_47;
        if ( SetObjectId < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&v36[4], 0x10uLL, 0) == 16 )
          goto LABEL_47;
        if ( IoGetTransactionParameterBlock(Object) )
          goto LABEL_79;
        if ( *(_QWORD *)Pool2 )
        {
          if ( IoGetTransactionParameterBlock(v9) )
            goto LABEL_79;
          if ( *(_QWORD *)Pool2 )
          {
            if ( (v9->DeviceObject->Characteristics & 0x10) != 0 )
            {
              v15 = IopGetSetObjectId(v9);
              if ( v15 < 0 )
                goto LABEL_14;
              v15 = IopGetSetObjectId(v9);
              if ( v15 < 0 )
                goto LABEL_14;
              IopMarshalIds(Src, v36, v38, Pool2);
              v17 = a5;
              v23 = IopTrackLink(Object, (__int64)a5, 0);
              goto LABEL_53;
            }
            VolumeId = IopGetVolumeId(v9);
LABEL_49:
            v15 = VolumeId;
            if ( VolumeId < 0 )
              goto LABEL_14;
            v15 = IopGetSetObjectId(v9);
            if ( v15 < 0 )
              goto LABEL_14;
            IopMarshalIds(Src, v36, v38, Pool2);
            v17 = a5;
            v15 = IopTrackLink(Object, (__int64)a5, 0);
            if ( v15 < 0 )
              goto LABEL_80;
            v23 = IopGetSetObjectId(Object);
LABEL_53:
            v15 = v23;
            if ( v23 >= 0 )
            {
              v37[2] = v36[2];
              v37[3] = v36[3];
              v37[4] = v36[4];
              v37[5] = v36[5];
              LOBYTE(v37[3]) = _mm_cvtsi128_si32((__m128i)v36[3]) | 1;
              v15 = IopGetSetObjectId(v9);
              if ( v15 < 0 )
                IopGetSetObjectId(Object);
            }
            goto LABEL_80;
          }
        }
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)Pool2 && IoGetTransactionParameterBlock(v9) )
          goto LABEL_79;
        v24 = IopSetRemoteLink(Object);
      }
      else
      {
        if ( *(_QWORD *)Pool2 )
        {
          if ( (v9->DeviceObject->Characteristics & 0x10) == 0 )
          {
            v16 = IopGetSetObjectId(Object);
            v15 = v16;
            if ( v16 == -1073741772 )
              goto LABEL_15;
            if ( v16 < 0 )
            {
LABEL_14:
              v17 = a5;
LABEL_80:
              if ( AccessMode )
                ExFreePoolWithTag(Pool2, 0);
              if ( v9 )
                ObfDereferenceObject(v9);
              KeSetEvent(v17, 0, 0);
              return (unsigned int)v15;
            }
            if ( RtlCompareMemoryUlong(&v36[4], 0x10uLL, 0) == 16 )
            {
LABEL_15:
              v15 = 0;
              goto LABEL_14;
            }
            if ( !IoGetTransactionParameterBlock(Object) && (!*(_QWORD *)Pool2 || !IoGetTransactionParameterBlock(v9)) )
            {
              v15 = IopGetVolumeId(v9);
              if ( v15 >= 0 )
              {
                v15 = IopGetVolumeId(Object);
                if ( v15 >= 0 )
                {
                  v15 = IopGetSetObjectId(Object);
                  if ( v15 >= 0 )
                  {
                    v38[0] = v36[2];
                    v38[1] = v36[3];
                    v38[2] = v36[4];
                    v38[3] = v36[5];
                    v37[2] = v36[2];
                    v37[3] = v36[3];
                    v37[4] = v36[4];
                    v37[5] = v36[5];
                    v18 = *(_QWORD *)((char *)v36 + 4) - *(_QWORD *)((char *)v37 + 4);
                    if ( *(_QWORD *)((char *)v36 + 4) == *(_QWORD *)((char *)v37 + 4) )
                      v18 = *(_QWORD *)((char *)v36 + 12) - *(_QWORD *)((char *)v37 + 12);
                    if ( v18 )
                      LOBYTE(v37[3]) = LOBYTE(v36[3]) | 1;
                    v19 = IopGetSetObjectId(v9);
                    v15 = v19;
                    if ( v19 == -1073741635 || v19 == -1073741771 )
                    {
                      v15 = IopGetSetObjectId(v9);
                      if ( v15 >= 0 )
                        v15 = IopGetSetObjectId(v9);
                    }
                    if ( v15 < 0 )
                      goto LABEL_37;
                    v13 = 1;
                    v20 = *(_QWORD *)((char *)v36 + 4) - *(_QWORD *)((char *)v37 + 4);
                    if ( *(_QWORD *)((char *)v36 + 4) == *(_QWORD *)((char *)v37 + 4) )
                      v20 = *(_QWORD *)((char *)v36 + 12) - *(_QWORD *)((char *)v37 + 12);
                    if ( v20 )
                    {
                      IopMarshalIds(Src, v36, v38, Pool2);
                      v32 = v36[2];
                      v33 = v36[3];
                      v34 = v36[4];
                      v35 = v36[5];
                      LOBYTE(v33) = _mm_cvtsi128_si32((__m128i)v36[3]) & 0xFE;
                      v15 = IopSendMessageToTrackService(v37, &v32, Src);
                    }
                    if ( v15 < 0 )
                    {
LABEL_37:
                      v21 = 0;
                      if ( v13 )
                        v21 = IopGetSetObjectId(v9);
                      if ( v21 >= 0 )
                        IopGetSetObjectId(Object);
                    }
                  }
                }
              }
              goto LABEL_14;
            }
LABEL_79:
            v15 = -1072103335;
            goto LABEL_14;
          }
          if ( (int)IopGetSetObjectId(Object) >= 0 && RtlCompareMemoryUlong(&v36[4], 0x10uLL, 0) != 16 )
          {
            if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)Pool2 && IoGetTransactionParameterBlock(v9) )
              goto LABEL_79;
            VolumeId = IopGetSetObjectId(v9);
            goto LABEL_49;
          }
LABEL_47:
          v15 = 0;
          goto LABEL_14;
        }
        v15 = IopGetVolumeId(Object);
        if ( v15 < 0 )
          goto LABEL_14;
        v15 = IopGetSetObjectId(Object);
        if ( v15 < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&v36[4], 0x10uLL, 0) == 16 )
          goto LABEL_47;
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)Pool2 && IoGetTransactionParameterBlock(v9) )
          goto LABEL_79;
        v32 = v36[2];
        v33 = v36[3];
        v34 = v36[4];
        v35 = v36[5];
        LOBYTE(v33) = _mm_cvtsi128_si32((__m128i)v36[3]) & 0xFE;
        v24 = IopSendMessageToTrackService(v37, &v32, Pool2);
      }
      v15 = v24;
      goto LABEL_14;
    }
    if ( AccessMode )
      ExFreePoolWithTag(Pool2, 0);
    return 2147483653LL;
  }
}
