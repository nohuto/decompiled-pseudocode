/*
 * XREFs of ??1LegacyInputDispatcher@@QEAA@XZ @ 0x1C0093044
 * Callers:
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0093010 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyInputDispatcher::~LegacyInputDispatcher(LegacyInputDispatcher *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &LegacyInputDispatcher::`vftable';
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    Win32FreePool(v2);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    Win32FreePool(v3);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
    Win32FreePool(v4);
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
    Win32FreePool(v5);
}
