/*
 * XREFs of ?GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C000CBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C01C7AB0 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CFlipExBuffer::GetSwapChainRealizationInfo(
        CFlipExBuffer *this,
        char a2,
        unsigned int *a3,
        struct CSM_REALIZATION_INFO *a4)
{
  NTSTATUS v6; // ebx
  unsigned int v7; // eax
  char *v8; // r13
  unsigned int v9; // r15d
  char *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned int v13; // eax
  struct DXGGLOBAL *Global; // rax
  KPROCESSOR_MODE AccessMode; // bl
  struct _OBJECT_TYPE *ObjectType; // rax
  void *v17; // rax
  HANDLE *v19; // rsi
  void *Handle; // [rsp+40h] [rbp-48h] BYREF
  char v21; // [rsp+98h] [rbp+10h]
  unsigned int *v22; // [rsp+A0h] [rbp+18h]
  ACCESS_MASK DesiredAccess; // [rsp+A8h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v6 = 0;
  if ( !a4 )
    goto LABEL_14;
  v7 = *((_DWORD *)this + 68);
  if ( v7 > *a3 )
    return (unsigned int)-1073741811;
  if ( !v7 || (v8 = (char *)this + 256, v9 = 0, v10 = (char *)*((_QWORD *)this + 32), v10 == (char *)this + 256) )
  {
LABEL_14:
    *a3 = *((_DWORD *)this + 68);
    return (unsigned int)v6;
  }
  while ( 1 )
  {
    v11 = v9;
    v12 = 5LL * v9;
    *((_DWORD *)a4 + 2 * v12) = *((_DWORD *)v10 + 4);
    *(_OWORD *)((char *)a4 + 8 * v12) = *((_OWORD *)v10 + 1);
    *(_OWORD *)((char *)a4 + 8 * v12 + 16) = *((_OWORD *)v10 + 2);
    *((_QWORD *)a4 + v12 + 4) = *((_QWORD *)v10 + 6);
    if ( a2 )
    {
      v17 = (void *)*((_QWORD *)v10 + 7);
      goto LABEL_12;
    }
    if ( (*((_DWORD *)this + 46) & 0x100) != 0 || (DesiredAccess = 983040, *((_DWORD *)this + 68) == 1) )
      DesiredAccess = 983041;
    v13 = *((_DWORD *)v10 + 4) - 2;
    Handle = 0LL;
    if ( v13 > 2 )
      break;
    Global = DXGGLOBAL::GetGlobal();
    AccessMode = (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() == 0;
    ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
    v6 = ObOpenObjectByPointer(*((PVOID *)v10 + 7), 0, 0LL, DesiredAccess, ObjectType, AccessMode, &Handle);
    if ( v6 < 0 )
      goto LABEL_19;
    v17 = Handle;
    a2 = v21;
LABEL_12:
    *((_QWORD *)a4 + 5 * v9++ + 1) = v17;
    v10 = *(char **)v10;
    if ( v10 == v8 )
    {
      a3 = v22;
      goto LABEL_14;
    }
  }
  v6 = -1073741811;
LABEL_19:
  if ( v9 )
  {
    v19 = (HANDLE *)((char *)a4 + 8);
    do
    {
      ObCloseHandle(*v19, 1);
      v19 += 5;
      --v11;
    }
    while ( v11 );
  }
  return (unsigned int)v6;
}
