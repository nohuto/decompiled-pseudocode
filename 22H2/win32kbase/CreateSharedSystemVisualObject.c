/*
 * XREFs of CreateSharedSystemVisualObject @ 0x1C00A5330
 * Callers:
 *     <none>
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C002B5B0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0083A34 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0092BB8 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall CreateSharedSystemVisualObject(struct DirectComposition::ResourceObject **a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  struct DirectComposition::ResourceObject *v4; // rsi
  _DWORD v6[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  struct DirectComposition::ResourceObject *v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  struct DirectComposition::ResourceObject *v14; // [rsp+A8h] [rbp+28h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0, (struct _ACL **)&v14);
  if ( v3 >= 0 )
  {
    v4 = v14;
    v6[1] = 0;
    v10 = 0;
    Handle = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v12 = 0LL;
    v6[0] = 48;
    v9 = 512;
    v11 = v14;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v6,
           3u,
           0LL,
           1,
           64,
           (__int64 (__fastcall *)(PVOID, __int64, char *))DirectComposition::ResourceObject::ObjectInit,
           195LL,
           &Handle);
    if ( v3 >= 0 )
    {
      v14 = 0LL;
      v3 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, &v14);
      if ( v3 >= 0 )
        *a1 = v14;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool((__int64)v4);
  }
  return (unsigned int)v3;
}
