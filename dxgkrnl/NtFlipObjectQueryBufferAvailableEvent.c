/*
 * XREFs of NtFlipObjectQueryBufferAvailableEvent @ 0x1C0080630
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C007F520 (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectQueryBufferAvailableEvent(void *a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 v5; // r15
  char v6; // r8
  int v7; // ebx
  struct FlipManagerObject *v8; // rdi
  HANDLE Handle; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]
  struct FlipManagerObject *v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( a1 && a2 && a3 )
  {
    v12 = 0LL;
    Handle = 0LL;
    v11 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    v11 = *a2;
    KeEnterCriticalRegion();
    v7 = FlipManagerObject::ResolveHandle(a1, 2u, v6, &v12);
    v8 = v12;
    if ( v7 >= 0 )
    {
      v7 = FlipManagerObject::QueryBufferAvailableEvent(v12, v5, &Handle);
      if ( v7 >= 0 )
      {
        if ( (unsigned __int64)v3 >= MmUserProbeAddress )
          v3 = (_QWORD *)MmUserProbeAddress;
        *v3 = Handle;
        Handle = 0LL;
      }
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
