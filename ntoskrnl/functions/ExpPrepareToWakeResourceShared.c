__int64 __fastcall ExpPrepareToWakeResourceShared(__int64 a1, __int64 *a2, _QWORD *a3, int *a4)
{
  bool v5; // cf
  bool v6; // zf
  __int64 v9; // r10
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 64) == 0;
  v6 = *(_DWORD *)(a1 + 64) == 1;
  v12 = 0LL;
  v9 = 0LL;
  if ( !v5 && !v6 )
    goto LABEL_4;
  if ( *(_DWORD *)(a1 + 76) )
  {
    KeCaptureWaitChainHeadEx((_QWORD **)(a1 + 40), a2, &v12);
    --*(_DWORD *)(a1 + 76);
    *(_WORD *)(a1 + 26) |= 0x80u;
    v10 = 1;
    v9 = v12;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 72) )
    {
LABEL_4:
      v10 = 0;
      *a2 = 0LL;
      goto LABEL_5;
    }
    *a2 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    v10 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = 0;
  }
LABEL_5:
  result = (unsigned int)(v10 - 1);
  *a4 = v10;
  v6 = (_DWORD)result + *(_DWORD *)(a1 + 64) == 0;
  *(_DWORD *)(a1 + 64) += result;
  *a3 = v9;
  if ( v6 )
    *(_WORD *)(a1 + 24) = 0;
  return result;
}
