/*
 * XREFs of ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C0150A36
 * Callers:
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C01509EA (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C02F36F8 (-bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02F4634 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WIDEPATHOBJ::bGrowPath(WIDEPATHOBJ *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( !v2
    || (v3 = *(_QWORD *)(v2 + 8) + 24LL, v4 = v2 + *(unsigned int *)(v2 + 16), v4 <= v3)
    || (v5 = (__int64)(v4 - v3) >> 3, (unsigned int)v5 < 8) )
  {
    result = newpathalloc();
    v2 = result;
    if ( !result )
      return result;
    *(_QWORD *)result = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = result;
    v5 = ((unsigned __int64)(unsigned int)(result + *(_DWORD *)(result + 16) - *(_DWORD *)(result + 8)) - 24) >> 3;
  }
  v7 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v2 + 8);
  v9 = *(_QWORD **)(v7 + 40);
  if ( v9 )
  {
    *v9 = v8;
    v10 = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v8;
    v10 = 0LL;
  }
  *(_QWORD *)(v8 + 8) = v10;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v8;
  *(_QWORD *)v8 = 0LL;
  *(_DWORD *)(v8 + 20) = 0;
  *((_QWORD *)this + 16) = v8 + 24;
  result = 1LL;
  *((_QWORD *)this + 17) = v8 + 8 * ((unsigned int)v5 + 3LL);
  return result;
}
