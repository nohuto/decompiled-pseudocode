/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C034FED8
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C001619C (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C0050A10 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  __int64 i; // rdi
  DXGSESSIONDATA *v3; // rcx
  char *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
  {
    v3 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * i);
    if ( v3 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v3);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i) = 0LL;
    }
  }
  v4 = (char *)*((_QWORD *)this + 6);
  if ( v4 != (char *)this + 56 )
  {
    operator delete(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((DXGSESSIONMGR **)this + 40) != (DXGSESSIONMGR *)((char *)this + 320) )
  {
    WdLogSingleEntry1(1LL, 4954LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_PnPTransitionTokenList)",
      4954LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGSESSIONMGR *)((char *)this + 376));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 88));
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
