/*
 * XREFs of CreateSharedResourceObject @ 0x1C0058874
 * Callers:
 *     CreateSharedSystemVisualObject @ 0x1C0058300 (CreateSharedSystemVisualObject.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00585EC (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1C0058750 (NtDCompositionCreateSharedResourceHandle.c)
 *     CreateSharedSystemVisualBitmapObject @ 0x1C0210D30 (CreateSharedSystemVisualBitmapObject.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0058980 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0093F84 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C009C73C (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall CreateSharedResourceObject(
        unsigned int a1,
        unsigned int a2,
        struct DirectComposition::ResourceObject **a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  void *v6; // rdi
  void *v8; // [rsp+50h] [rbp+7h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+74h] [rbp+2Bh]
  void *v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+80h] [rbp+37h]
  HANDLE Handle; // [rsp+C8h] [rbp+7Fh] BYREF

  v8 = 0LL;
  v3 = a1;
  v5 = UserAllocDefaultCompositionSecurityDescriptor(a2, &v8);
  if ( v5 >= 0 )
  {
    v6 = v8;
    v9[1] = 0;
    v13 = 0;
    Handle = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v15 = 0LL;
    v9[0] = 48;
    v12 = 512;
    v14 = v8;
    v5 = CompositionObject::Create(
           &Handle,
           v9,
           3LL,
           0LL,
           1,
           64,
           DirectComposition::ResourceObject::ObjectInit,
           v3,
           &Handle);
    if ( v5 >= 0 )
    {
      v5 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3u, 0, a3);
      ObCloseHandle(Handle, 0);
    }
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v6);
  }
  return (unsigned int)v5;
}
