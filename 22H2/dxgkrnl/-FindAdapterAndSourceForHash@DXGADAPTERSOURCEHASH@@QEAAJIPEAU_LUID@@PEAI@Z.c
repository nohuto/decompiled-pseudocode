/*
 * XREFs of ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0312E5C
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C016C8C0 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01D8BA0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C01EAD10 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int v8; // eax
  struct _LUID *v9; // rcx
  unsigned int v10; // ebx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v8 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  if ( v8 > 1 << *((_DWORD *)this + 17) )
    v8 = 1 << *((_DWORD *)this + 17);
  if ( a2 >= v8 )
  {
    WdLogSingleEntry2(3LL, a2, v8);
LABEL_7:
    v10 = -1073741811;
    goto LABEL_9;
  }
  v9 = (struct _LUID *)(*((_QWORD *)this + 6) + 16LL * a2);
  if ( (v9[1].HighPart & 1) == 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    goto LABEL_7;
  }
  v10 = 0;
  *a3 = *v9;
  *a4 = v9[1].LowPart;
LABEL_9:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v10;
}
