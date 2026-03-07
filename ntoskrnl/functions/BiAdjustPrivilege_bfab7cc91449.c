__int64 __fastcall BiAdjustPrivilege(unsigned int a1, char a2, bool *a3)
{
  NTSTATUS v6; // ebx
  int v7; // eax
  int v8; // eax
  NTSTATUS v10; // eax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+4Ch] [rbp-24h]
  int v16; // [rsp+54h] [rbp-1Ch]
  __int128 v17; // [rsp+58h] [rbp-18h]

  v12 = 0;
  v16 = 0;
  Handle = (HANDLE)-1LL;
  v17 = 0LL;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 1u, 0x200u, &Handle);
    if ( v6 >= 0 )
      goto LABEL_3;
    v10 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 0, 0x200u, &Handle);
  }
  else
  {
    v10 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, &Handle);
  }
  v6 = v10;
LABEL_3:
  if ( v6 >= 0 )
  {
    v13 = a1;
    v15 = a1;
    v7 = 0;
    v14 = 1;
    if ( a2 )
      v7 = 2;
    v16 = v7;
    v8 = ZwAdjustPrivilegesToken((__int64)Handle, 0LL);
    v6 = v8;
    if ( v8 == 262 )
    {
      v6 = -1073741727;
    }
    else if ( v8 >= 0 )
    {
      if ( (_DWORD)v17 )
        *a3 = (BYTE12(v17) & 2) != 0;
      else
        *a3 = a2 != 0;
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  return (unsigned int)v6;
}
