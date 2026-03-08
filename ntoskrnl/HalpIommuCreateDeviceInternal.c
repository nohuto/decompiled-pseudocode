/*
 * XREFs of HalpIommuCreateDeviceInternal @ 0x14038D414
 * Callers:
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuCreateDeviceInternal(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR **a4)
{
  ULONG_PTR *i; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v10)(ULONG_PTR, __int64, _QWORD, __int64, _QWORD *, _QWORD); // r10
  __int64 (__fastcall *v11)(ULONG_PTR, __int64, __int64, __int64, _QWORD *, _QWORD); // r10

  *a3 = 0LL;
  *a4 = 0LL;
  i = (ULONG_PTR *)HalpIommuList;
  result = 3221226021LL;
  while ( i != &HalpIommuList )
  {
    v10 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, __int64, _QWORD *, _QWORD))i[11];
    if ( v10 )
    {
      result = v10(i[2], a1, 0LL, a2, a3, 0LL);
      if ( (int)result >= 0 )
      {
LABEL_5:
        *a4 = i;
        return result;
      }
    }
    i = (ULONG_PTR *)*i;
  }
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    v11 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, __int64, _QWORD *, _QWORD))i[11];
    if ( v11 )
    {
      result = v11(i[2], a1, 1LL, a2, a3, 0LL);
      if ( (int)result >= 0 )
        goto LABEL_5;
    }
  }
  return result;
}
