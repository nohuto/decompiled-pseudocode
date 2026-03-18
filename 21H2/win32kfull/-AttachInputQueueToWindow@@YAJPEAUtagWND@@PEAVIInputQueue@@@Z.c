/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00FF424
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00FF328 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00FF4A8 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00FF5E0 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C00FF618 (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  CInputQueueProp *v4; // rbx
  int v5; // edi
  struct tagWND *v7; // rdx
  CInputQueueProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v8) )
  {
    v4 = v8;
  }
  else
  {
    v5 = CWindowProp::CreateWindowProp<CInputQueueProp>(&v8);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v7 = a1;
    v4 = v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, (__int64)v7) )
    {
      (**(void (__fastcall ***)(CInputQueueProp *))v4)(v4);
      return (unsigned int)-1073741790;
    }
  }
  v5 = CInputQueueProp::AttachInputQueue(v4, a2);
  if ( v5 < 0 && !*((_DWORD *)v4 + 8) )
    CWindowProp::RemoveAndDeleteProp(v4);
  return (unsigned int)v5;
}
