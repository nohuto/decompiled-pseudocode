/*
 * XREFs of ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02D7E1C
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00E33E4 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C011D1B0 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C026DDD4 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0150274 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFFOBJ::bAddPvtData(PFFOBJ *this, char a2)
{
  struct tagPvtData *v4; // r8
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // edi
  unsigned int CurrentThreadId; // eax

  v4 = PFFOBJ::pPvtDataMatch(this);
  if ( v4 )
  {
    result = 1LL;
    if ( (a2 & 0x2C) != 0 )
      ++*((_DWORD *)v4 + 1);
    else
      ++*(_DWORD *)v4;
    *((_DWORD *)v4 + 2) |= a2 & 0x3C;
LABEL_6:
    *((_DWORD *)this + 2) = 1;
    return result;
  }
  result = Win32AllocPoolZInit(56LL, 1886811207LL);
  v6 = result;
  if ( result )
  {
    *(_DWORD *)(result + 8) = a2 & 0x3C;
    *(_DWORD *)result = (a2 & 0x2C) == 0;
    *(_DWORD *)(result + 4) = (a2 & 0x2C) != 0;
    v7 = a2 & 4;
    if ( v7 )
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    else
      CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_DWORD *)(v6 + 12) = CurrentThreadId;
    if ( v7 )
      PushThreadGuardedObject(v6 + 24, *(_QWORD *)this, CleanupPvtData);
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(*(_QWORD *)this + 144LL);
    *(_QWORD *)(*(_QWORD *)this + 144LL) = v6;
    result = 1LL;
    goto LABEL_6;
  }
  return result;
}
