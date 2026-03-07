__int64 __fastcall lambda_cbfcde231c2a8d1b9d404329183532d4_::operator()(__int64 a1, __int64 a2, unsigned int *a3)
{
  struct _LUID *v5; // rdx
  int v6; // r9d
  unsigned int v7; // eax
  void *v8; // rbx
  int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  char v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = a1;
  v12 = a2;
  v13 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  if ( (*(_DWORD *)(a2 + 436) & 0x100) != 0 && !*(_BYTE *)(a2 + 2833) && *(_DWORD *)(a2 + 200) == 1 )
  {
    LODWORD(v14) = 0;
    if ( DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v5, (unsigned int *)&v14, 0LL) )
    {
      v7 = *a3;
      if ( (_DWORD)v14 == *a3 )
      {
        LODWORD(v14) = v6 & v14;
        HIDWORD(v14) &= v6;
        DxgkLogCodePointPacketForSession(0x71u, v7, *(_DWORD *)(a2 + 408), *(_DWORD *)(a2 + 404), v6 & v10, v14);
        v8 = *(void **)(a2 + 216);
        ObfReferenceObject(v8);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
        DxgkInvalidateDeviceState((__int64)v8);
        ObfDereferenceObject(v8);
      }
    }
  }
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  return 0LL;
}
