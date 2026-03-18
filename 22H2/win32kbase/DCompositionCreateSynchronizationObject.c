/*
 * XREFs of DCompositionCreateSynchronizationObject @ 0x1C0209030
 * Callers:
 *     NtDCompositionCreateSynchronizationObject @ 0x1C0209550 (NtDCompositionCreateSynchronizationObject.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C002CAF0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C009DD88 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C020AF14 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DCompositionCreateSynchronizationObject(struct DirectComposition::SynchronizationObject **a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  char *v4; // rdi
  __int64 v6; // [rsp+28h] [rbp-58h]
  _DWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  struct DirectComposition::SynchronizationObject *v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  struct DirectComposition::SynchronizationObject *v15; // [rsp+B0h] [rbp+30h] BYREF

  v15 = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (__int64 *)&v15);
  if ( v3 >= 0 )
  {
    v4 = (char *)v15;
    v7[1] = 0;
    v11 = 0;
    Handle = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v13 = 0LL;
    LODWORD(v6) = 40;
    v7[0] = 48;
    v10 = 512;
    v12 = v15;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v7,
           1u,
           0LL,
           3,
           v6,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::SynchronizationObject::ObjectInit,
           0LL,
           &Handle);
    if ( v3 >= 0 )
    {
      v15 = 0LL;
      v3 = DirectComposition::SynchronizationObject::ResolveHandle(Handle, 3u, 0, &v15);
      if ( v3 >= 0 )
        *a1 = v15;
      ObCloseHandle(Handle, 0);
    }
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  }
  return (unsigned int)v3;
}
