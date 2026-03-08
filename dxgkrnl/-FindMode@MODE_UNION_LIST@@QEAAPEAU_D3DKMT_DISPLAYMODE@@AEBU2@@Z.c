/*
 * XREFs of ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C02FBB28
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01E8700 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1C02FA0C8 (--8@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 */

struct _D3DKMT_DISPLAYMODE *__fastcall MODE_UNION_LIST::FindMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi

  v2 = 0;
  if ( !*((_DWORD *)this + 4) )
    return 0LL;
  while ( 1 )
  {
    v5 = *((_QWORD *)this + 1) + 44LL * v2;
    if ( operator==(&a2->Width, v5) )
      break;
    if ( ++v2 >= *((_DWORD *)this + 4) )
      return 0LL;
  }
  return (struct _D3DKMT_DISPLAYMODE *)v5;
}
