/*
 * XREFs of ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C0084BC4
 * Callers:
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0081BE0 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C00815F8 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1C0084878 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C00849B8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C01C7AB0 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CPoolBufferResource::Create(
        struct CFlipManager *a1,
        __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5,
        struct CPoolBufferResourceState **a6)
{
  CFlipResource *v7; // rdi
  PVOID v8; // r14
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rsi
  NTSTATUS v15; // ebx
  NTSTATUS v16; // eax
  CFlipResource *Pool2; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // cl
  void *EventHandle; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID v24; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0LL;
  EventHandle = 0LL;
  v8 = 0LL;
  SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(a3, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
  v14 = Object;
  v15 = v13;
  if ( v13 >= 0 )
  {
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v15 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( v15 >= 0 )
    {
      v24 = 0LL;
      v16 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v24, 0LL);
      v8 = v24;
      v15 = v16;
      if ( v16 >= 0 )
      {
        Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 96LL, 1919042374LL);
        v7 = Pool2;
        if ( Pool2 )
        {
          CFlipResource::CFlipResource(Pool2, a2, a5);
          v18 = (__int64)*a4;
          *((_DWORD *)v7 + 22) = 0;
          *((_QWORD *)v7 + 10) = v18;
          *(_QWORD *)v7 = &CPoolBufferResource::`vftable';
          *((_QWORD *)v7 + 7) = a1;
          *((_QWORD *)v7 + 8) = v14;
          *((_QWORD *)v7 + 9) = v8;
          *((_QWORD *)v7 + 6) = _InterlockedIncrement64(&CPoolBufferResource::s_nextUniqueId);
          v19 = DXGQUOTAALLOCATOR<256,1935819590>::operator new();
          if ( v19 )
          {
            v20 = *(_BYTE *)(v19 + 32);
            *(_QWORD *)v19 = &CFlipResourceState::`vftable';
            *(_QWORD *)(v19 + 24) = v7;
            *(_BYTE *)(v19 + 32) = v20 & 0xF0 | 1;
            *(_QWORD *)(v19 + 16) = v19 + 8;
            *(_QWORD *)(v19 + 8) = v19 + 8;
            ++*(_DWORD *)(*(_QWORD *)(v19 + 24) + 24LL);
            *(_QWORD *)v19 = &CPoolBufferResourceState::`vftable';
            *a6 = (struct CPoolBufferResourceState *)v19;
          }
          else
          {
            v15 = -1073741801;
          }
          goto LABEL_13;
        }
        v7 = 0LL;
        v15 = -1073741801;
      }
    }
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v8 )
    ObfDereferenceObject(v8);
LABEL_13:
  if ( EventHandle )
    ObCloseHandle(EventHandle, 0);
  if ( v7 )
    CFlipResource::Release(v7);
  return (unsigned int)v15;
}
