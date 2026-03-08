/*
 * XREFs of ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C00F2782
 * Callers:
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00F266A (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C00F26E0 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C01E3C18 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0201754 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

struct CInputDest *__fastcall CTouchProcessor::GetPointerCaptureInt(
        CTouchProcessor *this,
        struct CPointerCaptureInfo *a2,
        int *a3)
{
  CInputDest *v3; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  CInputDest *v11; // r10

  v3 = (struct CPointerCaptureInfo *)((char *)a2 + 8);
  if ( *((_DWORD *)a2 + 2) && (CInputDest::TestWindowFlag(v3, 0x480u) || CInputDest::TestWindowFlag(v11, 0x380u)) )
  {
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v8, v7, v9, v10) )
      CTouchProcessor::ReleasePointerCaptureInt(this, a2);
    if ( a3 )
      *a3 = 0;
    return 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = *((_DWORD *)a2 + 32);
    return (struct CInputDest *)((unsigned __int64)v3 & -(__int64)(*(_DWORD *)v3 != 0));
  }
}
