/*
 * XREFs of ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C0011E94
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00134A0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C0011790 (-vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02B9C28 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall PFTOBJ::chpfeIncrPFF(
        struct PFT **const *this,
        struct PFF *a2,
        int *a3,
        char a4,
        struct _EUDCLOAD *a5)
{
  unsigned int v5; // ebx
  struct PFF *v8; // rdi
  int v10; // eax
  unsigned int v11; // esi
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v16; // ecx
  __int64 v17; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v18[0] = a2;
  v8 = a2;
  if ( !a2 )
    return v5;
  v10 = *((_DWORD *)a2 + 13) & 8;
  if ( !a5 )
  {
    if ( v10 )
      return v5;
LABEL_4:
    if ( *this == gpPFTPrivate )
    {
      if ( !(unsigned int)PFFOBJ::bAddPvtData((PFFOBJ *)v18, a4) )
      {
        *a3 = 0;
        return (unsigned int)-1;
      }
      v8 = (struct PFF *)v18[0];
    }
    v11 = 1;
    *a3 = 1;
    if ( a5 )
    {
      if ( !*((_QWORD *)a5 + 1) && *((_DWORD *)v8 + 52) > 2u )
        goto LABEL_21;
      PFFOBJ::vGetEUDC((PFFOBJ *)v18, (const wchar_t **)a5);
    }
    if ( *this == gpPFTPrivate )
      return *((unsigned int *)v8 + 52);
    v12 = (_DWORD *)((char *)v8 + 60);
    if ( (a4 & 0x20) == 0 )
      v12 = (_DWORD *)((char *)v8 + 56);
    if ( *v12 != -1 )
    {
      if ( (a4 & 0x40) == 0 )
      {
        v13 = *((_DWORD *)v8 + 13);
        if ( (v13 & 0x80u) != 0 )
        {
          v14 = v13 & 0xFFFFFF7F;
          *((_DWORD *)v8 + 13) = v14;
        }
        else
        {
          ++*v12;
          v14 = *((_DWORD *)v8 + 13);
        }
        if ( (v14 & 1) != 0 )
        {
          v16 = 0;
          for ( *((_DWORD *)v8 + 13) = v14 & 0xFFFFFFFE; v16 < *((_DWORD *)v8 + 52); ++v16 )
          {
            v17 = *((_QWORD *)v8 + v16 + 27);
            if ( v17 )
              *(_DWORD *)(v17 + 12) &= ~2u;
          }
        }
      }
      return *((unsigned int *)v8 + 52);
    }
LABEL_21:
    *a3 = 0;
    return v11;
  }
  if ( v10 )
    goto LABEL_4;
  return v5;
}
