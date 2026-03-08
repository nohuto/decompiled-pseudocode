/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4
 * Callers:
 *     GetCPD @ 0x1C000DFB4 (GetCPD.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0012624 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0033820 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0033A6C (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C009FCA8 (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C00A47EC (_HasCaptionIcon.c)
 *     GetClassIcoCur @ 0x1C00E123C (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1C00ED0A8 (xxxSetClassLongPtr.c)
 *     DereferenceClass @ 0x1C010AA40 (DereferenceClass.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC8C (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _RegisterClassEx @ 0x1C012DD34 (_RegisterClassEx.c)
 *     _SetClassWord @ 0x1C01BF450 (_SetClassWord.c)
 *     xxxRecreateSmallIcons @ 0x1C0230A50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C003409C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(a1);
  result = *(_QWORD **)(v2 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v2 + 1512) = result;
  }
  return result;
}
