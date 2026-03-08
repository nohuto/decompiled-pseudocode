/*
 * XREFs of ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C00D3BE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DrvDriverExtraCallback(
        unsigned __int16 *a1,
        __int64 a2,
        void *a3,
        unsigned __int16 a4,
        void *a5,
        _WORD *a6)
{
  unsigned __int16 v6; // ax

  v6 = a6[35];
  if ( v6 >= a4 )
    v6 = a4;
  a6[35] = v6;
  memmove(a6 + 110, a3, v6);
  return 0LL;
}
