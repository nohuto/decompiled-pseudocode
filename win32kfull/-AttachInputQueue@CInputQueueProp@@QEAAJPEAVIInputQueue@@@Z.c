/*
 * XREFs of ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00299D8
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0029A64 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C002992C (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueueProp::AttachInputQueue(
        CInputQueueProp *this,
        struct IInputQueue *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  void (__fastcall **v7)(_QWORD); // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v6 = CDynamicArray<IInputQueue *,2003858261>::Grow((__int64)this + 24, (__int64)a2, a3, a4);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(*((_DWORD *)this + 8))++) = a2;
    (**(void (__fastcall ***)(struct IInputQueue *))a2)(a2);
  }
  v7 = *(void (__fastcall ***)(_QWORD))a2;
  v9 = 0;
  if ( ((int (__fastcall *)(struct IInputQueue *, int *))v7[6])(a2, &v9) >= 0 )
    *((_DWORD *)this + 13) = v9;
  return (unsigned int)v6;
}
