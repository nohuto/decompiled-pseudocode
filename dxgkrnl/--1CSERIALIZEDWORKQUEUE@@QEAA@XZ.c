/*
 * XREFs of ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C0050A10
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C034FED8 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE(CSERIALIZEDWORKQUEUE *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((_BYTE *)this + 64) || *((CSERIALIZEDWORKQUEUE **)this + 6) != (CSERIALIZEDWORKQUEUE *)((char *)this + 48) )
  {
    WdLogSingleEntry1(1LL, 816LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v3,
        v2,
        v4,
        0LL,
        2,
        -1,
        L"!m_WorkItemActive && IsListEmpty(&m_WorkItemList)",
        816LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
