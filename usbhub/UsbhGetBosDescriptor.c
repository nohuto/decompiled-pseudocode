__int64 __fastcall UsbhGetBosDescriptor(__int64 a1, __int64 a2, _WORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  unsigned __int16 *Pool2; // rsi
  int v9; // ebx
  __int64 v10; // rax
  void *v11; // rcx
  __int16 v13; // [rsp+98h] [rbp+20h] BYREF
  int v14; // [rsp+9Ah] [rbp+22h]
  unsigned __int16 v15; // [rsp+9Eh] [rbp+26h]

  v6 = PdoExt(a2);
  v13 = 1664;
  v14 = 3840;
  v7 = v6;
  v15 = 5;
  *(_DWORD *)a3 = 5;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 5LL, 1112885333LL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_9:
    v11 = (void *)*((_QWORD *)v7 + 300);
    v7[705] = 1073807371;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)v7 + 300) = 0LL;
    }
    goto LABEL_11;
  }
  v9 = UsbhSyncSendCommandToDevice(a1, a2, &v13, (__int64)Pool2, a3);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    v7[705] = 1073807371;
  }
  else
  {
    v10 = ExAllocatePool2(64LL, Pool2[1], 1112885333LL);
    *((_QWORD *)v7 + 300) = v10;
    if ( v10 )
    {
      v15 = Pool2[1];
      *(_DWORD *)a3 = v15;
      v9 = UsbhSyncSendCommandToDevice(a1, a2, &v13, v10, a3);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
    goto LABEL_9;
LABEL_11:
  Log(a1, 256, 1195528019, v9, 0LL);
  return (unsigned int)v9;
}
