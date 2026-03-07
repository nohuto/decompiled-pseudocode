__int64 __fastcall PFEMEMOBJ::bInit(
        PFEMEMOBJ *this,
        struct PFF *a2,
        int a3,
        struct _FD_GLYPHSET *a4,
        unsigned __int64 a5,
        struct _IFIMETRICS *a6,
        unsigned __int64 a7,
        int a8,
        struct _UNIVERSAL_FONT_ID *a9,
        int a10)
{
  __int64 v12; // r14
  __int64 v13; // r10
  __int64 v14; // rax
  _WORD *v15; // rcx
  const wchar_t *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ebx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  __int16 v26; // r8
  _WORD *v27; // rcx
  __int16 v29; // dx
  int v30; // ecx
  int v31; // ecx
  int *v33; // [rsp+30h] [rbp-91h]
  __int64 v34; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v35[2]; // [rsp+48h] [rbp-79h] BYREF
  _WORD v36[32]; // [rsp+68h] [rbp-59h] BYREF
  char v37; // [rsp+A9h] [rbp-18h] BYREF

  if ( a6->fwdWinAscender + a6->fwdWinDescender == 0 || a6->fwdUnitsPerEm == 0 )
    return 0LL;
  **(_QWORD **)this = a2;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = a4;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = a6;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = a7;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 96LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
  v12 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  v34 = v12;
  if ( (unsigned int)IsAnyCharsetDbcs(v12) )
  {
    *(_DWORD *)(v13 + 12) |= 0x80u;
    v13 = *(_QWORD *)this;
  }
  v33 = (int *)(v12 + 8);
  if ( *(_WORD *)(*(int *)(v12 + 8) + v12) == 64 )
    *(_DWORD *)(v13 + 12) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)this + 128LL) = (PFEOBJ::dpNtmi(this) + 119) & 0xFFFFFFFC;
  if ( (a6->flInfo & 0x4000) != 0 && a6->cjIfiExtra > 0x10 )
    *(_DWORD *)(*(_QWORD *)this + 128LL) += 40 * *(ULONG *)((char *)&a6->cjIfiExtra + a6[1].dpwszFaceName);
  if ( a8 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 1u;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 25);
    if ( v14 && !*(_QWORD *)(*(_QWORD *)v14 + 80LL) )
    {
      v30 = *(_DWORD *)(*(_QWORD *)this + 12LL);
      if ( (*((_DWORD *)a2 + 13) & 0x10) != 0 )
        v31 = v30 | 0x40;
      else
        v31 = v30 | 4;
      *(_DWORD *)(*(_QWORD *)this + 12LL) = v31;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v12 = v34;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = KeGetCurrentThread();
    }
  }
  if ( a9 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x20u;
  if ( a10 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 8u;
  v15 = (_WORD *)(v12 + *(int *)(v12 + 16));
  v16 = v15 + 1;
  if ( *v15 != 64 )
    v16 = (const wchar_t *)(v12 + *(int *)(v12 + 16));
  if ( !_wcsicmp(v16, L"SYSTEM")
    || !_wcsicmp(v16, L"FIXEDSYS")
    || !_wcsicmp(v16, L"TERMINAL")
    || !_wcsicmp(v16, L"SMALL FONTS") && *(_BYTE *)(v12 + 44) == 0x80 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x10u;
  }
  *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  *(_WORD *)(*(_QWORD *)this + 104LL) = 1;
  *(_WORD *)(*(_QWORD *)this + 106LL) = 0;
  v18 = *(_QWORD *)(SGDGetSessionState(v17) + 32);
  *(_DWORD *)(*(_QWORD *)this + 80LL) = _InterlockedIncrement((volatile signed __int32 *)(v18 + 20264));
  v19 = IFIOBJ::lfOrientation((IFIOBJ *)&v34);
  v20 = v34;
  *(_DWORD *)(*(_QWORD *)this + 68LL) = v19;
  if ( *(_DWORD *)(v20 + 4) < 4u )
    goto LABEL_22;
  v21 = *(_DWORD *)(v20 + 192);
  if ( v21 )
  {
    *(_DWORD *)(*(_QWORD *)this + 88LL) = v21;
    *(_DWORD *)(*(_QWORD *)this + 84LL) = 1;
  }
  else
  {
LABEL_22:
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *((_DWORD *)a2 + 34);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = a3;
    if ( a9 )
      *(_DWORD *)(*(_QWORD *)this + 88LL) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  v22 = *(_QWORD *)this;
  memset(v35, 0, sizeof(v35));
  PushThreadGuardedObject(v35, v22, vDeletePFE);
  v23 = bComputeGISET(a6, *(struct PFE **)this, (struct _GISET **)(*(_QWORD *)this + 72LL));
  PopThreadGuardedObject(v35);
  if ( !v23 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)this + 132LL) = 0;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL) )
  {
    v24 = *(_QWORD *)(v18 + 19472);
    v25 = v24 + 196LL * *(unsigned int *)(v18 + 19488);
    cCapString(v36, v20 + *v33, 32LL);
    if ( v24 < v25 )
    {
      v26 = v36[0];
      do
      {
        if ( !(*(_BYTE *)(v24 + 129) | *(_BYTE *)(v24 + 195)) )
        {
          v27 = v36;
          if ( v26 == *(_WORD *)(v24 + 130) )
          {
            v29 = v26;
            while ( v29 )
            {
              v29 = *++v27;
              if ( *v27 != *(_WORD *)((char *)v27 + v24 - (_QWORD)&v37 + 195) )
                goto LABEL_30;
            }
            *(_BYTE *)((unsigned int)(*(_DWORD *)(*(_QWORD *)this + 132LL))++ + *(_QWORD *)this + 140LL) = -47 * ((__int64)(v24 - *(_QWORD *)(v18 + 19472)) >> 2);
            v26 = v36[0];
          }
        }
LABEL_30:
        v24 += 196LL;
      }
      while ( v24 < v25 );
    }
  }
  return 1LL;
}
