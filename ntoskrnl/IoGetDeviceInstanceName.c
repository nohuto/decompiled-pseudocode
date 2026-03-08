/*
 * XREFs of IoGetDeviceInstanceName @ 0x1402020C0
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140725910 (WmipQueryWmiDataBlock.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407745C4 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipTranslatePDOInstanceNames @ 0x14086C758 (WmipTranslatePDOInstanceNames.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PnpConcatenateUnicodeStrings @ 0x140683298 (PnpConcatenateUnicodeStrings.c)
 */

__int64 __fastcall IoGetDeviceInstanceName(ULONG_PTR BugCheckParameter2, UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 *v9; // rdi
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_16;
  v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, (PVOID)(unsigned int)*(__int16 *)(v6 + 2));
      v7 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(v8 + 40);
      IoAddTriageDumpDataBlock(v8, (PVOID)0x388);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), (PVOID)*v9);
      }
      v10 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
      }
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
      if ( v11 && *(_WORD *)(v11 + 56) )
      {
        IoAddTriageDumpDataBlock(v11 + 56, (PVOID)2);
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v12 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return PnpConcatenateUnicodeStrings(a2, (PCUNICODE_STRING)(v4 + 40));
}
