/*
 * XREFs of PiDevCfgCopyVariableData @ 0x14095AA3C
 * Callers:
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14095F4F0 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgCopyVariableData(__int64 a1, __int64 a2)
{
  int v2; // esi
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  void *Pool2; // rax
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5 )
    goto LABEL_12;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) == 0x8000 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    else
      v7 = 0LL;
    v2 = SysCtxRegOpenKey(v7, v5, 0LL, 0, 0x20019u, (__int64)&v11);
    if ( v2 >= 0 )
    {
      v4 = v11;
LABEL_12:
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)(a1 + 40) = v4;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 36);
    if ( !v8 )
      goto LABEL_12;
    Pool2 = (void *)ExAllocatePool2(256LL, v8, 1667526736LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 36));
      goto LABEL_12;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v2;
}
