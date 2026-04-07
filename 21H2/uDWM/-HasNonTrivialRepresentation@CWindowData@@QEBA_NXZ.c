/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180015438
 * Callers:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800133BC (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180014560 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x180041B10 (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  char v2; // si
  int v3; // ebx
  int SystemMetrics; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // ecx

  if ( *((_QWORD *)this + 52) )
    return 1;
  if ( CWindowData::IsImmersiveWindow(this) )
    return (*((_BYTE *)this + 612) & 0x20) == 0 || CWindowData::IsSplashScreen(this);
  if ( !*((_QWORD *)this + 48) )
    return 0;
  v2 = 1;
  if ( (*((_BYTE *)this + 608) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 3) )
      return 0;
  }
  if ( (*((_BYTE *)this + 609) & 0x30) == 0 && (*((_DWORD *)this + 26) & 0x200000) == 0 )
    return 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) != 0 )
  {
    v3 = *((_DWORD *)this + 47) - *((_DWORD *)this + 45);
    SystemMetrics = GetSystemMetrics(57);
    v5 = 0;
    if ( v3 >= 0 )
      v5 = v3;
    if ( v5 <= SystemMetrics )
    {
      v6 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      v7 = GetSystemMetrics(58);
      v8 = 0;
      if ( v6 >= 0 )
        v8 = v6;
      if ( v8 <= v7 )
        return 0;
    }
  }
  return v2;
}
