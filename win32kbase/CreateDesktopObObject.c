/*
 * XREFs of CreateDesktopObObject @ 0x1C00C28E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall CreateDesktopObObject(__int64 a1, void *a2, __int64 a3, void **a4)
{
  void **v5; // rsi
  __int64 result; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS ObjectSecurity; // ebx
  void **v14; // [rsp+40h] [rbp-40h]
  _DWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  unsigned __int8 MemoryAllocated; // [rsp+A0h] [rbp+20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B8h] [rbp+38h] BYREF

  *a4 = 0LL;
  v5 = a4;
  v15[1] = 0;
  v19 = 0;
  SecurityDescriptor = 0LL;
  v16 = 0LL;
  v18 = 0;
  v14 = a4;
  LOBYTE(a4) = 1;
  v17 = a1;
  MemoryAllocated = 0;
  v15[0] = 48;
  v20 = 0LL;
  result = ObCreateObject(0LL, ExDesktopObjectType, v15, a4, 0LL, 336, 0, 0, v14);
  if ( (int)result >= 0 )
  {
    v8 = *v5;
    memset(*v5, 0, 0x150uLL);
    *v8 = *(_DWORD *)SGDGetUserSessionState(v10, v9, v11, v12);
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
