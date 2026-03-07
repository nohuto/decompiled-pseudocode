__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 IrpExtension; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  v7 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v7 + 2172) & 0x1000) != 0
    && *(_QWORD *)(v7 + 1296)
    && *(_QWORD *)(*(_QWORD *)(v7 + 1296) + 1568LL)
    && (a4 & 1) == 0 )
  {
    IopReferenceIoAttributionFromProcess(v7, 1, &v9);
  }
  *(_QWORD *)(IrpExtension + 16) = v9;
  return 0LL;
}
