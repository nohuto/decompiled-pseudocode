/*
 * XREFs of ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00A2FD0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 */

void __fastcall CHMRefHwndByHandle::~CHMRefHwndByHandle(CHMRefHwndByHandle *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    HMUnlockObject(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      HMUnlockObjectInternal((_DWORD *)v3);
    *((_QWORD *)this + 1) = 0LL;
  }
}
