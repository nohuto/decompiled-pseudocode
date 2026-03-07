unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  __int64 v1; // rsi
  __int64 **v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD v10[16]; // [rsp+40h] [rbp-79h] BYREF
  _OWORD v11[3]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v12; // [rsp+F0h] [rbp+37h]
  int VirtualMemory; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+128h] [rbp+6Fh] BYREF
  HANDLE SecureHandle; // [rsp+130h] [rbp+77h] BYREF

  v1 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  SecureHandle = 0LL;
  memset(v10, 0, sizeof(v10));
  v10[12] = KeGetCurrentThread()->ApcState.Process;
  v10[11] = v10[12];
  v10[2] = 0x10000LL;
  v10[1] = 0x7FFFFFFEFFFFLL;
  v10[9] = &SecureHandle;
  v10[3] = a1;
  v10[5] = 0x200003000LL;
  v10[8] = 0x8000000100000001uLL;
  BYTE1(v10[7]) = 0;
  VirtualMemory = MiAllocateVirtualMemory((__int64)v10, 0LL, (__int64 *)&v14);
  if ( VirtualMemory >= 0 )
  {
    v3 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ qword_140C656C0 ^ v10[12], &VirtualMemory);
    v4 = (__int64)v3;
    if ( v3 )
    {
      if ( !(unsigned int)MiMakeSecureExclusive((__int64)v3) )
      {
        MiUnlockAndDereferenceVad((PVOID)v4);
        MmUnsecureVirtualMemory(SecureHandle);
        return 0LL;
      }
      v6 = ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF;
      PteAddress = MiGetPteAddress(v6);
      MiDecommitPages(v14, PteAddress, v10[12], v4, 1, v11);
      if ( (int)MiLockPageTableRange(v14, v6) < 0 )
      {
        v8 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
        v9 = *(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32);
        LOBYTE(VirtualMemory) = 0;
        MiFreeVadRange((_DWORD *)v4, (int)&VirtualMemory, v8, v9, v10[12], 0, 0LL);
      }
      else
      {
        MiUnlockAndDereferenceVad((PVOID)v4);
        return v14;
      }
    }
  }
  return v1;
}
