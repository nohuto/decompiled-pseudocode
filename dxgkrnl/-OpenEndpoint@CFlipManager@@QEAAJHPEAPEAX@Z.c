__int64 __fastcall CFlipManager::OpenEndpoint(CFlipManager *this, int a2, void **a3)
{
  __int64 *v6; // rbx
  __int64 CurrentProcess; // rsi
  struct DXGGLOBAL *Global; // rax
  bool v9; // zf
  NTSTATUS v10; // edi
  HANDLE v11; // rcx
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  v6 = (__int64 *)((char *)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 48);
  CurrentProcess = PsGetCurrentProcess();
  if ( *v6 )
  {
    if ( a2 || (Global = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))()) )
    {
      v9 = *v6 == CurrentProcess;
    }
    else
    {
      if ( *v6 == 1 )
        goto LABEL_9;
      v9 = *v6 == CurrentProcess;
    }
    if ( !v9 )
    {
      v10 = -1073741790;
      goto LABEL_13;
    }
  }
LABEL_9:
  v10 = ObOpenObjectByPointer(
          *(PVOID *)((char *)this + (a2 != 0 ? 8 : 0) + 288),
          0,
          0LL,
          0x100000u,
          (POBJECT_TYPE)ExEventObjectType,
          1,
          &Handle);
  if ( v10 >= 0 )
  {
    if ( !*v6 )
      *v6 = CurrentProcess;
    v11 = Handle;
    Handle = 0LL;
    *a3 = v11;
  }
LABEL_13:
  if ( Handle )
    ObCloseHandle(Handle, 1);
  return (unsigned int)v10;
}
