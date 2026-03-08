/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02B5F64
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C003E754 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x1C0040984 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0310014 (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C03268AC (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this)
{
  __int64 v1; // rax
  DXGGLOBAL *Global; // rax
  char *v4; // rcx
  char *v5; // rbx
  struct _KEVENT *v6; // rcx

  v1 = *((_QWORD *)this + 15);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 88) )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(
        Global,
        (struct OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL)));
    }
    DestroyOutputDuplManager(*((struct OUTPUTDUPL_MGR **)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(
      v4,
      4000LL,
      *((_QWORD *)v4 - 1),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete(v5);
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = (struct _KEVENT *)*((_QWORD *)this + 82);
  if ( v6 )
  {
    KeSetEvent(v6, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 82));
    *((_QWORD *)this + 82) = 0LL;
  }
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 89);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 664));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 608));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 536));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 464));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 368));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 296));
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)this + 31, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 200));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 152));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 10);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
