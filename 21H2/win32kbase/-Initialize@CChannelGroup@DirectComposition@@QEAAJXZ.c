/*
 * XREFs of ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C00AD7C4
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00AD5F8 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannelGroup::Initialize(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // edi

  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
      Win32FreePool((__int64)v3);
    else
      *((_QWORD *)this + 7) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
