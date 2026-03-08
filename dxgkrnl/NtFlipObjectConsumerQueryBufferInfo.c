/*
 * XREFs of NtFlipObjectConsumerQueryBufferInfo @ 0x1C0080040
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C007F2CC (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerQueryBufferInfo(void *a1, unsigned __int64 *a2, struct _LUID *a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  unsigned __int64 v7; // r12
  char v8; // r8
  int v9; // ebx
  struct FlipManagerObject *v10; // rdi
  struct FlipManagerObject *v12; // [rsp+20h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-38h]
  struct _LUID v15; // [rsp+38h] [rbp-30h] BYREF

  v4 = a4;
  if ( a1 && a2 && a3 && a4 )
  {
    v12 = 0LL;
    v15 = 0LL;
    Handle = 0LL;
    v14 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v14 = *a2;
    KeEnterCriticalRegion();
    v9 = FlipManagerObject::ResolveHandle(a1, 1u, v8, &v12);
    v10 = v12;
    if ( v9 >= 0 )
    {
      v9 = FlipManagerObject::ConsumerQueryBufferInfo(v12, v7, &v15, &Handle);
      if ( v9 >= 0 )
      {
        if ( (unsigned __int64)&a3[1] > MmUserProbeAddress || &a3[1] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a3 = v15;
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (_QWORD *)MmUserProbeAddress;
        *v4 = Handle;
        Handle = 0LL;
      }
    }
    if ( v10 )
      ObfDereferenceObject(v10);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
