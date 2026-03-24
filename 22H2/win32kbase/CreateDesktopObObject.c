/*
 * XREFs of CreateDesktopObObject @ 0x1C00ABAF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall CreateDesktopObObject(__int64 a1, void *a2, __int64 a3, void **a4)
{
  void **v5; // rsi
  __int64 result; // rax
  _DWORD *v8; // rdi
  NTSTATUS ObjectSecurity; // ebx
  void **v10; // [rsp+40h] [rbp-40h]
  _DWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  __int128 v16; // [rsp+70h] [rbp-10h]
  unsigned __int8 MemoryAllocated; // [rsp+A0h] [rbp+20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B8h] [rbp+38h] BYREF

  *a4 = 0LL;
  v5 = a4;
  v11[1] = 0;
  v15 = 0;
  SecurityDescriptor = 0LL;
  v12 = 0LL;
  v14 = 0;
  v10 = a4;
  LOBYTE(a4) = 1;
  v13 = a1;
  MemoryAllocated = 0;
  v11[0] = 48;
  v16 = 0LL;
  result = ObCreateObject(0LL, ExDesktopObjectType, v11, a4, 0LL, 344, 0, 0, v10);
  if ( (int)result >= 0 )
  {
    v8 = *v5;
    memset(*v5, 0, 0x158uLL);
    *v8 = gSessionId;
    ObjectSecurity = ObGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated);
    if ( ObjectSecurity < 0
      || (ObjectSecurity = ObAssignSecurity(a3, SecurityDescriptor, v8, ExDesktopObjectType),
          ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated),
          ObjectSecurity < 0) )
    {
      ObfDereferenceObject(v8);
      *v5 = 0LL;
    }
    return (unsigned int)ObjectSecurity;
  }
  return result;
}
