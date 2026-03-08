/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x1C007F564
 * Callers:
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029CA5C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
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
      EXLATEOBJ::vAltUnlock((Gre::Base **)this + 11);
    if ( (*((_DWORD *)this + 53) & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 104));
  }
}
