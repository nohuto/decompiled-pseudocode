__int64 __fastcall PnpCtxRegisterMachineNode(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  int Node; // ebx
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rax
  UNICODE_STRING *v14; // rcx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v6 = *(_QWORD *)&PiPnpRtlCtx;
  v7 = a3;
  if ( a3 == 1 || a3 == 2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24) != *(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24 )
      return (unsigned int)-1073741298;
  }
  else if ( a3 != 3 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (int)PnpCtxFindNode(*(__int64 *)&PiPnpRtlCtx, a2, 0, (const UNICODE_STRING **)&P) < 0 )
  {
    Node = PnpCtxCreateNode(
             (int *)v6,
             a2,
             v7,
             0,
             a5,
             -1,
             -1,
             *(HANDLE *)(*(_QWORD *)(v6 + 224) + 8LL),
             (UNICODE_STRING **)&P);
    if ( Node < 0 )
    {
      v14 = (UNICODE_STRING *)P;
    }
    else
    {
      v9 = *(_QWORD **)(v6 + 16);
      if ( *v9 != v6 + 8 )
        goto LABEL_13;
      v10 = P;
      *(_QWORD *)P = v6 + 8;
      v10[1] = v9;
      *v9 = v10;
      *(_QWORD *)(v6 + 16) = v10;
      v11 = v10 + 2;
      v12 = 16 * v7 + v6 + 24;
      v13 = *(__int64 ***)(v12 + 8);
      if ( *v13 != (__int64 *)v12 )
LABEL_13:
        __fastfail(3u);
      *v11 = v12;
      v11[1] = (__int64)v13;
      *v13 = v11;
      *(_QWORD *)(v12 + 8) = v11;
      memset((void *)(v6 + 96), 0, 0x80uLL);
      v14 = 0LL;
      *(_BYTE *)(v6 + 4) = *(_QWORD *)(v6 + 56) != v6 + 56;
    }
    if ( v14 )
      PnpCtxDestroyNode(v14);
  }
  else
  {
    return (unsigned int)-1073741771;
  }
  return (unsigned int)Node;
}
