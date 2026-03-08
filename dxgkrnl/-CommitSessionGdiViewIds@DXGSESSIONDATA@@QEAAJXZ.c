/*
 * XREFs of ?CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035043C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::CommitSessionGdiViewIds(DXGSESSIONDATA *this)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGSESSIONDATA *)((char *)this + 19088), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  if ( *((_QWORD *)this + 2394) )
  {
    *((_DWORD *)this + 4784) += *((_DWORD *)this + 4785);
    *((_DWORD *)this + 4785) = 0;
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
  return 0LL;
}
