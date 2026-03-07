__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetHandleProperty(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // edi
  PVOID v8; // rsi
  __int64 DxgkWin32kInterface; // rax
  struct _OBJECT_TYPE *v10; // rax
  NTSTATUS v11; // eax
  void *v12; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( (_DWORD)a2 == 2 )
  {
    v8 = 0LL;
    if ( !a3
      || (DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(this, a2),
          v10 = (struct _OBJECT_TYPE *)(*(__int64 (**)(void))(DxgkWin32kInterface + 496))(),
          Object = 0LL,
          v11 = ObReferenceObjectByHandle(a3, 0x1F0000u, v10, 1, &Object, 0LL),
          v8 = Object,
          v4 = v11,
          v11 >= 0) )
    {
      v12 = (void *)*((_QWORD *)this + 10);
      if ( v12 )
        DxgkReleaseCompositionObjectReference(v12);
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
