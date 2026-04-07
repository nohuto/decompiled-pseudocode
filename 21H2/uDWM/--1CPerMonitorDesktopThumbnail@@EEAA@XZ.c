/*
 * XREFs of ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800B6278
 * Callers:
 *     ??_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z @ 0x1800B6380 (--_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CPerMonitorDesktopThumbnail::~CPerMonitorDesktopThumbnail(CPerMonitorDesktopThumbnail *this)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  CBaseObject *v8; // rcx

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CPerMonitorDesktopThumbnail::`vftable';
  v2 = 0LL;
  v4 = *(_DWORD *)(v1 + 304);
  v5 = *(_QWORD *)(v1 + 280);
  if ( v4 )
  {
    do
    {
      if ( this == *(CPerMonitorDesktopThumbnail **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    while ( (unsigned int)v2 < v4 - 1 )
    {
      v6 = (unsigned int)v2;
      v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v2 + 1));
      LODWORD(v2) = v2 + 1;
      *(_QWORD *)(v5 + 8 * v6) = v7;
      v4 = *(_DWORD *)(v1 + 304);
    }
    *(_DWORD *)(v1 + 304) = v4 - 1;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v8 )
    CBaseObject::Release(v8);
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
}
