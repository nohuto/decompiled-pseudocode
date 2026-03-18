/*
 * XREFs of ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z @ 0x1C0109014
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0069E3C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C01090A8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

bool __fastcall CallShell::xxxShowWindowPolicyHandler(
        CallShell *this,
        struct tagWND *a2,
        _DWORD *a3,
        enum SHELL_SPECIFIED_SHOW_COMMAND *a4)
{
  int v4; // ebx
  __int64 v7; // rax
  bool result; // al
  __int64 v9; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+28h] [rbp-80h]
  int v11; // [rsp+2Ch] [rbp-7Ch]
  _DWORD v12[20]; // [rsp+30h] [rbp-78h] BYREF

  *a3 = 0;
  v4 = (int)a2;
  memset(v12, 0, sizeof(v12));
  v7 = *(_QWORD *)this;
  *((_DWORD *)this + 80) |= 0x200u;
  v9 = v7;
  v10 = 1;
  v11 = v4;
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v9) )
    return 0;
  result = 1;
  *a3 = v12[0];
  return result;
}
