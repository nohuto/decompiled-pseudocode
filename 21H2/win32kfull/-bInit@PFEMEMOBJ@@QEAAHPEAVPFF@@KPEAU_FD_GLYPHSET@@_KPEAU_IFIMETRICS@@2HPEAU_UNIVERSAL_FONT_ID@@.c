/*
 * XREFs of ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C000DBEC
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C000D9EC (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C000E018 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C000E248 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C000F320 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     IsAnyCharsetDbcs @ 0x1C000F388 (IsAnyCharsetDbcs.c)
 *     cCapString @ 0x1C0014ABC (cCapString.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

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
  unsigned int v10; // esi
  __int64 v13; // r15
  __int64 v14; // r10
  __int64 v15; // rax
  _WORD *v16; // rcx
  const wchar_t *v17; // r14
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rdx
  int v21; // ebx
  char *v22; // r14
  char *v23; // rbx
  __int16 v24; // r9
  _BYTE *v25; // r8
  _WORD *v26; // rax
  __int16 v28; // cx
  int v29; // ecx
  int v30; // ecx
  int *v32; // [rsp+30h] [rbp-91h]
  __int64 v33; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v34[2]; // [rsp+48h] [rbp-79h] BYREF
  _WORD v35[32]; // [rsp+68h] [rbp-59h] BYREF
  char v36; // [rsp+A9h] [rbp-18h] BYREF

  v10 = 0;
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
  v13 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  v33 = v13;
  if ( (unsigned int)IsAnyCharsetDbcs(v13) )
  {
    *(_DWORD *)(v14 + 12) |= 0x80u;
    v14 = *(_QWORD *)this;
  }
  v32 = (int *)(v13 + 8);
  if ( *(_WORD *)(*(int *)(v13 + 8) + v13) == 64 )
    *(_DWORD *)(v14 + 12) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)this + 128LL) = (PFEOBJ::dpNtmi(this) + 119) & 0xFFFFFFFC;
  if ( (a6->flInfo & 0x4000) != 0 && a6->cjIfiExtra > 0x10 )
    *(_DWORD *)(*(_QWORD *)this + 128LL) += 40 * *(ULONG *)((char *)&a6->cjIfiExtra + a6[1].dpwszFaceName);
  if ( a8 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 1u;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 25);
    if ( v15 && !*(_QWORD *)(*(_QWORD *)v15 + 80LL) )
    {
      v29 = *(_DWORD *)(*(_QWORD *)this + 12LL);
      if ( (*((_DWORD *)a2 + 13) & 0x10) != 0 )
        v30 = v29 | 0x40;
      else
        v30 = v29 | 4;
      *(_DWORD *)(*(_QWORD *)this + 12LL) = v30;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v13 = v33;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = KeGetCurrentThread();
    }
  }
  if ( a9 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x20u;
  if ( a10 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 8u;
  v16 = (_WORD *)(v13 + *(int *)(v13 + 16));
  v17 = v16 + 1;
  if ( *v16 != 64 )
    v17 = (const wchar_t *)(v13 + *(int *)(v13 + 16));
  if ( !_wcsicmp(v17, L"SYSTEM")
    || !_wcsicmp(v17, L"FIXEDSYS")
    || !_wcsicmp(v17, L"TERMINAL")
    || !_wcsicmp(v17, L"SMALL FONTS") && *(_BYTE *)(v13 + 44) == 0x80 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x10u;
  }
  *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  *(_WORD *)(*(_QWORD *)this + 104LL) = 1;
  *(_WORD *)(*(_QWORD *)this + 106LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = _InterlockedIncrement(&dword_1C0337B68);
  v18 = IFIOBJ::lfOrientation((IFIOBJ *)&v33);
  v19 = v33;
  *(_DWORD *)(*(_QWORD *)this + 68LL) = v18;
  if ( *(_DWORD *)(v19 + 4) >= 4u && *(_DWORD *)(v19 + 192) )
  {
    *(_DWORD *)(*(_QWORD *)this + 88LL) = *(_DWORD *)(v19 + 192);
    *(_DWORD *)(*(_QWORD *)this + 84LL) = 1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *((_DWORD *)a2 + 34);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = a3;
    if ( a9 )
      *(_DWORD *)(*(_QWORD *)this + 88LL) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  v20 = *(_QWORD *)this;
  memset(v34, 0, sizeof(v34));
  PushThreadGuardedObject(v34, v20, vDeletePFE);
  v21 = bComputeGISET(a6, *(struct PFE **)this, (struct _GISET **)(*(_QWORD *)this + 72LL));
  PopThreadGuardedObject(v34);
  if ( v21 )
  {
    *(_DWORD *)(*(_QWORD *)this + 132LL) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL) )
    {
      v22 = (char *)gpfsTable;
      v23 = (char *)gpfsTable + 196 * gcfsTable;
      cCapString(v35, v19 + *v32, 32LL);
      if ( v22 < v23 )
      {
        v24 = v35[0];
        v25 = v22 + 195;
        do
        {
          if ( !(*v25 | *(v25 - 66)) )
          {
            v26 = v35;
            if ( v24 == *(_WORD *)(v25 - 65) )
            {
              v28 = v24;
              while ( v28 )
              {
                v28 = *++v26;
                if ( *v26 != *(_WORD *)((char *)v26 + v25 - &v36) )
                  goto LABEL_30;
              }
              *(_BYTE *)((unsigned int)(*(_DWORD *)(*(_QWORD *)this + 132LL))++ + *(_QWORD *)this + 140LL) = -47 * ((v25 - (_BYTE *)gpfsTable - 195) >> 2);
              v24 = v35[0];
            }
          }
LABEL_30:
          v25 += 196;
        }
        while ( v25 - 195 < v23 );
      }
    }
    return 1;
  }
  return v10;
}
