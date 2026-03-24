/*
 * XREFs of ?SetHandleProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C01EEE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetHandleProperty(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // edi
  PVOID v8; // rsi
  struct _OBJECT_TYPE *v9; // rax
  NTSTATUS v10; // eax
  void *v11; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( a2 == 2 )
  {
    v8 = 0LL;
    if ( !a3
      || (v9 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0250A88)(),
          Object = 0LL,
          v10 = ObReferenceObjectByHandle(a3, 0x1F0000u, v9, 1, &Object, 0LL),
          v8 = Object,
          v4 = v10,
          v10 >= 0) )
    {
      v11 = (void *)*((_QWORD *)this + 10);
      if ( v11 )
        DxgkReleaseCompositionObjectReference(v11);
      *((_QWORD *)this + 10) = v8;
    }
    *((_DWORD *)this + 4) |= 0x20u;
    *a4 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
