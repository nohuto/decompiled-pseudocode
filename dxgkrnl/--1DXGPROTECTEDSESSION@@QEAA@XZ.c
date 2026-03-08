/*
 * XREFs of ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0055D5C
 * Callers:
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0055FA0 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::~DXGPROTECTEDSESSION(DXGPROTECTEDSESSION *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  DXGGLOBAL *Global; // rax
  void *v15; // rcx
  void *v16; // rcx

  if ( *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 44LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v3, v2, v4, 0LL, 2, -1, L"0 == m_cReference", 44LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_QWORD *)this + 19) )
  {
    WdLogSingleEntry1(1LL, 45LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v5,
          v7,
          0LL,
          2,
          -1,
          L"NULL == m_hDriverHandle",
          45LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_DWORD *)this + 6) != 3 )
  {
    WdLogSingleEntry1(1LL, 46LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0LL,
          2,
          -1,
          L"EXECUTION_STOPPED == m_ExecutionState",
          46LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_BYTE *)this + 144) )
  {
    WdLogSingleEntry1(1LL, 47LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0LL,
          2,
          -1,
          L"false == m_bDelaySignal",
          47LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_QWORD *)this + 15) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 15), 0);
    *((_QWORD *)this + 15) = 0LL;
  }
  v15 = (void *)*((_QWORD *)this + 11);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)this + 11) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 13);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)this + 13) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROTECTEDSESSION *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
