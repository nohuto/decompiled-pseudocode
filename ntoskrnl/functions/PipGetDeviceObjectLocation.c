__int64 __fastcall PipGetDeviceObjectLocation(ULONG_PTR BugCheckParameter2, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rdi
  int v7; // eax
  void *Pool2; // rbx
  int ObjectProperty; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rdi
  _WORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int i; // [rsp+90h] [rbp+8h] BYREF
  int v21; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0;
  if ( !BugCheckParameter2 )
    goto LABEL_27;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v6 || (*(_DWORD *)(v6 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v13 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v13 )
    {
      IoAddTriageDumpDataBlock(v13, (PVOID)(unsigned int)*(__int16 *)(v13 + 2));
      v14 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v15 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v15 )
    {
      v16 = (unsigned __int16 *)(v15 + 40);
      IoAddTriageDumpDataBlock(v15, (PVOID)0x388);
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v16 + 1), (PVOID)*v16);
      }
      v17 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
      if ( *v17 )
      {
        IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
      }
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
      if ( v18 && *(_WORD *)(v18 + 56) )
      {
        IoAddTriageDumpDataBlock(v18 + 56, (PVOID)2);
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
      }
    }
LABEL_27:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v7 = 0;
  Pool2 = 0LL;
  for ( i = 0; ; v7 = i )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(v6 + 48),
                       1LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_LocationPaths,
                       (__int64)&v21,
                       (__int64)Pool2,
                       v7,
                       (__int64)&i,
                       0);
    v10 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x61706E50u);
    Pool2 = (void *)ExAllocatePool2(64LL, i, 1634758224LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  v11 = ObjectProperty;
  if ( ObjectProperty < 0 )
  {
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0x61706E50u);
      return v11;
    }
  }
  else
  {
    *a2 = i >> 1;
    *a3 = Pool2;
  }
  return v10;
}
