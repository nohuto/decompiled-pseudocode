/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0041C6C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0008A0C (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033FF0 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BC62C (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v5; // di
  __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 *v13; // rdx
  HWND WindowHandle; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _BYTE v17[64]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = a4;
  v5 = 1;
  if ( !CInputDest::DoesBelongToForeground((__int64)a2, 1) )
  {
    if ( *((_DWORD *)a3 + 8) == 1 )
    {
      if ( gpqForeground
        && *((_DWORD *)a2 + 23) == 2
        && (v9 = *((_QWORD *)a2 + 10)) != 0
        && grpdeskRitInput
        && v9 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL) )
      {
        WindowHandle = CInputDest::GetWindowHandle(a2);
        CBaseProcessor::PostQEventWork(v15, WindowHandle, 0LL);
      }
      else
      {
        v10 = *((_QWORD *)a3 + 1);
        v18 = *(_QWORD *)(v10 + 132);
        v11 = *(_DWORD *)(v10 + 108);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v17, a2);
        v13 = &v18;
        if ( v11 == 1 )
          v13 = 0LL;
        v5 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput((__int64)a2, (__int64)v13, v12) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v17);
      }
    }
    else
    {
      v16 = *((_QWORD *)a3 + 1);
      if ( *(_DWORD *)(v16 + 108) != 1 )
        return anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v16 + 132), a2, v7) != 0;
    }
  }
  return v5;
}
