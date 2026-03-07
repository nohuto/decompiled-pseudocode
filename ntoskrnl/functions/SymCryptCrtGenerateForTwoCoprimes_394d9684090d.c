__int64 __fastcall SymCryptCrtGenerateForTwoCoprimes(
        PRKSEMAPHORE Semaphore,
        PRKSEMAPHORE a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PRKSEMAPHORE Semaphorea)
{
  unsigned int v9; // ebp
  unsigned int StateSemaphore; // ebx
  unsigned int v11; // eax
  struct _KSEMAPHORE *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  char *v17; // rbx
  __int64 v18; // rax
  struct _KSEMAPHORE *v19; // rdi
  int v20; // r8d
  int v21; // edx
  char v24; // [rsp+B8h] [rbp+30h]
  struct _KSEMAPHORE *Semaphoreb; // [rsp+C0h] [rbp+38h]

  v9 = 0;
  StateSemaphore = KeReadStateSemaphore(Semaphore);
  v11 = KeReadStateSemaphore(a2);
  v12 = a2;
  if ( StateSemaphore > v11 )
    v12 = Semaphore;
  KeReadStateSemaphore(v12);
  v13 = (unsigned int)SymCryptSizeofIntFromDigits();
  v14 = SymCryptIntCreate();
  v15 = SymCryptIntCreate();
  v16 = v13 + v13 + a6;
  v17 = (char *)Semaphorea - 2 * v13;
  v18 = SymCryptIntFromModulus();
  v24 = SymCryptIntGetValueLsbits32(v18) & 1;
  Semaphoreb = (struct _KSEMAPHORE *)SymCryptIntFromModulus();
  v19 = (struct _KSEMAPHORE *)SymCryptIntFromModulus();
  if ( (unsigned int)SymCryptIntIsEqualUint32() || (SymCryptIntGetValueLsbits32((__int64)v19) & 1) == 0 )
  {
    return 32782;
  }
  else
  {
    SymCryptIntExtendedGcd(Semaphoreb, v19, 0LL, v14, v15, v16, (__int64)v17);
    if ( v24 )
    {
      SymCryptIntToModElement(v15, (int)a2, a5, v16, (__int64)v17);
      v20 = a4;
      v21 = (int)Semaphore;
    }
    else
    {
      SymCryptIntToModElement(v15, (int)Semaphore, a4, v16, (__int64)v17);
      v20 = a5;
      v21 = (int)a2;
    }
    SymCryptIntToModElement(v14, v21, v20, v16, (__int64)v17);
  }
  return v9;
}
