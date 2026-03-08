/*
 * XREFs of ?vSrcTranCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0276F70
 * Callers:
 *     <none>
 * Callees:
 *     ?vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1C02770BC (-vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 */

void __fastcall vSrcTranCopyS8D16(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  unsigned __int8 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  unsigned int v18; // eax
  void (*v19)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **); // [rsp+58h] [rbp-50h]

  v14 = (unsigned __int8 *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 488LL);
  v17 = 0;
  v18 = 2 * (a6 - a5) + 8;
  if ( v18 > 0x1F40 )
  {
    v14 = (unsigned __int8 *)Win32AllocPool(v18, 1869899079LL, v15, v16);
    if ( !v14 )
      return;
    v17 = 1;
  }
  vSrcTranCopyS8D16New(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v19, v14);
  if ( v17 )
    Win32FreePool(v14);
}
