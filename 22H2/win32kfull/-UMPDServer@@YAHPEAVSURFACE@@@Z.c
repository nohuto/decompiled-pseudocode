/*
 * XREFs of ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02BEC28
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0276684 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C029A1FC (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B7860 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B78D8 (--1XUMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  struct UMPDOBJ *v4; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  if ( v4 && *((_DWORD *)v4 + 110) )
  {
    UMPDOBJ::vServer(v2, (_QWORD *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL)));
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 1LL;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 0LL;
  }
}
