/*
 * XREFs of ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E504
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C026E600 (-TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcCleanup(DEVLOCKBLTOBJ *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_QWORD *)(ThreadWin32Thread + 384) = 0LL;
  if ( *((_QWORD *)this + 13) && *((_QWORD *)this + 12) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
    LOBYTE(v3) = 5;
    v4 = HmgShareLockCheck(*((_QWORD *)this + 12), v3);
    hbmSelectBitmap(***((_QWORD ***)this + 13), *((_QWORD *)this + 12), 1LL, 0LL);
    if ( v4 )
    {
      DEC_SHARE_REF_CNT(v4);
      DEC_SHARE_REF_CNT(v4);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    DEC_SHARE_REF_CNT(v5);
  bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
}
