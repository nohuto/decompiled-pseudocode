/*
 * XREFs of MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A35010
 * Callers:
 *     MiDeleteHotPatchRecord @ 0x140A33BA4 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140A34E80 (MiInsertHotPatchRecord.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x140A33944 (MiCompareHotPatchNodes.c)
 */

_BOOL8 __fastcall MiInsertPreviouslyRegisteredHotPatchRecord(const UNICODE_STRING *a1)
{
  _QWORD *v1; // rsi
  BOOL v2; // ebx
  unsigned __int64 i; // rdi
  int v5; // eax
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax

  v1 = (_QWORD *)*((_QWORD *)&xmmword_140C694B0 + 1);
  v2 = 0;
  i = 0LL;
  while ( v1 )
  {
    v5 = MiCompareHotPatchNodes((__int64)a1, (__int64)v1);
    if ( v5 < 0 )
      goto LABEL_6;
    if ( v5 <= 0 )
    {
      i = (unsigned __int64)v1;
LABEL_6:
      v1 = (_QWORD *)*v1;
    }
    else
    {
      v1 = (_QWORD *)v1[1];
    }
  }
  while ( i && !(unsigned int)MiCompareHotPatchNodes((__int64)a1, i) )
  {
    if ( RtlEqualUnicodeString(a1 + 2, (PCUNICODE_STRING)(i + 32), 0) )
      return v2;
    v6 = *(_QWORD ***)(i + 8);
    v7 = i;
    if ( v6 )
    {
      v8 = *v6;
      for ( i = *(_QWORD *)(i + 8); v8; v8 = (_QWORD *)*v8 )
        i = (unsigned __int64)v8;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v7 )
          break;
        v7 = i;
      }
    }
  }
  v9 = (_QWORD *)*((_QWORD *)&xmmword_140C694B0 + 1);
  if ( !*((_QWORD *)&xmmword_140C694B0 + 1) )
    goto LABEL_23;
  while ( 2 )
  {
    if ( (int)MiCompareHotPatchNodes((__int64)a1, (__int64)v9) < 0 )
    {
      v10 = (_QWORD *)*v9;
      if ( !*v9 )
        goto LABEL_23;
      goto LABEL_26;
    }
    v10 = (_QWORD *)v9[1];
    if ( v10 )
    {
LABEL_26:
      v9 = v10;
      continue;
    }
    break;
  }
  LOBYTE(v2) = 1;
LABEL_23:
  RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140C694B0 + 1, (unsigned __int64)v9, v2, (unsigned __int64)a1);
  return 1;
}
