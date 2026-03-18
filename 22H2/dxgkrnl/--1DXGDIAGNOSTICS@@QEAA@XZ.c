/*
 * XREFs of ??1DXGDIAGNOSTICS@@QEAA@XZ @ 0x1C0051B08
 * Callers:
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0051BA8 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGDIAGNOSTICS::~DXGDIAGNOSTICS(DXGDIAGNOSTICS *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGDIAGNOSTICS *)((char *)this + 64));
}
