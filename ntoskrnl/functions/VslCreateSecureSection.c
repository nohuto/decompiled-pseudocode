__int64 __fastcall VslCreateSecureSection(_QWORD *a1, __int64 a2, struct _MDL *a3, int a4, int a5)
{
  __int64 result; // rax
  SIZE_T v10; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+30h] [rbp-A1h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-51h] BYREF

  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  *a1 = 0LL;
  if ( (a5 & 0xFFFFFFFE) != 0 )
    return 3221225716LL;
  if ( (a5 & 1) == 0 && ((a3->ByteCount & 0xFFF) != 0 || a3->ByteOffset) )
    return 3221225713LL;
  v10 = MmSizeOfMdl((PVOID)a3->ByteOffset, a3->ByteCount);
  if ( v10 > 0xFFFFFFFF )
    return 3221225713LL;
  result = VslpLockPagesForTransfer((__int64)v12, a3, v10, 0, 0);
  if ( (int)result >= 0 )
  {
    v13[3] = v12[0];
    v13[5] = v12[7];
    v13[1] = *(_QWORD *)(a2 + 992);
    LODWORD(v13[2]) = a4;
    v11 = VslpEnterIumSecureMode(2u, 65, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( v11 >= 0 )
      *a1 = v13[4];
    return (unsigned int)v11;
  }
  return result;
}
