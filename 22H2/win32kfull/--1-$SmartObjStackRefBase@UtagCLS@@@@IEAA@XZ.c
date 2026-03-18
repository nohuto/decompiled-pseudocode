/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C00EBBE4
 * Callers:
 *     GetCPD @ 0x1C000ECF4 (GetCPD.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0013364 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     DereferenceClass @ 0x1C001F550 (DereferenceClass.c)
 *     _HasCaptionIcon @ 0x1C00631C8 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C0065C34 (xxxGetWindowSmIcon.c)
 *     GetClassIcoCur @ 0x1C00AA16C (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1C00ADCA8 (xxxSetClassLongPtr.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00EA67C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00EA8C8 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A674 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _RegisterClassEx @ 0x1C013A6EC (_RegisterClassEx.c)
 *     _SetClassWord @ 0x1C01BE2B0 (_SetClassWord.c)
 *     xxxRecreateSmallIcons @ 0x1C022DD3C (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00EAEF8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(__int64 *a1)
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
