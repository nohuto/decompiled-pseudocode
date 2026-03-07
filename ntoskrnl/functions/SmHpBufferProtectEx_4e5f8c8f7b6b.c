__int64 __fastcall SmHpBufferProtectEx(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  int v5; // r15d
  ULONG_PTR v6; // r12
  unsigned int v8; // ebx
  const unsigned __int8 *v9; // rcx
  unsigned __int64 v10; // r9
  int v11; // eax
  unsigned __int8 *v12; // r14
  int v13; // r9d
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp+10h] BYREF

  v15 = a1;
  BugCheckParameter4 = 0LL;
  v5 = *(_DWORD *)(a2 + 12);
  v6 = (unsigned int)a4;
  v8 = 1;
  if ( v5 )
  {
    if ( (a3 & 3) != 0 )
    {
      v12 = *(unsigned __int8 **)a2;
      v15 = 0LL;
      MetroHash64::Hash(v12, 0x1000uLL, (unsigned __int8 *const)&v15, a4);
      v13 = v15;
      if ( !(_DWORD)v15 )
        v13 = 1;
      if ( v13 == v5 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx((unsigned __int64)v12, (unsigned __int64)v12, 4096LL, 4u);
          *(_DWORD *)(a2 + 12) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          SmPrepareForFatalHeapCorruption(v12, (__int64)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v6, *(_QWORD *)a2, *(unsigned int *)(a2 + 12), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*(_QWORD *)a2, *(_QWORD *)a2, 4096LL, 2u);
    v9 = *(const unsigned __int8 **)a2;
    v15 = 0LL;
    MetroHash64::Hash(v9, 0x1000uLL, (unsigned __int8 *const)&v15, v10);
    v11 = v15;
    *(_DWORD *)(a2 + 12) = v15;
    if ( !v11 )
      *(_DWORD *)(a2 + 12) = 1;
  }
  return v8;
}
