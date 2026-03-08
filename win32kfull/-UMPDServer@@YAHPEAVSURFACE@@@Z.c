/*
 * XREFs of ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02C1308
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0279074 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C029C9B8 (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  struct UMPDOBJ *v4; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  if ( v4 && *((_DWORD *)v4 + 106) )
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
