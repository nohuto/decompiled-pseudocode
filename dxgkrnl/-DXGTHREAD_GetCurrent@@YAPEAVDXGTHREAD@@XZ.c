/*
 * XREFs of ?DXGTHREAD_GetCurrent@@YAPEAVDXGTHREAD@@XZ @ 0x1C0047F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

struct DXGTHREAD *DXGTHREAD_GetCurrent(void)
{
  return DXGTHREAD::GetCurrent();
}
