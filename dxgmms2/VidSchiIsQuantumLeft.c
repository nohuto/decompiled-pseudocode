__int64 __fastcall VidSchiIsQuantumLeft(__int64 a1, struct _VIDSCH_CONTEXT **a2)
{
  __int64 v3; // rsi
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 **v10; // rax
  __int64 v11; // rdx
  __int64 **v12; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), (*(_DWORD *)(a1 + 184) >> 1) & 1, 3) == 2 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v13 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v7 + 24) + 32LL),
      &v13);
    v8 = (__int64 *)(a1 + 8);
    v9 = *(__int64 **)(a1 + 8);
    if ( v9[1] != a1 + 8
      || (v10 = *(__int64 ***)(a1 + 16), *v10 != v8)
      || (*v10 = v9,
          v9[1] = (__int64)v10,
          v11 = 16LL * *(unsigned int *)(a1 + 404) + v3 + 2056,
          v12 = *(__int64 ***)(v11 + 8),
          *v12 != (__int64 *)v11) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)(a1 + 16) = v12;
    *v8 = v11;
    *v12 = v8;
    result = 0LL;
    *(_QWORD *)(v11 + 8) = v8;
  }
  else
  {
    VidSchiSelectContextFromThisProcess((struct _VIDSCH_CONTEXT *)a1, a2);
    if ( *a2 != (struct _VIDSCH_CONTEXT *)a1 )
    {
      LOBYTE(v5) = 1;
      VidSchiSetTransferContextRunningTime(*a2, a1, v5);
    }
    return 1LL;
  }
  return result;
}
