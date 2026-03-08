/*
 * XREFs of ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C026CCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  int v4; // ebx
  bool *v5; // rsi
  void *v7; // rcx
  void *v8; // rax
  void *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a4;
  *a4 = 0;
  if ( a2 == 1 )
  {
    v7 = 0LL;
    v10 = 0LL;
    if ( a3 )
    {
      LOBYTE(a4) = 1;
      v4 = DxgkReferenceCompositionObject(a3, 0LL, 4LL, a4, &v10);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v7 = v10;
    }
    v8 = (void *)*((_QWORD *)this + 14);
    if ( v7 == v8 )
    {
      if ( v7 )
        DxgkReleaseCompositionObjectReference(v7);
    }
    else
    {
      if ( v8 )
      {
        DxgkReleaseCompositionObjectReference(*((void **)this + 14));
        v7 = v10;
      }
      *((_DWORD *)this + 4) |= 0x40u;
      *((_QWORD *)this + 14) = v7;
      *v5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
