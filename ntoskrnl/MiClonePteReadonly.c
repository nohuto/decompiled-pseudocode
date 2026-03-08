/*
 * XREFs of MiClonePteReadonly @ 0x140660C44
 * Callers:
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 */

_BOOL8 __fastcall MiClonePteReadonly(unsigned __int64 a1)
{
  _KPROCESS *Process; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v4; // rcx
  _BOOL8 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0;
  if ( Process[1].Affinity.StaticBitmap[12] )
  {
    CloneAddress = MiLocateCloneAddress((__int64)Process, a1);
    if ( CloneAddress )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 1680) + 344LL) > CloneAddress[12] )
        return 1;
    }
  }
  return result;
}
