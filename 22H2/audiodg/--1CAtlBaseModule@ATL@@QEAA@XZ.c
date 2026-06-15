/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001C9F0
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x14002DB60 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x14001DF24 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&stru_14008FFE8);
  if ( qword_140090010 )
  {
    free(qword_140090010);
    qword_140090010 = 0LL;
  }
  dword_140090018 = 0;
  dword_14009001C = 0;
}
