/*
 * XREFs of DereferenceClass @ 0x1C010AA40
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     DestroyClass @ 0x1C0033D18 (DestroyClass.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E02D4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v4; // rax
  struct _CALLPROCDATA ***v6; // rdx
  struct _CALLPROCDATA **i; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v8, *(_QWORD *)(a2 + 136));
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v4 = v8[0];
  *(_QWORD *)(a2 + 136) = 0LL;
  --*(_DWORD *)(*(_QWORD *)v4 + 72LL);
  if ( *(_QWORD *)v8[0] != *(_QWORD *)(*(_QWORD *)v8[0] + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 56LL) + 72LL);
    if ( !*(_DWORD *)(*(_QWORD *)v8[0] + 72LL) )
    {
      v6 = (struct _CALLPROCDATA ***)(*(_QWORD *)(*(_QWORD *)v8[0] + 56LL) + 64LL);
      for ( i = *v6; i != *(struct _CALLPROCDATA ***)v8[0]; i = (struct _CALLPROCDATA **)*i )
        v6 = (struct _CALLPROCDATA ***)i;
      DestroyClass(a1, v6);
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v8);
}
