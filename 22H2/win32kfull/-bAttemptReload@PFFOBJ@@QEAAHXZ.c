/*
 * XREFs of ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02BAD7C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C009FD78 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00A20A8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00BAC64 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00BB8C8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     cCapString @ 0x1C00BBAF4 (cCapString.c)
 */

__int64 __fastcall PFFOBJ::bAttemptReload(struct PFF **this)
{
  struct PFF *v2; // rcx
  int v3; // eax
  struct PFF *v4; // rdx
  unsigned int v5; // r14d
  unsigned int v6; // edi
  struct PFF *v7; // rcx
  int v8; // r15d
  int v9; // r15d
  int v10; // r9d
  struct tagDESIGNVECTOR *v11; // rax
  unsigned int v13; // [rsp+28h] [rbp-58h]
  size_t v14; // [rsp+28h] [rbp-58h]
  struct PFF *v15; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int16 *v17; // [rsp+B8h] [rbp+38h] BYREF
  struct _FONTHASH **v18; // [rsp+C0h] [rbp+40h] BYREF
  struct PFF **v19; // [rsp+C8h] [rbp+48h] BYREF

  v2 = *this;
  v3 = *((_DWORD *)v2 + 13);
  if ( (v3 & 0x1000) == 0 )
    return 0LL;
  *((_DWORD *)v2 + 13) = v3 & 0xFFFFEFFF;
  v4 = *this;
  if ( *((_DWORD *)*this + 14) != 1 || (*((_DWORD *)v4 + 13) & 8) != 0 )
    return 0LL;
  v5 = *((_DWORD *)v4 + 8);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v17, 2 * v5);
  v6 = 0;
  if ( v17 )
  {
    cCapString(v17, *((WCHAR **)*this + 3), v5);
    v7 = *this;
    v8 = *((_DWORD *)*this + 13);
    v18 = gpPFTPublic;
    v9 = v8 & 0x200;
    v10 = *((_DWORD *)v7 + 9);
    v13 = *((_DWORD *)v7 + 12);
    v11 = (struct tagDESIGNVECTOR *)*((_QWORD *)v7 + 5);
    v19 = 0LL;
    if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v18, v17, v5, v10, v11, v13, &v19, 0) == *this
      && (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v18, *this, v19, 0) )
    {
      GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      v15 = 0LL;
      LODWORD(v14) = 0;
      v16 = 0;
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                           (PUBLIC_PFTOBJ *)&v18,
                           v17,
                           v5,
                           1u,
                           0LL,
                           v14,
                           &v16,
                           v9 != 0 ? 514 : 2,
                           &v15,
                           0,
                           0,
                           0LL,
                           1,
                           1) )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        v6 = 1;
      }
    }
    Win32FreePool(v17);
  }
  return v6;
}
