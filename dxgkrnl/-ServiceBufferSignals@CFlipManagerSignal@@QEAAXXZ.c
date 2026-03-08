/*
 * XREFs of ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x1C0081628
 * Callers:
 *     ??1CFlipManagerSignal@@UEAA@XZ @ 0x1C00814B8 (--1CFlipManagerSignal@@UEAA@XZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084098 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C00815F8 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0084EE0 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CFlipManagerSignal::ServiceBufferSignals(CFlipManagerSignal *this)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rcx

  if ( *((_DWORD *)this + 8) )
  {
    v2 = 0LL;
    do
    {
      v3 = *((_QWORD *)this + 3);
      CPoolBufferResource::RemoveUsageReference(*(CPoolBufferResource **)(v3 + 8 * v2));
      CFlipResource::Release(*(CFlipResource **)(v3 + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 8) );
    v4 = (void *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = 0;
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)this + 3) = 0LL;
  }
}
