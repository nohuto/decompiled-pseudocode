/*
 * XREFs of DifPushThreadContextData @ 0x1405D23D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifPushThreadContextData(int a1, const void *a2, unsigned int a3)
{
  char v4; // si
  unsigned int v5; // edi
  size_t v6; // rbp
  _QWORD *v8; // rbx
  _DWORD *Pool2; // rax
  size_t v10; // r13
  void *v11; // rbp
  __int64 v12; // r14
  int v13; // eax

  v4 = 0;
  v5 = 0;
  v6 = a3;
  if ( !DifPluginStates[a1] || !a2 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD **)&KeGetCurrentThread()[1].WaitBlockFill11[64];
  if ( !v8 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1950574148LL);
    v8 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *Pool2 = 0;
    v4 = 1;
    *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = Pool2;
  }
  v10 = v6;
  v11 = (void *)ExAllocatePool2(64LL, v6, 1682990660LL);
  if ( v11 )
  {
    v12 = ExAllocatePool2(64LL, 24LL, 1950574148LL);
    if ( v12 )
    {
      memmove(v11, a2, v10);
      *(_QWORD *)(v12 + 8) = v11;
      *(_DWORD *)v12 = a1;
      *(_QWORD *)(v12 + 16) = v8[1];
      v13 = *(_DWORD *)v8 + 1;
      v8[1] = v12 + 16;
      *(_DWORD *)v8 = v13;
      return v5;
    }
    v5 = -1073741801;
    ExFreePoolWithTag(v11, 0x4E666944u);
  }
  else
  {
    v5 = -1073741801;
  }
  if ( v8 && v4 )
  {
    ExFreePoolWithTag(v8, 0x4E666944u);
    *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = 0LL;
  }
  return v5;
}
