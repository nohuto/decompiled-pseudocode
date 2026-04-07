/*
 * XREFs of ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@II@Z @ 0x1800BE734
 * Callers:
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18008B730 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualGroupProxy::Update(
        CVisualGroupProxy *this,
        struct CVisualProxy **a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r9
  unsigned int v6; // eax
  _DWORD *v7; // r8
  __int64 v8; // r10
  __int64 v9; // rax
  _BYTE v11[112]; // [rsp+30h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4 + a3;
  if ( a4 + a3 )
  {
    v7 = v11;
    v8 = v6;
    do
    {
      v9 = (__int64)*a2++;
      *v7++ = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 24LL);
      --v8;
    }
    while ( v8 );
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64, int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 624LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v11,
           v5,
           a4);
}
