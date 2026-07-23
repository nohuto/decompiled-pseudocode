/*
 * XREFs of _PnpCtxRegisterMachineNode @ 0x140974B58
 * Callers:
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407D4950 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     _PnpCtxCreateNode @ 0x1407A49A8 (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x1409747D8 (_PnpCtxDestroyNode.c)
 *     _PnpCtxFindNode @ 0x1409748D8 (_PnpCtxFindNode.c)
 */

__int64 __fastcall PnpCtxRegisterMachineNode(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r9
  int v9; // edi
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 **v14; // rax
  UNICODE_STRING *v15; // rcx
  void *v17; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v6 = *(_QWORD *)&PiPnpRtlCtx;
  v7 = a3;
  if ( a3 <= 0 )
    return (unsigned int)-1073741811;
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      goto LABEL_4;
    return (unsigned int)-1073741811;
  }
  if ( *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24) != *(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24 )
    return (unsigned int)-1073741298;
LABEL_4:
  if ( (int)PnpCtxFindNode(*(__int64 *)&PiPnpRtlCtx, a2, 0, (const UNICODE_STRING **)&P) < 0 )
  {
    v9 = PnpCtxCreateNode(
           (int *)v6,
           a2,
           v7,
           v8,
           a5,
           v17,
           -1,
           (HANDLE)(*(_QWORD *)(*(_QWORD *)(v6 + 224) + 8LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(v6 + 224) + 8LL) != 0LL)),
           &P);
    if ( v9 < 0 )
    {
      v15 = (UNICODE_STRING *)P;
    }
    else
    {
      v10 = *(_QWORD **)(v6 + 16);
      if ( *v10 != v6 + 8 )
        goto LABEL_12;
      v11 = P;
      *(_QWORD *)P = v6 + 8;
      v11[1] = v10;
      *v10 = v11;
      *(_QWORD *)(v6 + 16) = v11;
      v12 = v11 + 2;
      v13 = 16 * v7 + v6 + 24;
      v14 = *(__int64 ***)(v13 + 8);
      if ( *v14 != (__int64 *)v13 )
LABEL_12:
        __fastfail(3u);
      *v12 = v13;
      v12[1] = (__int64)v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      memset((void *)(v6 + 96), 0, 0x80uLL);
      v15 = 0LL;
      *(_BYTE *)(v6 + 4) = *(_QWORD *)(v6 + 56) != v6 + 56;
    }
    if ( v15 )
      PnpCtxDestroyNode(v15);
  }
  else
  {
    return (unsigned int)-1073741771;
  }
  return (unsigned int)v9;
}
