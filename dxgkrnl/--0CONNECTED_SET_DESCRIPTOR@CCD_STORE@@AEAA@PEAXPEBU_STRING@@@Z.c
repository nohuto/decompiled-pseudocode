/*
 * XREFs of ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01BF808
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01BF8C0 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01BB2A4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C01BEEB4 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_STORE::CONNECTED_SET_DESCRIPTOR *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR(
        CCD_STORE::CONNECTED_SET_DESCRIPTOR *this,
        void *a2,
        const struct _STRING *a3)
{
  __int64 v6; // rbp
  _BYTE v8[64]; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = a2;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( a3 )
  {
    CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v8, a3);
    v6 = *(int *)CCD_SET_STRING_ID::operator=(this, (__int64)v8);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v8);
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry4(1LL, v6, this, a2, a3);
      CCD_SET_STRING_ID::_Cleanup(this);
    }
  }
  return this;
}
