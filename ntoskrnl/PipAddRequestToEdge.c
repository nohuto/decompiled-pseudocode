/*
 * XREFs of PipAddRequestToEdge @ 0x140838B5C
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x140394528 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipCreateNewDependencyEdge @ 0x1403945C4 (PipCreateNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x1409517A8 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     PipMergeDependencyTypes @ 0x1403946D8 (PipMergeDependencyTypes.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 *     PipFreeBindingRequestEntry @ 0x14095175C (PipFreeBindingRequestEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PipAddRequestToEdge(__int64 a1, PCUNICODE_STRING *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  __int64 Pool2; // rax
  int v9; // eax
  UNICODE_STRING *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v13; // rbp
  int v14; // ecx

  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 56);
  v4 = *(_QWORD **)(a1 + 56);
  v5 = 0LL;
  while ( v4 != v3 )
  {
    if ( v5 )
      goto LABEL_21;
    v13 = v4;
    v4 = (_QWORD *)*v4;
    v14 = *((_DWORD *)v13 + 4);
    if ( v14 == *(_DWORD *)a2 )
    {
      if ( v14 )
      {
        if ( v14 == 1 && RtlEqualUnicodeString((PCUNICODE_STRING)v13[3], a2[1], 0) )
          v5 = v13;
      }
      else if ( (PCUNICODE_STRING)v13[3] == a2[1] )
      {
        v5 = v13;
      }
    }
  }
  if ( v5 )
  {
LABEL_21:
    *((_DWORD *)v5 + 8) |= *((_DWORD *)a2 + 4);
    goto LABEL_10;
  }
  Pool2 = ExAllocatePool2(256LL, 40LL, 1399877200LL);
  v2 = (_QWORD *)Pool2;
  if ( !Pool2 )
    goto LABEL_10;
  *(_DWORD *)(Pool2 + 32) = *((_DWORD *)a2 + 4);
  v9 = *(_DWORD *)a2;
  *((_DWORD *)v2 + 4) = *(_DWORD *)a2;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = (UNICODE_STRING *)ExAllocatePool2(256LL, 16LL, 1399877200LL);
      v2[3] = v10;
      if ( RtlDuplicateUnicodeString(0, a2[1], v10) < 0 )
      {
        PipFreeBindingRequestEntry(v2);
        v2 = 0LL;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v2[3] = a2[1];
  }
  v11 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v11 != v3 )
    __fastfail(3u);
  *v2 = v3;
  v2[1] = v11;
  *v11 = v2;
  v3[1] = v2;
LABEL_10:
  if ( !v5 )
    v5 = v2;
  if ( v5 )
    PipMergeDependencyTypes(a1, *((_DWORD *)a2 + 4));
  return v5;
}
