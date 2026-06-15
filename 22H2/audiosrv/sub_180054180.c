/*
 * XREFs of sub_180054180 @ 0x180054180
 * Callers:
 *     sub_180001680 @ 0x180001680 (sub_180001680.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 */

int *sub_180054180()
{
  dword_18019F770[0] = 0;
  InitializeCriticalSectionEx(&stru_18019F7B8, 0, 0);
  dword_18019F7E0 = 0;
  memset(&unk_18019F778, 0, 0x40uLL);
  return dword_18019F770;
}
