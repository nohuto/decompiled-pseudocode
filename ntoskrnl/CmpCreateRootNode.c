/*
 * XREFs of CmpCreateRootNode @ 0x140B52778
 * Callers:
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmpNameSize @ 0x1407612A0 (CmpNameSize.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     CmpCopyName @ 0x1407A6A30 (CmpCopyName.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpCreateRootNode(__int64 a1, __int64 a2, int *a3)
{
  ULONG_PTR v3; // rdi
  unsigned __int16 v5; // ax
  int v6; // esi
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  int v9; // ecx
  __int64 v10; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF
  int v15; // [rsp+8Ch] [rbp+4Ch]
  __int64 v16; // [rsp+98h] [rbp+58h] BYREF

  v15 = HIDWORD(a2);
  v3 = CmpMasterHive;
  v16 = 0LL;
  DestinationString = 0LL;
  v14 = -1;
  v13 = 0LL;
  HvpGetCellContextReinitialize(&v16);
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v5 = CmpNameSize(&DestinationString.Length);
  v6 = HvAllocateCell(v3, (unsigned int)v5 + 76, 0LL, &v14, (__int64)&v13, (__int64)&v16);
  if ( v6 < 0 )
  {
    v7 = v13;
  }
  else
  {
    *(_DWORD *)v13 = 813934;
    v7 = v13;
    *(_QWORD *)(v13 + 4) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v7 + 16) = -1;
    *(_QWORD *)(v7 + 20) = 0LL;
    *(_DWORD *)(v7 + 28) = -1;
    *(_DWORD *)(v7 + 32) = -1;
    *(_DWORD *)(v7 + 36) = 0;
    *(_DWORD *)(v7 + 40) = -1;
    *(_DWORD *)(v7 + 44) = -1;
    *(_DWORD *)(v7 + 48) = -1;
    *(_WORD *)(v7 + 74) = 0;
    *(_QWORD *)(v7 + 60) = 0LL;
    *(_WORD *)(v7 + 52) = 0;
    *(_DWORD *)(v7 + 52) &= 0xFFF0FFFF;
    *(_DWORD *)(v7 + 52) &= 0xFF0FFFFF;
    *(_BYTE *)(v7 + 55) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    v8 = CmpCopyName((_BYTE *)(v7 + 76), &DestinationString);
    *(_WORD *)(v7 + 72) = v8;
    if ( v8 < DestinationString.Length )
      *(_WORD *)(v7 + 2) |= 0x20u;
    v9 = v14;
    v6 = 0;
    v10 = *(_QWORD *)(v3 + 64);
    *a3 = v14;
    *(_DWORD *)(v10 + 36) = v9;
  }
  if ( v7 )
  {
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v3, &v16);
    else
      HvpReleaseCellPaged(v3, (unsigned int *)&v16);
  }
  return (unsigned int)v6;
}
