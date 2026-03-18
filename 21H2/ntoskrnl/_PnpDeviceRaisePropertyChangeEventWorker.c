/*
 * XREFs of _PnpDeviceRaisePropertyChangeEventWorker @ 0x140772190
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407720B8 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpStringFromGuid @ 0x140773030 (_PnpStringFromGuid.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140787F7C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

char __fastcall PnpDeviceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64))
{
  int v10; // ecx
  char v11; // r14
  __int64 v12; // r13
  __int64 *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  DEVPROPKEY ***v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r11d
  __int64 v20; // r8
  DEVPROPKEY *v21; // r10
  char v22; // di
  int v23; // esi
  __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // r8
  int MatchingFilteredDeviceInterfaceList; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int ObjectProperty; // eax
  __int64 *v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v42[24]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+98h] [rbp-68h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-58h]
  __int128 Source2; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v49[80]; // [rsp+D0h] [rbp-30h] BYREF

  v43 = a2;
  v45 = a3;
  v44 = 0;
  v41 = 0;
  *(_OWORD *)&v42[8] = 0LL;
  Source2 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( a4 )
    goto LABEL_5;
  v10 = *(_DWORD *)(a5 + 16);
  if ( v10 == 6 )
  {
    v37 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1 )
      v37 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_SessionId.fmtid.Data4;
    if ( !v37 )
      goto LABEL_72;
  }
  if ( v10 == 100 )
  {
    v38 = *(_QWORD *)a5 - DEVPKEY_Device_RestrictedSD;
    if ( *(_QWORD *)a5 == DEVPKEY_Device_RestrictedSD )
      v38 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
    if ( !v38 )
      goto LABEL_72;
  }
  if ( v10 != 101 )
    goto LABEL_5;
  v39 = *(_QWORD *)a5 - DEVPKEY_Device_InheritedRestrictedSD;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_InheritedRestrictedSD )
    v39 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
  if ( v39 )
  {
LABEL_5:
    v11 = 0;
  }
  else
  {
LABEL_72:
    *(_QWORD *)v42 = 0LL;
    v11 = 1;
    a6(a1, a2, 1LL);
  }
  *(_QWORD *)v42 = a3;
  *(_QWORD *)&v42[8] = a4;
  *(_QWORD *)&v42[16] = a5;
  a6(a1, a2, 1LL);
  v12 = v43;
  v13 = &qword_1400022A8;
  v14 = 13LL;
  do
  {
    v15 = 0LL;
    if ( *(_DWORD *)v13 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(*(v13 - 1) + 8 * v15);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v16 + 16) )
        {
          v28 = *(_QWORD *)a5 - *(_QWORD *)v16;
          if ( *(_QWORD *)a5 == *(_QWORD *)v16 )
            v28 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v16 + 8);
          if ( !v28 )
            break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= *(_DWORD *)v13 )
          goto LABEL_10;
      }
      *(_QWORD *)&v42[16] = v13[1];
      ((void (__fastcall *)(__int64, __int64, __int64, __int64, _BYTE *))a6)(a1, v12, 1LL, 4LL, v42);
    }
LABEL_10:
    v13 += 3;
    --v14;
  }
  while ( v14 );
  v17 = &off_140002250;
  v18 = 0;
  while ( 1 )
  {
    v19 = *((_DWORD *)v17 + 2);
    v20 = 0LL;
    if ( v19 )
      break;
LABEL_15:
    ++v18;
    v17 += 3;
    if ( v18 >= 3 )
    {
      v22 = 0;
      goto LABEL_17;
    }
  }
  while ( 1 )
  {
    v21 = (*v17)[v20];
    if ( *(_DWORD *)(a5 + 16) == v21->pid )
    {
      v29 = *(_QWORD *)a5 - *(_QWORD *)&v21->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v21->fmtid.Data1 )
        v29 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v21->fmtid.Data4;
      if ( !v29 )
        break;
    }
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v19 )
      goto LABEL_15;
  }
  v22 = 1;
LABEL_17:
  if ( !v11 && !v22 )
    goto LABEL_19;
  v23 = v43;
  ObjectProperty = PnpGetObjectProperty(
                     a1,
                     v43,
                     1,
                     v45,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)&v44,
                     (__int64)&Source2,
                     16,
                     (__int64)&v41,
                     0);
  if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 )
  {
    if ( ObjectProperty < 0 )
      goto LABEL_73;
    if ( RtlCompareMemory(qword_140010A90, &Source2, 0x10uLL) == 16 )
      goto LABEL_20;
    if ( (int)PnpStringFromGuid(&Source2, v49) < 0 )
    {
LABEL_73:
      *(_QWORD *)v42 = 0LL;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _BYTE *))a6)(a1, 0LL, 5LL, 1LL, v42);
    }
    else
    {
      if ( v11 )
      {
        *(_QWORD *)v42 = 0LL;
        a6(a1, (__int64)v49, 5LL);
      }
      if ( v22 )
      {
        v32 = &qword_140002258;
        *(_OWORD *)v42 = 0LL;
        v33 = 3LL;
        do
        {
          v34 = 0LL;
          if ( *(_DWORD *)v32 )
          {
            while ( 1 )
            {
              v35 = *(_QWORD *)(*(v32 - 1) + 8 * v34);
              if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v35 + 16) )
              {
                v36 = *(_QWORD *)a5 - *(_QWORD *)v35;
                if ( *(_QWORD *)a5 == *(_QWORD *)v35 )
                  v36 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v35 + 8);
                if ( !v36 )
                  break;
              }
              v34 = (unsigned int)(v34 + 1);
              if ( (unsigned int)v34 >= *(_DWORD *)v32 )
                goto LABEL_51;
            }
            *(_QWORD *)&v42[16] = v32[1];
            ((void (__fastcall *)(__int64, _BYTE *, __int64, __int64, _BYTE *))a6)(a1, v49, 5LL, 4LL, v42);
          }
LABEL_51:
          v32 += 3;
          --v33;
        }
        while ( v33 );
LABEL_19:
        v23 = v43;
      }
    }
  }
LABEL_20:
  v24 = 0LL;
  v25 = *((_DWORD *)&off_140002230 + 2);
  if ( v25 )
  {
    while ( 1 )
    {
      v26 = *((_QWORD *)&off_140C069E0 + v24);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v26 + 16) )
      {
        v30 = *(_QWORD *)a5 - *(_QWORD *)v26;
        if ( *(_QWORD *)a5 == *(_QWORD *)v26 )
          v30 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v26 + 8);
        if ( !v30 )
          break;
      }
      v24 = (unsigned int)(v24 + 1);
      if ( (unsigned int)v24 >= v25 )
        goto LABEL_23;
    }
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 1;
  }
  else
  {
LABEL_23:
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 0;
  }
  if ( v11 || (_BYTE)MatchingFilteredDeviceInterfaceList )
  {
    *(_QWORD *)&v46 = a6;
    BYTE12(v47) = v11;
    if ( (_BYTE)MatchingFilteredDeviceInterfaceList )
    {
      *((_QWORD *)&v46 + 1) = a5;
      *(_QWORD *)&v47 = &off_140002230;
      DWORD2(v47) = 1;
    }
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0,
                                            v23,
                                            0,
                                            (__int64)PnpUpdateInterfacesCallback,
                                            (__int64)&v46,
                                            0LL,
                                            0,
                                            (__int64)&v41,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
    {
      *(_QWORD *)v42 = 0LL;
      LOBYTE(MatchingFilteredDeviceInterfaceList) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, _BYTE *))a6)(
                                                      a1,
                                                      0LL,
                                                      3LL,
                                                      1LL,
                                                      v42);
    }
  }
  return MatchingFilteredDeviceInterfaceList;
}
