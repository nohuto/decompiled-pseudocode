/*
 * XREFs of GreLockVisRgnPublish @ 0x1C0085070
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014CC98 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

PVOID __fastcall GreLockVisRgnPublish(__int64 a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  PVOID result; // rax

  v3 = (struct _ERESOURCE *)ghsemVisRgnPublish;
  if ( ghsemVisRgnPublish )
  {
    PsEnterPriorityRegion(a1);
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return (PVOID)McTemplateK0pqz_EtwWriteTransfer(
                      a1,
                      a2,
                      a3,
                      (_DWORD)ghsemVisRgnPublish,
                      9,
                      (__int64)L"ghsemVisRgnPublish");
  }
  return result;
}
