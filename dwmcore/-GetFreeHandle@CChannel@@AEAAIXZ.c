/*
 * XREFs of ?GetFreeHandle@CChannel@@AEAAIXZ @ 0x18004434C
 * Callers:
 *     ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z @ 0x1800404E0 (-DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z.c)
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x180043EF0 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x1801CBD90 (-CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::GetFreeHandle(CChannel *this)
{
  __int64 v1; // r9
  __int64 v2; // r11
  __int64 v3; // rax
  unsigned int v4; // r10d
  unsigned int v5; // edx
  __int64 v6; // rdx

  v1 = *((_QWORD *)this + 3);
  v2 = *((_QWORD *)this + 2);
  v3 = (v1 - v2) >> 4;
  if ( *((_QWORD *)this + 5) == v3 )
    return (unsigned int)(v3 + 1);
  v4 = *((_DWORD *)this + 12);
  do
  {
    v5 = v4 % (unsigned __int64)((v1 - v2) >> 4);
    v4 = v5 + 1;
    v6 = 2LL * v5;
    *((_DWORD *)this + 12) = v4;
    if ( !v4 )
      break;
    v1 = *((_QWORD *)this + 3);
    if ( v4 > (unsigned __int64)((v1 - v2) >> 4) )
      break;
  }
  while ( *(_DWORD *)(v2 + 8 * v6) && *(_DWORD *)(v2 + 8 * v6 + 4) );
  return v4;
}
