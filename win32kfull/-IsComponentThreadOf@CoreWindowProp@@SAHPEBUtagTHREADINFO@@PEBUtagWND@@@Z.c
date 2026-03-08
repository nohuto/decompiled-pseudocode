/*
 * XREFs of ?IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0223064
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C002D818 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsComponentThreadOf(const struct tagTHREADINFO *a1, const struct tagWND *a2)
{
  _QWORD *i; // rbx
  const struct tagWND *v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a2, &v6) )
  {
    for ( i = *(_QWORD **)(v6 + 40); i; i = (_QWORD *)*i )
    {
      v4 = (const struct tagWND *)i[1];
      if ( v4 && (unsigned int)CoreWindowProp::IsComponent(v4) && a1 == *(const struct tagTHREADINFO **)(i[1] + 16LL) )
        return 1LL;
    }
  }
  return 0LL;
}
