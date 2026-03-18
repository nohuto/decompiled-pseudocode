/*
 * XREFs of ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C012C514
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C012A060 (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  unsigned int v3; // ebx
  UMPDOBJ *v5; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v3 = 0;
  if ( v5 && *((_DWORD *)v5 + 106) )
  {
    UMPDOBJ::vServer(v2, (_QWORD *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL)));
    v3 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
  return v3;
}
