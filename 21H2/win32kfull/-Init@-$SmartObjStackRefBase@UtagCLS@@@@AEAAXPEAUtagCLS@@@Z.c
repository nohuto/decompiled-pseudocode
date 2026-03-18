/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718
 * Callers:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     DereferenceClass @ 0x1C005FE40 (DereferenceClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00606D0 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     _HasCaptionIcon @ 0x1C00684C0 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C0085264 (xxxGetWindowSmIcon.c)
 *     GetClassIcoCur @ 0x1C01065DC (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1C0115194 (xxxSetClassLongPtr.c)
 *     xxxRecreateSmallIcons @ 0x1C0158A28 (xxxRecreateSmallIcons.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A258 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C015A290 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E3498 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1C01E39F8 (_SetClassWord.c)
 *     _WOWModuleUnload @ 0x1C0221974 (_WOWModuleUnload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::Init(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v6; // rdx
  __int64 result; // rax

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v6 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 128) + 8LL);
  }
  result = *(_QWORD *)(v4 + 1472);
  *v6 = result;
  *(_QWORD *)(v4 + 1472) = v6;
  return result;
}
