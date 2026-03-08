/*
 * XREFs of NtQueryDefaultLocale @ 0x14077BC50
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x1407ED514 (MmGetSessionLocaleId.c)
 */

__int64 __fastcall NtQueryDefaultLocale(__int64 a1, int *a2)
{
  char v2; // r9
  unsigned int v3; // r8d
  int SessionLocaleId; // eax

  v2 = a1;
  v3 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      a1 = (__int64)a2;
    *(_DWORD *)a1 = *(_DWORD *)a1;
  }
  if ( v2 )
    SessionLocaleId = MmGetSessionLocaleId(a1, a2, 0LL);
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *a2 = SessionLocaleId;
  return v3;
}
