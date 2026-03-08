/*
 * XREFs of ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C035D9A0
 * Callers:
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C03417F0 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGVAILOBJECT::SetHandleProcess(DXGVAILOBJECT *this, struct _EPROCESS *a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  if ( a2 || PsGetCurrentProcess(v4) == *((_QWORD *)this + 12) )
  {
    v5 = (void *)*((_QWORD *)this + 12);
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 12) = a2;
      ObfReferenceObject(a2);
    }
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
