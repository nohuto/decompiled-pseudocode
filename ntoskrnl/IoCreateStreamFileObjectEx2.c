/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x1406B5020
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x1406B4FD0 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObject @ 0x140870BD0 (IoCreateStreamFileObject.c)
 *     IoCreateStreamFileObjectEx @ 0x140872AB0 (IoCreateStreamFileObjectEx.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     IopIncrementVpbRefCount @ 0x14023FD50 (IopIncrementVpbRefCount.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

NTSTATUS __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, PVOID *a4, HANDLE *a5)
{
  HANDLE *v5; // r14
  __int16 v6; // r12
  ULONG_PTR v8; // r15
  int SetSpecificExtension; // edi
  _QWORD *v11; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  struct _SLIST_ENTRY *v14; // rdx
  ULONG_PTR v15; // rcx
  NTSTATUS result; // eax
  PVOID v17; // rcx
  _DWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+6Ch] [rbp-14h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  Object = 0LL;
  v18[1] = 0;
  v8 = a3;
  v22 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return -1073741637;
  }
  if ( v6 && v5 )
    goto LABEL_32;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    goto LABEL_8;
  }
  if ( !a3 )
  {
LABEL_32:
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return -1073741811;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v8, 1);
  v18[0] = 48;
  v19 = 0LL;
  v21 = 512;
  v20 = 0LL;
  v23 = 0LL;
  LOWORD(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)v18, 0);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v8, 0, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return SetSpecificExtension;
  }
  memset(Object, 0, 0xD8uLL);
  *(_WORD *)Object = 5;
  *((_WORD *)Object + 1) = 216;
  *((_QWORD *)Object + 1) = v8;
  *((_DWORD *)Object + 20) = 256;
  KeInitializeEvent((PRKEVENT)((char *)Object + 152), SynchronizationEvent, 0);
  *((_QWORD *)Object + 23) = 0LL;
  v11 = (char *)Object + 192;
  *((_QWORD *)Object + 25) = (char *)Object + 192;
  *v11 = v11;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    v14 = (struct _SLIST_ENTRY *)*((_QWORD *)Object - 2);
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v14);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v14);
    }
    *((_QWORD *)Object - 2) = 0LL;
LABEL_13:
    *((_DWORD *)Object + 20) |= 0x40000u;
    v15 = *(_QWORD *)(v8 + 56);
    if ( v15 )
      IopIncrementVpbRefCount(v15, 1);
    if ( !v6 )
    {
      if ( v5 )
      {
        v17 = Object;
        *v5 = Handle;
        ObfDereferenceObject(v17);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      a5 = 0LL;
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)Object, 1u, 0x20u, 1, &a5, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v5 )
        {
          ObCloseHandle(*v5, 0);
          *v5 = 0LL;
        }
        else
        {
          ObfDereferenceObject(Object);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return SetSpecificExtension;
      }
      *a5 = *(HANDLE *)(a1 + 8);
    }
    *a4 = Object;
    return SetSpecificExtension;
  }
  result = ObInsertObject(Object, 0LL, 1u, 1u, &Object, &Handle);
  SetSpecificExtension = result;
  if ( result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
