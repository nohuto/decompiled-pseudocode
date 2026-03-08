/*
 * XREFs of ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D7F24
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C011D0B8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 */

__int64 __fastcall PFFOBJ::bAttemptReload(struct PFF **this)
{
  struct PFF *v2; // rcx
  int v3; // eax
  struct PFF *v4; // rdx
  unsigned int v5; // esi
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r15
  Gre::Base *v10; // rcx
  size_t v12; // [rsp+28h] [rbp-58h]
  _QWORD v13[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int16 *v15; // [rsp+B8h] [rbp+38h] BYREF
  struct PFF **v16; // [rsp+C0h] [rbp+40h] BYREF
  struct PFF *v17; // [rsp+C8h] [rbp+48h] BYREF

  v2 = *this;
  v3 = *((_DWORD *)v2 + 13);
  if ( (v3 & 0x1000) != 0 )
  {
    *((_DWORD *)v2 + 13) = v3 & 0xFFFFEFFF;
    v4 = *this;
    if ( *((_DWORD *)*this + 14) == 1 && (*((_DWORD *)v4 + 13) & 8) == 0 )
    {
      v5 = *((_DWORD *)v4 + 8);
      MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v15, 2 * v5);
      if ( v15 )
      {
        cCapString(v15, *((WCHAR **)*this + 3), v5);
        v6 = *((_DWORD *)*this + 13) & 0x200;
        v8 = SGDGetSessionState(v7);
        v16 = 0LL;
        v9 = *(_QWORD *)(v8 + 32);
        v13[0] = *(_QWORD *)(v9 + 20272);
        Gre::Base::Globals(v10);
        if ( PUBLIC_PFTOBJ::pPFFGet(
               (PUBLIC_PFTOBJ *)v13,
               v15,
               v5,
               *((_DWORD *)*this + 9),
               *((struct tagDESIGNVECTOR **)*this + 5),
               *((_DWORD *)*this + 12),
               &v16,
               0) == *this
          && PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v13, *this, v16, 0) )
        {
          GreQuerySystemTime(v9 + 20288);
          v17 = 0LL;
          v14 = 0;
          LODWORD(v12) = 0;
          if ( (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                               (PUBLIC_PFTOBJ *)v13,
                               v15,
                               v5,
                               1u,
                               0LL,
                               v12,
                               &v14,
                               v6 != 0 ? 514 : 2,
                               &v17,
                               0,
                               0,
                               0LL,
                               1,
                               1) )
          {
            GreQuerySystemTime(v9 + 20288);
            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v15);
            return 1LL;
          }
        }
      }
      AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v15);
    }
  }
  return 0LL;
}
