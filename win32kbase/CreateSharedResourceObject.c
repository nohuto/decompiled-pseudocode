/*
 * XREFs of CreateSharedResourceObject @ 0x1C00A19E4
 * Callers:
 *     CreateSharedSystemVisualBitmapObject @ 0x1C000DDF0 (CreateSharedSystemVisualBitmapObject.c)
 *     CreateSharedSystemVisualObject @ 0x1C00A12E0 (CreateSharedSystemVisualObject.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00A1498 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1C00A18F0 (NtDCompositionCreateSharedResourceHandle.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0065460 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00A7DB4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00AD178 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall CreateSharedResourceObject(__int64 a1, struct DirectComposition::ResourceObject **a2)
{
  int v3; // ebx
  char *v4; // rdi
  _DWORD v6[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  void *v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  void *v14; // [rsp+B8h] [rbp+38h] BYREF

  v14 = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (__int64 *)&v14);
  if ( v3 >= 0 )
  {
    v4 = (char *)v14;
    v6[1] = 0;
    v10 = 0;
    Handle = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v12 = 0LL;
    v6[0] = 48;
    v9 = 512;
    v11 = v14;
    v3 = CompositionObject::Create(&Handle, v6, 3LL);
    if ( v3 >= 0 )
    {
      v3 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3u, 0, a2);
      ObCloseHandle(Handle, 0);
    }
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  }
  return (unsigned int)v3;
}
