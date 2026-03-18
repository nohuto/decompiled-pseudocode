/*
 * XREFs of ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02B9D30
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0011CB0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00134A0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0013CF0 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     cCapString @ 0x1C0014ABC (cCapString.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 */

__int64 __fastcall PFFOBJ::bAttemptReload(struct PFF **this)
{
  struct PFF *v2; // rcx
  int v3; // eax
  struct PFF *v4; // rdx
  unsigned int v5; // r14d
  unsigned int v6; // edi
  struct PFF *v7; // rdx
  int v8; // r15d
  int v9; // r15d
  size_t v11; // [rsp+28h] [rbp-58h]
  struct PFF *v12; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int16 *v14; // [rsp+B8h] [rbp+38h] BYREF
  struct _FONTHASH **v15; // [rsp+C0h] [rbp+40h] BYREF
  struct PFF **v16; // [rsp+C8h] [rbp+48h] BYREF

  v2 = *this;
  v3 = *((_DWORD *)v2 + 13);
  if ( (v3 & 0x1000) == 0 )
    return 0LL;
  *((_DWORD *)v2 + 13) = v3 & 0xFFFFEFFF;
  v4 = *this;
  if ( *((_DWORD *)*this + 14) != 1 || (*((_DWORD *)v4 + 13) & 8) != 0 )
    return 0LL;
  v5 = *((_DWORD *)v4 + 8);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v14, 2 * v5);
  v6 = 0;
  if ( v14 )
  {
    cCapString(v14, *((WCHAR **)*this + 3), v5);
    v7 = *this;
    v16 = 0LL;
    v8 = *((_DWORD *)v7 + 13);
    v15 = gpPFTPublic;
    v9 = v8 & 0x200;
    if ( PUBLIC_PFTOBJ::pPFFGet(
           (PUBLIC_PFTOBJ *)&v15,
           v14,
           v5,
           *((_DWORD *)v7 + 9),
           *((struct tagDESIGNVECTOR **)v7 + 5),
           *((_DWORD *)v7 + 12),
           &v16,
           0) == *this
      && PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v15, *this, v16, 0) )
    {
      GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      v12 = 0LL;
      LODWORD(v11) = 0;
      v13 = 0;
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                           (PUBLIC_PFTOBJ *)&v15,
                           v14,
                           v5,
                           1u,
                           0LL,
                           v11,
                           &v13,
                           v9 != 0 ? 514 : 2,
                           &v12,
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
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&v14);
  return v6;
}
