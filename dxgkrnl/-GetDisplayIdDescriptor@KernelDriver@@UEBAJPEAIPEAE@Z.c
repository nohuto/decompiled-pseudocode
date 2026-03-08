/*
 * XREFs of ?GetDisplayIdDescriptor@KernelDriver@@UEBAJPEAIPEAE@Z @ 0x1C0219280
 * Callers:
 *     <none>
 * Callees:
 *     DpiQueryDisplayIDDescriptor @ 0x1C02192A4 (DpiQueryDisplayIDDescriptor.c)
 */

__int64 __fastcall KernelDriver::GetDisplayIdDescriptor(KernelDriver *this, unsigned int *a2, unsigned __int8 *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    return DpiQueryDisplayIDDescriptor(v3, a2, a3);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
