/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x1C001EF1C
 * Callers:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     GrePlgBlt @ 0x1C0290EF0 (GrePlgBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029A2A0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::~BLTRECORD(BLTRECORD *this)
{
  int v1; // eax
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 53);
  if ( (v1 & 0x20007) != 0 )
  {
    if ( (v1 & 0x20000) != 0 )
    {
      v3 = *((_QWORD *)this + 10);
      if ( v3 )
      {
        DEC_SHARE_REF_CNT(v3);
        v1 = *((_DWORD *)this + 53);
      }
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( (v1 & 2) != 0 )
      EXLATEOBJ::vAltUnlock((BLTRECORD *)((char *)this + 88));
    if ( (*((_DWORD *)this + 53) & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 104));
  }
}
