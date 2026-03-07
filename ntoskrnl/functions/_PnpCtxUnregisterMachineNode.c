__int64 __fastcall PnpCtxUnregisterMachineNode(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  UNICODE_STRING *v4; // rbx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  _QWORD **v7; // rdx
  PVOID *Buffer; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)&PiPnpRtlCtx;
  P = 0LL;
  result = PnpCtxFindNode(*(__int64 *)&PiPnpRtlCtx, a2, 0, (const UNICODE_STRING **)&P);
  if ( (int)result >= 0 )
  {
    v4 = (UNICODE_STRING *)P;
    if ( P == *(PVOID *)(v2 + 88) )
    {
      return 3221225659LL;
    }
    else
    {
      v5 = *(_QWORD **)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P
        || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P)
        || (*v6 = v5, v5[1] = v6, v7 = *(_QWORD ***)&v4[1].Length, v7[1] != (_QWORD *)&v4[1])
        || (Buffer = (PVOID *)v4[1].Buffer, *Buffer != &v4[1]) )
      {
        __fastfail(3u);
      }
      *Buffer = v7;
      v7[1] = Buffer;
      memset((void *)(v2 + 96), 0, 0x80uLL);
      *(_BYTE *)(v2 + 4) = *(_QWORD *)(v2 + 56) != v2 + 56;
      return PnpCtxDestroyNode(v4);
    }
  }
  return result;
}
