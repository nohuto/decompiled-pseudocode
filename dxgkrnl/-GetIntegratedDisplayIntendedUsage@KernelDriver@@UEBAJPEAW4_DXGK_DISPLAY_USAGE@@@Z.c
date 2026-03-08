/*
 * XREFs of ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0218A00
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall KernelDriver::GetIntegratedDisplayIntendedUsage(KernelDriver *this, enum _DXGK_DISPLAY_USAGE *a2)
{
  __int64 v2; // rax
  _QWORD *ChildDescriptor; // rax
  unsigned int v4; // r9d
  _BYTE *v5; // r10
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    ChildDescriptor = DpiFdoGetChildDescriptor(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 216LL) + 64LL),
                        *((_DWORD *)this + 8));
    if ( ChildDescriptor && (v6 = ChildDescriptor[13]) != 0 )
    {
      result = v4;
      LOBYTE(v4) = *(_BYTE *)(v6 + 121);
    }
    else
    {
      result = ChildDescriptor != 0LL ? -1071841279 : -1073741811;
    }
    *v5 = v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    return 3221225664LL;
  }
  return result;
}
