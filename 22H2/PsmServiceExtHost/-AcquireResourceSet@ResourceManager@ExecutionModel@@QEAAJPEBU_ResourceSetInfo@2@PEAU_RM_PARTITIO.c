/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x1800147E0
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180013120 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180007C84 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007CF8 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B898 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@_KPEAPEAV12@@Z @ 0x180013770 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016CE0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018970 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18004437C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180045B18 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        struct ExecutionModel::IResourceSetCallback *a5,
        void *a6,
        wchar_t *Source,
        PSID Sid,
        unsigned int a9,
        unsigned int a10,
        unsigned __int64 a11,
        struct _RM_ACTIVATOR *a12,
        bool *a13,
        unsigned __int64 a14,
        struct ExecutionModel::ResourceSet **a15)
{
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rcx
  int v19; // r14d
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int128 v22; // xmm0
  ULONG v23; // eax
  ExecutionModel::ResourceManager *v24; // r13
  unsigned __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // esi
  unsigned int v28; // edx
  char v29; // cl
  __int64 v30; // r10
  unsigned int v31; // r9d
  int v32; // esi
  struct ExecutionModel::ResourceSet *v33; // r14
  DWORD v34; // r12d
  _QWORD *Value; // r14
  _QWORD *v36; // rax
  int v39; // eax
  struct ExecutionModel::ResourceSet *Next; // rax
  _QWORD v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  ExecutionModel::ResourceManager *v42; // [rsp+70h] [rbp-90h]
  unsigned int v43; // [rsp+78h] [rbp-88h]
  struct _RM_ACTIVITY_HOST *v44; // [rsp+80h] [rbp-80h] BYREF
  struct ExecutionModel::ResourceSet *v45; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_PARTITION *v46; // [rsp+90h] [rbp-70h]
  struct ExecutionModel::ResourceSet **v47; // [rsp+98h] [rbp-68h]
  struct ExecutionModel::IResourceSetCallback *v48; // [rsp+A0h] [rbp-60h]
  void *v49; // [rsp+A8h] [rbp-58h]
  wchar_t Destination[232]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v51[68]; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v52; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v53; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 v54; // [rsp+2D0h] [rbp+1D0h]

  v48 = a5;
  v42 = this;
  v47 = a15;
  v49 = a4;
  v46 = a3;
  v45 = 0LL;
  v44 = 0LL;
  v16 = operator new(0x178uLL);
  v17 = v16;
  if ( !v16 )
    return 3489660951LL;
  v16[11] = 0LL;
  v18 = v16;
  *((_WORD *)v16 + 50) = 0;
  *((_DWORD *)v16 + 24) = 101;
  v19 = -1;
  *((_DWORD *)v16 + 20) = -1;
  *((_DWORD *)v16 + 26) = -1;
  v16[14] = 0LL;
  *((_DWORD *)v16 + 30) = 101;
  *((_WORD *)v16 + 62) = 0;
  *((_DWORD *)v16 + 32) = -1;
  v16[17] = 0LL;
  *((_DWORD *)v16 + 36) = 101;
  *((_WORD *)v16 + 74) = 0;
  v20 = 2;
  v21 = 2LL;
  do
  {
    v18 += 16;
    v22 = *(_OWORD *)a2;
    a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
    *((_OWORD *)v18 - 8) = v22;
    *((_OWORD *)v18 - 7) = *((_OWORD *)a2 - 7);
    *((_OWORD *)v18 - 6) = *((_OWORD *)a2 - 6);
    *((_OWORD *)v18 - 5) = *((_OWORD *)a2 - 5);
    *((_OWORD *)v18 - 4) = *((_OWORD *)a2 - 4);
    *((_OWORD *)v18 - 3) = *((_OWORD *)a2 - 3);
    *((_OWORD *)v18 - 2) = *((_OWORD *)a2 - 2);
    *((_OWORD *)v18 - 1) = *((_OWORD *)a2 - 1);
    --v21;
  }
  while ( v21 );
  *(_OWORD *)v18 = *(_OWORD *)a2;
  *((_OWORD *)v18 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v18 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v18 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v18 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v18 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v18 + 6) = *((_OWORD *)a2 + 6);
  v18[14] = *((_QWORD *)a2 + 14);
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v51, 0, sizeof(v51));
  v23 = RtlLengthSid(Sid);
  memcpy_0(v51, Sid, v23);
  v24 = v42;
  v52 = a9;
  v53 = a10;
  v54 = a11;
  v42 = (ExecutionModel::ResourceManager *)*((_QWORD *)v42 + 16);
  RtlAcquireSRWLockShared((char *)v42 + 32);
  v25 = a11;
  v26 = 0LL;
  v27 = -1073741275;
  v28 = *((_DWORD *)v42 + 5);
  v29 = v28 & 0x1F;
  v43 = v28;
  v30 = (-1LL << (v28 & 0x1F)) & (HIBYTE(a11)
                                + 37
                                * (BYTE6(a11)
                                 + 37
                                 * (BYTE5(a11)
                                  + 37
                                  * (BYTE4(a11)
                                   + 37
                                   * (BYTE3(a11)
                                    + 37 * (BYTE2(a11) + 37 * (BYTE1(a11) + 37 * ((unsigned __int8)a11 + 11623883LL))))))));
  v41[0] = v30;
