/*
 * XREFs of HalpAuditGetExtendedBiosDataArea @ 0x140B8F034
 * Callers:
 *     HalpAuditEnumerateRsdts @ 0x140B8EE9C (HalpAuditEnumerateRsdts.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 */

__int64 __fastcall HalpAuditGetExtendedBiosDataArea(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int *v5; // rax
  unsigned int v6; // ebx

  v5 = (unsigned int *)MmMapIoSpaceEx(1856LL, 8LL, 4u);
  v6 = 0;
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
    {
      *a2 = *v5;
      *a3 = v5[1];
    }
    else
    {
      v6 = -1073741823;
    }
    MmUnmapIoSpace(v5, 8uLL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
