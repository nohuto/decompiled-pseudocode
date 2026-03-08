/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0054F98
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0339ADC (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C00262F8 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@HH@Z @ 0x1C005523C (-vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@H.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rax

  v9 = 0;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 7)) )
  {
    WdLogSingleEntry1(1LL, 573LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0LL,
          2,
          -1,
          L"!m_pAdapter->IsCoreResourceSharedOwner()",
          573LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    WdLogSingleEntry1(1LL, 575LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v14,
          v13,
          v15,
          0LL,
          2,
          -1,
          L"m_hWindowDc == NULL && m_hFullscreenDc == NULL && m_hDevLocked == NULL",
          575LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v16 = (*(__int64 (__fastcall **)(HWND, unsigned __int64))(*((_QWORD *)this + 3) + 48LL))(
          a2,
          ((unsigned __int64)this + 8) & -(__int64)(a5 != 0));
  *(_QWORD *)this = v16;
  if ( v16 )
  {
    if ( a5 )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        WdLogSingleEntry1(1LL, 581LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v18,
              v17,
              v19,
              0LL,
              2,
              -1,
              L"((! bFullscreen) || (m_hFullscreenDc))",
              581LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 288LL))(*(_QWORD *)this, 1LL);
    DXGSTABLEVISRGNANDSPRITE::vLock(
      (CWin32kLocks *)((char *)this + 32),
      *(HDC *)this,
      *((const struct _DXGKWIN32KENG_INTERFACE *const *)this + 3),
      *((struct DXGADAPTER **)this + 7),
      a3,
      a4);
    v20 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v20;
    if ( !v20 )
    {
      WdLogSingleEntry1(4LL, *(_QWORD *)this);
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v9 = -1071775731;
    WdLogSingleEntry1(4LL, a2);
  }
  return v9;
}