LABEL_5:
  if ( v26 )
    goto LABEL_8;
  v31 = v28 >> 5;
  if ( v28 >> 5 )
  {
    v28 = v43;
    v25 = a11;
    v26 = *((_QWORD *)v42 + 3)
        + 8LL
        * ((37
          * (BYTE6(v41[0])
           + 37
           * (BYTE5(v41[0])
            + 37
            * (BYTE4(v41[0])
             + 37
             * (BYTE3(v41[0]) + 37 * (BYTE2(v41[0]) + 37 * (BYTE1(v41[0]) + 37 * ((unsigned __int8)v30 + 11623883)))))))
          + HIBYTE(v41[0])) & (v31 - 1));
LABEL_8:
    while ( 1 )
    {
      v26 = *(_QWORD *)v26;
      if ( (v26 & 1) != 0 )
        break;
      if ( v30 == ((-1LL << v29) & *(_QWORD *)(v26 + 8)) )
      {
        if ( v25 != *(_QWORD *)(v26 + 32) )
          goto LABEL_5;
        v27 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v26 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_12;
      }
    }
  }
  v26 = (__int64)v47;
LABEL_12:
  RtlReleaseSRWLockShared((char *)v42 + 32);
  if ( v27 < 0 )
  {
    v39 = RmpActivityHostCreateHostPsm(
            *((struct _RM_SERVICE_GLOBALS **)v24 + 16),
            v46,
            (struct _RM_PSM_HOST_INFO *)Destination,
            0,
            &v44);
    v26 = (__int64)v44;
    if ( v39 < 0 )
    {
      v32 = v39 | 0x10000000;
      goto LABEL_23;
    }
  }
  else if ( ((*(_BYTE *)(v26 + 836) ^ (unsigned __int8)(*((unsigned __int16 *)v17 + 20) >> 5)) & 1) != 0 )
  {
    v32 = -805306320;
    goto LABEL_23;
  }
  if ( (*((_BYTE *)v17 + 42) & 7) == 4 )
  {
    v41[1] = 3LL;
    v41[0] = RmpActivityHostEnumerateResourceSetGetFirst(v26, 3, 0);
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v41);
    if ( Next )
    {
      while ( !*((_QWORD *)Next + 175) )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v41);
        if ( !Next )
          goto LABEL_15;
      }
      v32 = -805305980;
      goto LABEL_23;
    }
  }
LABEL_15:
  if ( a13 )
  {
    if ( a10 == 2 )
    {
      v19 = 11;
    }
    else if ( a10 == 4 || a10 == 8 )
    {
      v19 = 12;
    }
  }
  v32 = ExecutionModel::ResourceSet::CreateInstance(
          *((_QWORD *)v24 + 4),
          (__int128 *)v17,
          (__int64)v46,
          v49,
          (__int64)v48,
          (__int64)a6,
          v26,
          v19,
          (__int64)a12,
          a14,
          &v45);
  if ( v32 < 0 )
  {
    v33 = v45;
LABEL_52:
    if ( v33 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v33 + 32LL))(v33, 0LL);
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_23;
  }
  if ( a13 )
    v20 = 1;
  v33 = v45;
  v32 = ExecutionModel::ResourceSet::AcquireInternalResources(v45, v20, a13);
  if ( v32 < 0 )
    goto LABEL_52;
  v32 = 0;
  *v47 = v33;
LABEL_23:
  if ( v26 )
  {
    v34 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(v26 + 64);
    *(_DWORD *)(v26 + 72) = GetCurrentThreadId();
    if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v26) )
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v26 + 64), 1u);
    if ( HampLockTrackerId != -1 )
    {
      v36 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v36 & 2) == 0 )
        __int2c();
      if ( v36[2]-- == 1LL )
        *v36 &= ~2uLL;
    }
    *(_DWORD *)(v26 + 72) = 0;
    RtlReleaseSRWLockExclusive(v26 + 64);
    RmpObjectRelease((PVOID)v26);
  }
  operator delete(v17);
  return (unsigned int)v32;
}
