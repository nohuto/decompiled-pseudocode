/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1400136A8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012490 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  ATL::_AtlBaseModule = 96;
  qword_140090010 = 0LL;
  dword_140090018 = 0;
  dword_14009001C = 0;
  *(&stru_14008FFE8 + 4) = 0LL;
  qword_14008FFD0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_14008FFE0 = (__int64)&GUID_ATLVer70;
  stru_14008FFE8 = 0LL;
  byte_14008FFD8 = 1;
  *(&stru_14008FFE8 + 1) = 0LL;
  dword_14008FFDC = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_14008FFE8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
