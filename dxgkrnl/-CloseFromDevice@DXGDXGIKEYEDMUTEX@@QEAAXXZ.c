/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325E44
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A8B90 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C03255A0 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C03285FC (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C03261D4 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *Current; // rsi
  unsigned int v12; // eax
  __int64 v13; // r8
  int v14; // ecx
  struct DXGRESOURCE *v15; // rbx
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  PERESOURCE *Global; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _BYTE v23[32]; // [rsp+50h] [rbp-38h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((_QWORD *)this + 1);
  v5[5] = *((_QWORD *)this + 4);
  if ( !*((_QWORD *)this + 1) )
    return;
  if ( *((_QWORD *)this + 4) != PsGetCurrentProcess(v6)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v21[3] = PsGetCurrentProcess(v22);
    v21[4] = *((_QWORD *)this + 4);
    v21[5] = *((_QWORD *)this + 1);
    return;
  }
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent(v8);
    if ( !Current )
    {
      WdLogSingleEntry1(1LL, 575LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 575LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, Current);
    v12 = (*((_DWORD *)this + 22) >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)Current + 74) )
    {
      v13 = *((_QWORD *)Current + 35);
      if ( ((*((_DWORD *)this + 22) >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60)
        && (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) == 0 )
      {
        v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
        if ( v14 )
        {
          if ( v14 == 4 )
          {
            v15 = *(struct DXGRESOURCE **)(v13 + 16LL * v12);
            if ( v15 )
            {
LABEL_15:
              v16 = *((_DWORD *)this + 22);
              v17 = (v16 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v17 < *((_DWORD *)Current + 74) )
              {
                v18 = *((_QWORD *)Current + 35);
                v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
                if ( ((v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
                  && (v19 & 0x2000) == 0
                  && (v19 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v18 + 16LL * ((v16 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
              DXGDEVICE::DestroyAllocationInternal(
                *((DXGDEVICE **)this + 1),
                0,
                0LL,
                v15,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
              *((_QWORD *)this + 11) = 0LL;
              goto LABEL_21;
            }
LABEL_14:
            WdLogSingleEntry1(1LL, 581LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 581LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_15;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v15 = 0LL;
    goto LABEL_14;
  }
LABEL_21:
  if ( !*((_DWORD *)this + 24) )
    goto LABEL_24;
  if ( *((_QWORD *)this + 13) )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 13), *((_DWORD *)this + 24));
    *((_DWORD *)this + 24) = 0;
    *((_QWORD *)this + 13) = 0LL;
LABEL_24:
    if ( *((_QWORD *)this + 13) )
    {
      WdLogSingleEntry1(1LL, 601LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pFenceSyncObj", 601LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 602LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_hFenceLocal", 602LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
