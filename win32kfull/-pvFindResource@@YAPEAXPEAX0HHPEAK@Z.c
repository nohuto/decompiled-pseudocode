/*
 * XREFs of ?pvFindResource@@YAPEAXPEAX0HHPEAK@Z @ 0x1C00DD128
 * Callers:
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C00BA838 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     cParseFontResources @ 0x1C00BC934 (cParseFontResources.c)
 *     EngFindResource @ 0x1C027BF40 (EngFindResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pvFindResource(void *a1, unsigned __int64 a2, int a3, int a4, unsigned int *a5)
{
  unsigned int v6; // ecx
  unsigned __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  v8[0] = 0LL;
  v9 = 0LL;
  if ( (int)LdrResFindResource(a1, a4, a3, 0LL, v8, &v9, 0LL, 0LL, 0) >= 0 )
  {
    v6 = -1;
    if ( v9 <= 0xFFFFFFFF )
      v6 = v9;
    *a5 = v6;
  }
  return v8[0] & -(__int64)(v8[0] < a2);
}
