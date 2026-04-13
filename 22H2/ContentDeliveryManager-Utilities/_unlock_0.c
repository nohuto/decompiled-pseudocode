/*
 * XREFs of _unlock_0 @ 0x1800CFE5D
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B3074 (--1_Lockit@std@@QEAA@XZ.c)
 *     _onexit_0 @ 0x1800CFB70 (_onexit_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall unlock_0(__int64 a1)
{
  return _unlock(a1);
}
