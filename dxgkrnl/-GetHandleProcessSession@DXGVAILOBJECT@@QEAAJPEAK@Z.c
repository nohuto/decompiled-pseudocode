/*
 * XREFs of ?GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z @ 0x1C035D350
 * Callers:
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C035C26C (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVAILOBJECT::GetHandleProcessSession(DXGVAILOBJECT *this, unsigned int *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    *a2 = PsGetProcessSessionIdEx(v5);
  else
    v4 = -1073741275;
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return v4;
}
