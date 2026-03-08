/*
 * XREFs of ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C01D96A4
 * Callers:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00161D0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C0016294 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C03268AC (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::~OUTPUTDUPL_SESSION_MGR(OUTPUTDUPL_SESSION_MGR *this)
{
  struct OUTPUTDUPL_MGR *v2; // rcx
  AUTOEXPANDALLOCATION *v3; // rcx

  v2 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    DestroyOutputDuplManager(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 7) = 0LL;
    *((_DWORD *)this + 1) = 0;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((OUTPUTDUPL_SESSION_MGR *)((char *)this + 72));
  DXGFASTMUTEX::~DXGFASTMUTEX((OUTPUTDUPL_SESSION_MGR *)((char *)this + 8));
}
