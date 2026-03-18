/*
 * XREFs of DereferenceClass @ 0x1C005FE40
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     _lambda_fcfb12fcc043a8c73fe9205729fe4b4e_::operator() @ 0x1C015C28C (_lambda_fcfb12fcc043a8c73fe9205729fe4b4e_--operator().c)
 * Callees:
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD **v6; // rdx
  _QWORD *i; // r8
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
      v6 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)v8[0] + 56LL) + 64LL);
      for ( i = *v6; i != *(_QWORD **)v8[0]; i = (_QWORD *)*i )
        ;
      DestroyClass(a1);
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
}
