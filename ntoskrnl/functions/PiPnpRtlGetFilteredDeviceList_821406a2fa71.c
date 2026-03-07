__int64 __fastcall PiPnpRtlGetFilteredDeviceList(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdx
  bool v4; // cf
  char v5; // al
  __int64 v6; // rax
  NTSTATUS inited; // ebx
  __int64 v10; // r9
  char v11; // al
  int v12; // eax
  const wchar_t *v13; // rax
  int v14; // ebx
  wchar_t *v15; // rax
  wchar_t *Pool2; // rsi
  __int64 v17; // r9
  char v18; // al
  ULONG v19; // edx
  wchar_t *v20; // rcx
  const WCHAR *v21; // rdx
  __int64 v22; // r9
  char v23; // al
  NTSTATUS CmObjectListFromCache; // eax
  int pcchRemaining; // [rsp+20h] [rbp-49h]
  int pcchRemaininga; // [rsp+20h] [rbp-49h]
  int dwFlags; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsa; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsb; // [rsp+28h] [rbp-41h]
  __int64 dwFlagsc; // [rsp+28h] [rbp-41h]
  __int64 v31; // [rsp+30h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  __int128 v33; // [rsp+50h] [rbp-19h] BYREF
  __int128 v34; // [rsp+60h] [rbp-9h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+7h] BYREF
  char v36; // [rsp+78h] [rbp+Fh]
  int v37; // [rsp+79h] [rbp+10h]
  __int16 v38; // [rsp+7Dh] [rbp+14h]
  char v39; // [rsp+7Fh] [rbp+16h]
  wchar_t *v40; // [rsp+80h] [rbp+17h]
  __int64 v41; // [rsp+88h] [rbp+1Fh]
  __int64 v42; // [rsp+90h] [rbp+27h]
  __int64 v43; // [rsp+98h] [rbp+2Fh]
  size_t v44; // [rsp+D0h] [rbp+67h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+D8h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  HIDWORD(v41) = 0;
  ppszDestEnd = 0LL;
  v44 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  if ( (v1 & 0x7C) != 0 )
    return (unsigned int)-1073741802;
  if ( (v1 & 1) != 0 )
  {
    v13 = *(const wchar_t **)(a1 + 16);
    if ( v13 )
    {
      v14 = 0;
      while ( *v13 )
      {
        if ( *v13 == 92 )
          break;
        if ( (unsigned int)++v14 > 2 )
          break;
        v15 = wcschr(v13, 0x5Cu);
        if ( v15 )
        {
          v13 = v15 + 1;
          if ( v13 )
            continue;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, 400LL, 1198550608LL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        inited = RtlStringCchCopyExW(Pool2, 0xC8uLL, *(NTSTRSAFE_PCWSTR *)(a1 + 16), &ppszDestEnd, &v44, 0x800u);
        if ( inited >= 0 )
        {
          if ( v44 < 2 )
          {
            inited = -1073741811;
          }
          else
          {
            *(_DWORD *)ppszDestEnd = 92;
            inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
            if ( inited >= 0 )
            {
              v17 = *(_QWORD *)(a1 + 48);
              *(_QWORD *)&v33 = &DestinationString;
              v18 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
              *(_DWORD *)((char *)&v33 + 9) = 0;
              BYTE8(v33) = v18;
              v34 = *(_OWORD *)(a1 + 32);
              dwFlagsb = *(_QWORD *)(a1 + 64);
              pcchRemaining = *(_DWORD *)(a1 + 56);
              *(_WORD *)((char *)&v33 + 13) = 0;
              HIBYTE(v33) = 0;
              inited = PiDmGetCmObjectListFromCache(
                         1,
                         (unsigned int)PiPnpRtlEnumeratorFilterCallback,
                         (unsigned int)&v33,
                         v17,
                         pcchRemaining,
                         dwFlagsb);
            }
          }
        }
        v19 = 1198550608;
        v20 = Pool2;
        goto LABEL_26;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( (v1 & 2) == 0 )
  {
    if ( (v1 & 0x80u) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 48);
      v4 = (v1 & 0x100) != 0;
      *(_DWORD *)((char *)&v33 + 9) = 0;
      v11 = BYTE8(v33);
      if ( v4 )
        v11 = 1;
      *(_WORD *)((char *)&v33 + 13) = 0;
      BYTE8(v33) = v11;
      v34 = *(_OWORD *)(a1 + 32);
      dwFlagsa = *(_QWORD *)(a1 + 64);
      v12 = *(_DWORD *)(a1 + 56);
      HIBYTE(v33) = 0;
      return (unsigned int)PiDmGetCmObjectListFromCache(
                             1,
                             (unsigned int)PiPnpRtlEnumeratorFilterCallback,
                             (unsigned int)&v33,
                             v10,
                             v12,
                             dwFlagsa);
    }
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = (v1 & 0x100) != 0;
      *(_DWORD *)((char *)&v33 + 9) = 0;
      v5 = BYTE8(v33);
      if ( v4 )
        v5 = 1;
      *(_WORD *)((char *)&v33 + 13) = 0;
      BYTE8(v33) = v5;
      v34 = *(_OWORD *)(a1 + 32);
      v31 = *(_QWORD *)(a1 + 64);
      dwFlags = *(_DWORD *)(a1 + 56);
      v6 = *(_QWORD *)(a1 + 48);
      HIBYTE(v33) = 0;
      return (unsigned int)PiDmGetCmObjectConstraintListFromCache(
                             5,
                             v3,
                             (unsigned int)PiPnpRtlEnumeratorFilterCallback,
                             (unsigned int)&v33,
                             v6,
                             dwFlags,
                             v31);
    }
    return (unsigned int)-1073741811;
  }
  v21 = *(const WCHAR **)(a1 + 16);
  if ( !v21 )
    return (unsigned int)-1073741811;
  inited = RtlInitUnicodeStringEx(&DestinationString, v21);
  if ( inited >= 0 )
  {
    v22 = *(_QWORD *)(a1 + 48);
    p_DestinationString = &DestinationString;
    v23 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
    v37 = 0;
    v36 = v23;
    v42 = *(_QWORD *)(a1 + 32);
    v43 = *(_QWORD *)(a1 + 40);
    dwFlagsc = *(_QWORD *)(a1 + 64);
    pcchRemaininga = *(_DWORD *)(a1 + 56);
    v38 = 0;
    v39 = 0;
    v41 = 0LL;
    v40 = 0LL;
    CmObjectListFromCache = PiDmGetCmObjectListFromCache(
                              1,
                              (unsigned int)PiPnpRtlServiceFilterCallback,
                              (unsigned int)&p_DestinationString,
                              v22,
                              pcchRemaininga,
                              dwFlagsc);
    v20 = v40;
    inited = CmObjectListFromCache;
    if ( v40 )
    {
      v19 = 0;
LABEL_26:
      ExFreePoolWithTag(v20, v19);
    }
  }
  return (unsigned int)inited;
}
