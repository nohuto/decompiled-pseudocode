/*
 * XREFs of AMLIGetNameSpaceObjectPath @ 0x1C00485CC
 * Callers:
 *     AcpiDiagTraceDeviceReset @ 0x1C0008154 (AcpiDiagTraceDeviceReset.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000B0E0 (ACPIAmliBuildObjectPathname.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectPath(_QWORD *a1, void *a2, _DWORD *a3)
{
  unsigned int v5; // edi
  _BYTE *ObjectPath; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx

  v5 = -1073741823;
  if ( a1 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(*a1);
    if ( ObjectPath )
    {
      v7 = -1LL;
      v8 = -1LL;
      do
        ++v8;
      while ( ObjectPath[v8] );
      if ( a2 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( ObjectPath[v9] );
        if ( (unsigned int)*a3 >= (unsigned __int64)(v8 + 1) )
        {
          memmove(a2, ObjectPath, v9 + 1);
          v5 = 0;
          do
            ++v7;
          while ( ObjectPath[v7] );
          goto LABEL_15;
        }
        LODWORD(v7) = v9;
      }
      else
      {
        LODWORD(v7) = v8;
      }
      v5 = -1073741789;
LABEL_15:
      *a3 = v7 + 1;
      ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v5;
}
