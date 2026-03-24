/*
 * XREFs of ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C006B8B8
 * Callers:
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C006A828 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipManager::OpenEndpoint(CFlipManager *this, int a2, void **a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rsi
  struct DXGGLOBAL *Global; // rax
  bool v11; // zf
  NTSTATUS v12; // edi
  HANDLE v13; // rcx
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  v6 = (__int64 *)((char *)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 48);
  CurrentProcess = PsGetCurrentProcess();
  if ( *v6 )
  {
    if ( a2
      || (Global = DXGGLOBAL::GetGlobal(v8, v7), !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))()) )
    {
      v11 = *v6 == CurrentProcess;
    }
    else
    {
      if ( *v6 == 1 )
        goto LABEL_9;
      v11 = *v6 == CurrentProcess;
    }
    if ( !v11 )
    {
      v12 = -1073741790;
      goto LABEL_13;
    }
  }
LABEL_9:
  v12 = ObOpenObjectByPointer(
          *(PVOID *)((char *)this + (a2 != 0 ? 8 : 0) + 208),
          0,
          0LL,
          0x100000u,
          (POBJECT_TYPE)ExEventObjectType,
          1,
          &Handle);
  if ( v12 >= 0 )
  {
    if ( !*v6 )
      *v6 = CurrentProcess;
    v13 = Handle;
    Handle = 0LL;
    *a3 = v13;
  }
LABEL_13:
  if ( Handle )
    ObCloseHandle(Handle, 1);
  return (unsigned int)v12;
}
