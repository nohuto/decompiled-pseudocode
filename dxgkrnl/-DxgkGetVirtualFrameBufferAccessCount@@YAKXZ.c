/*
 * XREFs of ?DxgkGetVirtualFrameBufferAccessCount@@YAKXZ @ 0x1C02DAF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 DxgkGetVirtualFrameBufferAccessCount(void)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int *v1; // rcx
  unsigned int v2; // ebx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGGLOBAL *)((char *)Global + 1632), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v1 = (unsigned int *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 203);
  if ( v1 )
    v2 = *v1;
  else
    v2 = 0;
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  return v2;
}
