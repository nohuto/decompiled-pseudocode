/*
 * XREFs of ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01CDFB0
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z @ 0x1C01CE304 (-IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsAnyMessageNonDelegated(CPointerInfoNode *this)
{
  __int64 result; // rax
  unsigned int *v2; // rcx
  CPointerInfoNode *v3; // rcx
  CPointerInfoNode *v4; // rcx
  int v5; // ecx
  __int64 v6; // r11
  CPointerInfoNode *v7; // rcx
  int v8; // r11d
  unsigned int v9; // r10d

  result = CPointerInfoNode::IsValid(this);
  if ( (_DWORD)result )
  {
    v3 = (CPointerInfoNode *)*v2;
    if ( ((unsigned int)v3 & 0x100000) == 0
      || ((unsigned int)v3 & 0x400000) != 0
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         v3,
                         -__CFSHR__((_DWORD)v3, 24),
                         -__CFSHR__((_DWORD)v3, 25),
                         -__CFSHR__((_DWORD)v3, 27))
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         v4,
                         -__CFSHR__((_DWORD)v4, 28),
                         (8 * (int)v4) >> 31,
                         (2 * (int)v4) >> 31)
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         (CPointerInfoNode *)(unsigned int)(v5 >> 31),
                         v5 >> 31,
                         -(*(_DWORD *)(v6 + 4) & 1),
                         -__CFSHR__(*(_DWORD *)(v6 + 4), 3))
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         v7,
                         -__CFSHR__(v8, 4),
                         -__CFSHR__(v8, 5),
                         -__CFSHR__(v8, 7)) )
    {
      return 1;
    }
    return v9;
  }
  return result;
}
