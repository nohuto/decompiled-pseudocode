/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x1C00B55F4
 * Callers:
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01458A4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C028D580 (GrePlgBlt.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::~BLTRECORD(BLTRECORD *this, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rcx

  v2 = *((_DWORD *)this + 55);
  if ( (v2 & 0x20007) != 0 )
  {
    if ( (v2 & 0x20000) != 0 )
    {
      v4 = *((_QWORD *)this + 10);
      if ( v4 )
      {
        DEC_SHARE_REF_CNT(v4, a2);
        v2 = *((_DWORD *)this + 55);
      }
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( (v2 & 2) != 0 )
    {
      EXLATEOBJ::vAltUnlock((BLTRECORD *)((char *)this + 88));
      v2 = *((_DWORD *)this + 55);
    }
    if ( (v2 & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 104));
  }
}
