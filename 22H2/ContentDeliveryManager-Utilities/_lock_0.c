/*
 * XREFs of _lock_0 @ 0x1800CFE51
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800B2FE4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     _onexit_0 @ 0x1800CFB70 (_onexit_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall lock_0(__int64 a1)
{
  return _lock(a1);
}
