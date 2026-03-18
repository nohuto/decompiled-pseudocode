/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x1C03B8DA4
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0067F38 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1C006AAF0 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
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
