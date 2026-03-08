/*
 * XREFs of NtFlipObjectQueryLostEvent @ 0x1C0080870
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLostEvent@FlipManagerObject@@QEAAJPEAXPEAPEAX@Z @ 0x1C007F590 (-QueryLostEvent@FlipManagerObject@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectQueryLostEvent(void *a1, HANDLE *a2)
{
  int v4; // ebx
  FlipManagerObject *v5; // rdi
  char v6; // r8
  void *v7; // rdx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  FlipManagerObject *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  KeEnterCriticalRegion();
  if ( !a1 || !a2 )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    v4 = FlipManagerObject::ResolveHandle(a1, 0, v6, &v10);
    v5 = v10;
    if ( v4 >= 0 )
    {
      v4 = FlipManagerObject::QueryLostEvent((PVOID *)v10, v7, &Handle);
      if ( v4 >= 0 )
      {
        if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a2 = Handle;
        Handle = 0LL;
      }
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
