/*
 * XREFs of ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C0044108
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0043A84 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1C012EEA0 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0044158 (--0CLockedInputSpace@@QEAA@XZ.c)
 */

struct _LUID InputConfig::Mouse::GetInputSpaceId(void)
{
  __int64 v0; // rbx
  _BYTE v2[8]; // [rsp+20h] [rbp-18h] BYREF
  PERESOURCE *v3; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v2);
  v0 = **((_QWORD **)gpInputConfig + 3);
  ExReleaseResourceLite(*v3);
  KeLeaveCriticalRegion();
  return (struct _LUID)v0;
}
