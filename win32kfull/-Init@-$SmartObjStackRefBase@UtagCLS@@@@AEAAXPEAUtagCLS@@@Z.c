/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E02D4
 * Callers:
 *     GetCPD @ 0x1C000DFB4 (GetCPD.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0012624 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C009FCA8 (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C00A47EC (_HasCaptionIcon.c)
 *     GetClassIcoCur @ 0x1C00E123C (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1C00ED0A8 (xxxSetClassLongPtr.c)
 *     DereferenceClass @ 0x1C010AA40 (DereferenceClass.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC6C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C012DCA4 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     _RegisterClassEx @ 0x1C012DD34 (_RegisterClassEx.c)
 *     _SetClassWord @ 0x1C01BF450 (_SetClassWord.c)
 *     xxxRecreateSmallIcons @ 0x1C0230A50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::Init(_QWORD *a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = a1 + 1;
  v6 = ThreadWin32Thread;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 128) + 8LL);
  }
  result = *(_QWORD *)(ThreadWin32Thread + 1512);
  *v5 = result;
  *(_QWORD *)(v6 + 1512) = v5;
  return result;
}
