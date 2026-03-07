_UNKNOWN **__fastcall NVMeSetInterruptCoalescing(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v3; // di
  char v4; // bl
  char v5; // al
  _BYTE *v6; // rcx
  char v7; // al
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v3 = *(_BYTE *)(a1 + 52);
    v4 = *(_BYTE *)(a1 + 53);
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v5 = v4;
    v6 = *(_BYTE **)(a1 + 1040);
    if ( !v4 )
      v5 = 0;
    v6[4140] = v5;
    v7 = v3;
    if ( !v3 )
      v7 = 0;
    v6[4096] = 9;
    v6[4141] = v7;
    v6[4136] = 8;
    ProcessCommand(a1, a1 + 952);
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
