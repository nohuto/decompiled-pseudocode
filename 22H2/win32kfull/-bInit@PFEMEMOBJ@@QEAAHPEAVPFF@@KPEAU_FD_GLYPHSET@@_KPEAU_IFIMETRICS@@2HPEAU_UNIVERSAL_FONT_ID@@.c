/*
 * XREFs of ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00A32E4
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00A37E0 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C0062618 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00A2D34 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C00A3728 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     IsAnyCharsetDbcs @ 0x1C00A3784 (IsAnyCharsetDbcs.c)
 *     cCapString @ 0x1C00BBAF4 (cCapString.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
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
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ebx
  __int64 v24; // r9
  char *v25; // r14
  char *v26; // rbx
  __int16 v27; // r8
  _BYTE *v28; // r9
  _WORD *v29; // rax
  __int16 v31; // cx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int *v36; // [rsp+30h] [rbp-91h]
  __int64 v37; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v38[2]; // [rsp+48h] [rbp-79h] BYREF
  _WORD v39[32]; // [rsp+68h] [rbp-59h] BYREF
  char v40; // [rsp+A9h] [rbp-18h] BYREF

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
  v37 = v13;
  if ( (unsigned int)IsAnyCharsetDbcs(v13) )
  {
    *(_DWORD *)(v14 + 12) |= 0x80u;
    v14 = *(_QWORD *)this;
  }
  v36 = (int *)(v13 + 8);
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
      v32 = *(_DWORD *)(*(_QWORD *)this + 12LL);
      if ( (*((_DWORD *)a2 + 13) & 0x10) != 0 )
        v33 = v32 | 0x40;
      else
        v33 = v32 | 4;
      *(_DWORD *)(*(_QWORD *)this + 12LL) = v33;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v13 = v37;
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
  *(_DWORD *)(*(_QWORD *)this + 80LL) = _InterlockedIncrement(&dword_1C033C374);
  v18 = IFIOBJ::lfOrientation((IFIOBJ *)&v37);
  v19 = v37;
  *(_DWORD *)(*(_QWORD *)this + 68LL) = v18;
  v20 = *(_DWORD *)(v19 + 4);
  if ( v20 < 4 )
    v21 = 0;
  else
    v21 = *(_DWORD *)(v19 + 192);
  if ( v21 )
  {
    if ( v20 < 4 )
      v34 = 0;
    else
      v34 = *(_DWORD *)(v19 + 192);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = v34;
    *(_DWORD *)(*(_QWORD *)this + 84LL) = 1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *((_DWORD *)a2 + 34);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = a3;
    if ( a9 )
      *(_DWORD *)(*(_QWORD *)this + 88LL) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  v22 = *(_QWORD *)this;
  memset(v38, 0, sizeof(v38));
  PushThreadGuardedObject(v38, v22, vDeletePFE);
  v23 = bComputeGISET(a6, *(struct PFE **)this, (struct _GISET **)(*(_QWORD *)this + 72LL));
  PopThreadGuardedObject(v38);
  if ( v23 )
  {
    *(_DWORD *)(*(_QWORD *)this + 132LL) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL) )
    {
      v25 = (char *)gpfsTable;
      v26 = (char *)gpfsTable + 196 * gcfsTable;
      cCapString(v39, v19 + *v36, 32LL, v24);
      if ( v25 < v26 )
      {
        v27 = v39[0];
        v28 = v25 + 195;
        do
        {
          if ( !(*v28 | *(v28 - 66)) )
          {
            v29 = v39;
            if ( v27 == *(_WORD *)(v28 - 65) )
            {
              v31 = v27;
              while ( v31 )
              {
                v31 = *++v29;
                if ( *v29 != *(_WORD *)((char *)v29 + v28 - &v40) )
                  goto LABEL_31;
              }
              *(_BYTE *)((unsigned int)(*(_DWORD *)(*(_QWORD *)this + 132LL))++ + *(_QWORD *)this + 140LL) = (v28 - (_BYTE *)gpfsTable - 195) / 196;
              v27 = v39[0];
            }
          }
LABEL_31:
          v28 += 196;
        }
        while ( v28 - 195 < v26 );
      }
    }
    return 1;
  }
  return v10;
}
