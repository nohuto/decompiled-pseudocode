/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C032C86C
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C00534B8 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C0016294 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C003FBD0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C03255A0 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ??1DDAMetaData@@QEAA@XZ @ 0x1C032C838 (--1DDAMetaData@@QEAA@XZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C032FAA0 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  void *v5; // rsi
  __int64 v6; // rbp
  DDAMetaData **v7; // rdi
  __int64 v8; // r14
  DDAMetaData *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  AUTOEXPANDALLOCATION **v17; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v5 = (void *)*((_QWORD *)this + i + 6);
    if ( v5 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6));
      operator delete(v5);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v6 = 2LL;
  v7 = (DDAMetaData **)((char *)this + 80);
  v8 = 2LL;
  do
  {
    v9 = *v7;
    if ( *v7 )
    {
      DDAMetaData::~DDAMetaData(*v7);
      operator delete(v9);
    }
    *v7 = 0LL;
    v7 += 12;
    --v8;
  }
  while ( v8 );
  if ( *((_DWORD *)this + 76) )
  {
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v13, v14);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionDataForSpecifiedSession);
    *((_DWORD *)this + 76) = 0;
  }
  v17 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    if ( *v17 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(*v17);
      *v17 = 0LL;
    }
    v17 += 12;
    --v6;
  }
  while ( v6 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventOutputDuplicationDestroy, a3, this);
  _InterlockedDecrement(&g_DbgGlobalContextCount);
}
