__int64 __fastcall ExpPrepareToWakeResourceExclusive(__int64 a1, __int64 *a2, _QWORD *a3, int *a4)
{
  __int64 v6; // rcx
  int *v8; // rdi
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  v8 = (int *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) )
  {
    *a2 = *(_QWORD *)(a1 + 32);
    result = 65407LL;
    v10 = *(_DWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_WORD *)(a1 + 26) &= ~0x80u;
    *(_DWORD *)(a1 + 72) = 0;
    if ( !v10 )
      goto LABEL_4;
LABEL_7:
    v11 = *v8 + v10 - 1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    result = (__int64)KeCaptureWaitChainHeadEx((_QWORD **)(a1 + 40), a2, &v12);
    --*(_DWORD *)(a1 + 76);
    v10 = 1;
    v6 = v12;
    goto LABEL_7;
  }
  *a2 = 0LL;
  result = 65407LL;
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v10 = 0;
LABEL_4:
  *(_WORD *)(a1 + 24) = 0;
  v11 = 0;
LABEL_5:
  *v8 = v11;
  *a4 = v10;
  *a3 = v6;
  return result;
}
