/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x1C03B44E4
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0067318 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1C0069EC0 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall Lockable::~Lockable(struct _KTHREAD **this)
{
  DXGFASTMUTEX *v1; // rbx

  *this = (struct _KTHREAD *)&Lockable::`vftable';
  v1 = (DXGFASTMUTEX *)(this + 3);
  if ( this[6] == KeGetCurrentThread() )
    DXGFASTMUTEX::Release(this + 3);
  DXGFASTMUTEX::~DXGFASTMUTEX(v1);
}
