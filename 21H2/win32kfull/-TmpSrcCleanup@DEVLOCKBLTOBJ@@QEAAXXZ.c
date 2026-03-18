/*
 * XREFs of ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015DB6C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C015DC40 (-TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     PtiCurrentShared @ 0x1C00418E4 (PtiCurrentShared.c)
 *     ?vAltUnlockFast@SURFREF@@QEAAXXZ @ 0x1C0271354 (-vAltUnlockFast@SURFREF@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcCleanup(HSURF *this)
{
  __int64 v2; // rax
  HSURF v3; // rcx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  char v6; // [rsp+60h] [rbp+8h] BYREF

  v2 = PtiCurrentShared();
  if ( v2 )
    *(_QWORD *)(v2 + 384) = 0LL;
  if ( this[13] && this[12] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
    SURFREF::SURFREF((SURFREF *)v4, this[12]);
    hbmSelectBitmap(**(_QWORD **)this[13], this[12], 1LL, 0LL);
    if ( v5 )
      SURFREF::vAltUnlockFast((SURFREF *)v4);
    SURFREF::~SURFREF((SURFREF *)v4);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  }
  v3 = this[5];
  if ( v3 )
  {
    DEC_SHARE_REF_CNT(v3);
    v3 = this[5];
  }
  bDeleteSurface(*((_QWORD *)v3 + 4));
  this[5] = 0LL;
  this[13] = 0LL;
  this[12] = 0LL;
}
