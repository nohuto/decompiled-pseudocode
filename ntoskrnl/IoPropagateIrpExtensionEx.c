/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x1402B2100
 * Callers:
 *     IoPropagateIrpExtension @ 0x1402B20E0 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 IrpExtension; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void (__fastcall *v21)(__int64, __int64, __int64); // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 0LL;
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( (a4 & 1) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = v4;
    return 0LL;
  }
  if ( (a4 & 2) != 0 && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 0LL);
    if ( !IrpExtension )
      return 3221225626LL;
    *(_OWORD *)(IrpExtension + 24) = *(_OWORD *)(v4 + 24);
  }
  if ( (a4 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v9 && (*(_BYTE *)(v9 + 2) & 4) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = *(_DWORD *)(v4 + 4);
  }
  if ( (a4 & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v10 && (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
    {
      v18 = IopAllocateIrpExtension(a2, 5LL);
      if ( !v18 )
        return 3221225626LL;
      *(_QWORD *)(v18 + 48) = a3 + *(_QWORD *)(v4 + 48);
      v19 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)(v18 + 40) = v19;
      v20 = *(_QWORD *)(v4 + 40);
      v21 = *(void (__fastcall **)(__int64, __int64, __int64))(v20 + 8);
      if ( v21 )
        v21(v20, v19, a3);
    }
  }
  v11 = 1LL;
  if ( (a4 & 8) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v12 && (*(_BYTE *)(v12 + 2) & 0x40) != 0 )
      IopSetDiskIoAttributionExtension(a2, *(_QWORD *)(v4 + 16), (__int64)KeGetCurrentThread(), 1);
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_23;
  v13 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v13 || *(char *)(v13 + 2) >= 0 )
    goto LABEL_23;
  v22 = *(_QWORD *)(v4 + 48);
  if ( v22 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v22 + 16) << 9);
    if ( !(_DWORD)v11 )
      return 3221225485LL;
  }
  if ( a3 % v11 )
    return 3221225485LL;
  v23 = IopAllocateIrpExtension(a2, 7LL);
  if ( v23 )
  {
    *(_OWORD *)(v23 + 40) = *(_OWORD *)(v4 + 40);
    *(_QWORD *)(v23 + 40) += a3 / v11;
LABEL_23:
    if ( (a4 & 0x20) == 0 )
      return 0LL;
    v14 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || !v14 || !_bittest16((const signed __int16 *)(v14 + 2), 8u) )
      return 0LL;
    v16 = IopAllocateIrpExtension(a2, 8LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 56) = *(_QWORD *)(v4 + 56);
      return 0LL;
    }
  }
  return 3221225626LL;
}
