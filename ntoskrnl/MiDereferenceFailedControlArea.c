/*
 * XREFs of MiDereferenceFailedControlArea @ 0x14085F4AC
 * Callers:
 *     MiFinishCreateSection @ 0x1407D0800 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x1403349EC (MiDereferenceControlAreaBySection.c)
 *     MiAweControlArea @ 0x14034C968 (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x140647390 (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDereferenceFailedControlArea(int *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v1 & 4) != 0 )
    return MiDereferenceControlAreaBySection(v2, (v1 & 1) == 0);
  result = MiAweControlArea(v2);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v4);
  return result;
}
