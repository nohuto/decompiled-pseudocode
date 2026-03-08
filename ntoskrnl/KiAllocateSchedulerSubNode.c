/*
 * XREFs of KiAllocateSchedulerSubNode @ 0x14056E238
 * Callers:
 *     KiAllocateProcessorNumber @ 0x14037279C (KiAllocateProcessorNumber.c)
 * Callees:
 *     KiInitializeSchedulerSubNode @ 0x1403A3758 (KiInitializeSchedulerSubNode.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 */

_WORD *__fastcall KiAllocateSchedulerSubNode(_WORD *a1)
{
  char v1; // si
  _WORD *Pool3; // rax
  _WORD *v4; // rbx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v1 = KiHgsPlusConfiguration;
  v6 = 0LL;
  LOBYTE(v6) = 3;
  *(_QWORD *)&v6 = v6 | 0x100;
  DWORD2(v6) = (unsigned __int16)a1[1];
  Pool3 = (_WORD *)ExAllocatePool3(
                     72,
                     336 * (unsigned int)(unsigned __int8)KiHgsPlusConfiguration + 384,
                     1850960203,
                     (unsigned int)&v6,
                     1);
  v4 = Pool3;
  if ( Pool3 )
  {
    KiInitializeSchedulerSubNode(Pool3, a1);
    *((_BYTE *)v4 + 185) = v1;
    *((_QWORD *)v4 + 24) = v4 + 192;
  }
  return v4;
}
