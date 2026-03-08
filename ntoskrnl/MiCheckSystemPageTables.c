/*
 * XREFs of MiCheckSystemPageTables @ 0x140222830
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1402DA5E0 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1402EB3C8 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x1406439D8 (MiGenerateAccessViolation.c)
 */

__int64 __fastcall MiCheckSystemPageTables(ULONG_PTR *a1)
{
  __int64 v2; // rdx
  ULONG_PTR **i; // r9
  ULONG_PTR *v4; // r8
  ULONG_PTR v5; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  ULONG_PTR v10; // rcx
  _BYTE *v11; // rax
  ULONG_PTR v12; // rdx

  v2 = 3LL;
  for ( i = (ULONG_PTR **)(a1 + 6); ; --i )
  {
    v4 = *i;
    v5 = **i;
    if ( (unsigned __int64)*i >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v5 & 1) == 0 )
LABEL_32:
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xDuLL);
      if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v8 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v4 >> 3) & 0x1FF));
          v9 = v5 | 0x20;
          if ( (v8 & 0x20) == 0 )
            v9 = **i;
          v5 = v9;
          if ( (v8 & 0x42) != 0 )
            v5 = v9 | 0x42;
        }
      }
    }
    if ( (v5 & 1) == 0 )
      goto LABEL_32;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( !--v2 )
      return 0LL;
  }
  if ( (a1[1] & 2) == 0 || (v5 & 0x800) != 0 )
  {
    MiCheckSystemNxFault(a1, v5, 6LL);
    v10 = a1[2];
    v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v10 & 1) != 0 )
    {
      if ( *v11 == 1 || *v11 == 3 || *v11 == 6 )
        return 1LL;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(v10, 0LL) )
    {
      return 1LL;
    }
    v12 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v12, a1[1], a1[2], 8uLL);
    return 1LL;
  }
  if ( !(unsigned int)MiGenerateAccessViolation(a1) )
    KeBugCheckEx(0xBEu, *a1, v5, a1[2], 0x10uLL);
  return 2LL;
}
