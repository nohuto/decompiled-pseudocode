__int64 __fastcall UsbhGetPortStatus(__int64 a1, __int16 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 Pool2; // rax
  void *v9; // rbx
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[2]; // [rsp+38h] [rbp-20h] BYREF
  __int16 v15; // [rsp+3Ah] [rbp-1Eh]
  __int16 v16; // [rsp+3Ch] [rbp-1Ch]
  __int16 v17; // [rsp+3Eh] [rbp-1Ah]

  v13 = 0;
  Pool2 = ExAllocatePool2(64LL, 10LL, 1112885333LL);
  v9 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 6) = a2;
    *(_DWORD *)Pool2 = 0;
    *a3 = 0;
    *(_WORD *)(Pool2 + 4) = 4;
    v14[0] = -93;
    *(_BYTE *)(Pool2 + 8) = 0;
    v14[1] = 0;
    v15 = 0;
    v16 = a2;
    v17 = *(_WORD *)(Pool2 + 4);
    v10 = UsbhSyncSendCommand(a1, (__int64)v14, Pool2, (_WORD *)(Pool2 + 4), v12, &v13);
    if ( a4 )
      *a4 = v13;
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
