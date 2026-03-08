/*
 * XREFs of AMLIFindNameSpaceObject @ 0x1C0048110
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x1C002FA10 (ACPIIoctlEnumChildren.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     FindNSObjMainNoLock @ 0x1C004B2F4 (FindNSObjMainNoLock.c)
 *     GetBaseObject @ 0x1C004B918 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 */

__int64 __fastcall AMLIFindNameSpaceObject(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  size_t v7; // rbx
  _BYTE *Pool2; // rdi
  unsigned int NSObjMainNoLock; // esi
  __int64 BaseObject; // rax
  __int64 v12; // rbp
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v15; // r8
  void *v16; // rbx
  __int64 v17; // rax
  KIRQL v18; // bl
  __int64 v19; // rdx
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a4[v7] );
  if ( v7 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v7 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, a4, v7);
  Pool2[v7] = 0;
  if ( (*(_BYTE *)(*a1 + 64LL) & 4) != 0 )
  {
    NSObjMainNoLock = -1073741738;
  }
  else
  {
    BaseObject = GetBaseObject(*a1);
    v12 = BaseObject;
    if ( (gDebugger & 8) != 0 )
    {
      ObjectPath = GetObjectPath(BaseObject);
      CurrentThread = (unsigned int)KeGetCurrentThread();
      v15 = &unk_1C00622D0;
      v16 = (void *)ObjectPath;
      if ( ObjectPath )
        LODWORD(v15) = ObjectPath;
      PrintDebugMessage(53, CurrentThread, (_DWORD)v15, 0, 0LL);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
    }
    v17 = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 2) = 2;
    *(_DWORD *)(v17 + 24) = 0;
    *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL) = 2;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = 0LL;
    v18 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NSObjMainNoLock = FindNSObjMainNoLock(Pool2);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v18);
    DereferenceObjectEx(v12, v19);
  }
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return NSObjMainNoLock;
}
