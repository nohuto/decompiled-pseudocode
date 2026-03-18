/*
 * XREFs of UserCreateBaseWindowHandle @ 0x1C014F190
 * Callers:
 *     NtUserCreateBaseWindow @ 0x1C0143470 (NtUserCreateBaseWindow.c)
 * Callees:
 *     HMAllocObjectEx @ 0x1C0012A1C (HMAllocObjectEx.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 __fastcall UserCreateBaseWindowHandle(__int64 a1, unsigned int a2, int a3)
{
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rsi
  char *v5; // rbx
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v3 = gptiCurrent;
  v4 = 0LL;
  v5 = 0LL;
  if ( !a1 )
  {
    v9 = 87;
LABEL_15:
    UserSetLastError(v9);
    return v4;
  }
  if ( (*((_DWORD *)gptiCurrent + 318) & 0x1000000) == 0 )
  {
    v9 = 4317;
    goto LABEL_15;
  }
  if ( a2 )
  {
    v5 = (char *)Win32AllocPoolZInit(a2, 0x64776255u);
    if ( !v5 )
      return v4;
  }
  v10 = HMAllocObjectEx((__int64)v3, 0LL, 0x17u, 0x90u, a3);
  if ( !v10 )
  {
LABEL_12:
    if ( v5 )
      Win32FreePool(v5);
    return v4;
  }
  v11 = Win32AllocPoolZInit(0x20uLL, 0x68707355u);
  *(_QWORD *)(v10 + 80) = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v10 + 132) &= ~2u;
    v4 = *(_QWORD *)v10;
    *(_QWORD *)(v10 + 120) = v5;
    v5 = 0LL;
    *(_QWORD *)(v10 + 104) = v10 + 96;
    *(_QWORD *)(v10 + 96) = v10 + 96;
    *(_QWORD *)(v10 + 56) = a1;
    *(_DWORD *)(v10 + 128) = a2;
    goto LABEL_12;
  }
  if ( v5 )
    Win32FreePool(v5);
  HMFreeObject((unsigned int *)v10, v12, v13, v14);
  return 0LL;
}
