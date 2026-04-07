/*
 * XREFs of ??1CTextCache@@UEAA@XZ @ 0x180093F68
 * Callers:
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x180085CF0 (--_GCTextCache@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseFont@CTextCache@@AEAAXXZ @ 0x180045C10 (-ReleaseFont@CTextCache@@AEAAXXZ.c)
 */

void __fastcall CTextCache::~CTextCache(CTextCache *this)
{
  bool v1; // zf
  HDC v3; // rcx

  v1 = *((_QWORD *)this + 14) == 0LL;
  *(_QWORD *)this = &CTextCache::`vftable';
  if ( !v1 )
    CTextCache::ReleaseFont(this);
  v3 = (HDC)*((_QWORD *)this + 13);
  if ( v3 )
  {
    DeleteDC(v3);
    *((_QWORD *)this + 13) = 0LL;
  }
}
