/*
 * XREFs of ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C007E54C
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C007C734 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1C01704E0 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC (--0CLockedInputSpace@@QEAA@XZ.c)
 */

struct _LUID InputConfig::Mouse::GetInputSpaceId(void)
{
  __int64 *v0; // rbx
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-18h] BYREF
  PERESOURCE *v4; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v3);
  v0 = (__int64 *)*((_QWORD *)gpInputConfig + 3);
  if ( !v0 )
    v0 = (__int64 *)((char *)gpInputConfig + 32);
  v1 = *v0;
  ExReleaseResourceLite(*v4);
  KeLeaveCriticalRegion();
  return (struct _LUID)v1;
}
