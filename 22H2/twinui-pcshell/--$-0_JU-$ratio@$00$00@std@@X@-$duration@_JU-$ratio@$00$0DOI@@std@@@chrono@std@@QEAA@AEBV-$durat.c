/*
 * XREFs of ??$?0_JU?$ratio@$00$00@std@@X@?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$00@std@@@12@@Z @ 0x1802B8AE8
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x1802C6230 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration<__int64,std::ratio<1,1000>>::duration<__int64,std::ratio<1,1000>>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = 1000LL * *a2;
  return a1;
}
