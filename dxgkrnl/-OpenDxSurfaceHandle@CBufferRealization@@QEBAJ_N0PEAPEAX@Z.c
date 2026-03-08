/*
 * XREFs of ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C007E4A4
 * Callers:
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C007D4F4 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C01C7AB0 (DxgkGetSharedAllocationObjectType.c)
 */

NTSTATUS __fastcall CBufferRealization::OpenDxSurfaceHandle(
        CBufferRealization *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        void **a4)
{
  KPROCESSOR_MODE AccessMode; // di
  ULONG v7; // ebx
  int v8; // r14d
  struct DXGGLOBAL *Global; // rax
  struct _OBJECT_TYPE *ObjectType; // rax

  *a4 = 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    return -1073741811;
  AccessMode = 1;
  v7 = a3 << 9;
  v8 = a2;
  if ( a3 || (Global = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))()) )
    AccessMode = 0;
  ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  return ObOpenObjectByPointer(*((PVOID *)this + 8), v7, 0LL, v8 + 983040, ObjectType, AccessMode, a4);
}
