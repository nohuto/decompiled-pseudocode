/*
 * XREFs of PktMonClientAddEdgeEx @ 0x1C00C72BC
 * Callers:
 *     PktMonClientAddEdge @ 0x1C00C7284 (PktMonClientAddEdge.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonClientAddEdgeEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned int v7; // edi
  _QWORD *v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int16 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+32h] [rbp-26h]
  __int16 v15; // [rsp+36h] [rbp-22h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+44h] [rbp-14h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0;
  v19 = 0LL;
  v16 = a2;
  v13 = 24;
  v17 = 3;
  v18 = 4;
  KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64 *))(*((_QWORD *)&xmmword_1C00E4FE8 + 1) + 32LL))(
           xmmword_1C00E4FE8,
           *(_QWORD *)(a1 + 40),
           &v13,
           &v19);
    if ( !v7 )
    {
      v8 = (_QWORD *)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v9 + 8) != a1 + 16 )
        __fastfail(3u);
      v10 = a6;
      *a6 = v9;
      v10[1] = v8;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = v19;
      *v8 = v10;
      ++*(_DWORD *)(a1 + 32);
      v10[2] = v11;
      *((_DWORD *)v10 + 8) = a5;
      v10[3] = a1;
    }
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    v7 = -1073741661;
  }
  KeReleaseMutex(&PktMonCompMutex, 0);
  return v7;
}
