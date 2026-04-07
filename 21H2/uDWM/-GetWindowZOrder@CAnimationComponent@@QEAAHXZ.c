/*
 * XREFs of ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180033D84
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800339A0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180015C8C (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CAnimationComponent::GetWindowZOrder(CAnimationComponent *this)
{
  HWND v1; // rdx
  __int64 result; // rax
  struct CWindowData *WindowDataByHwnd; // rdx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  bool v9; // zf

  v1 = (HWND)*((_QWORD *)this + 2);
  if ( v1 == HWND_MESSAGE|0x2LL )
    return 0x7FFFFFFFLL;
  result = *((unsigned int *)this + 15);
  if ( (_DWORD)result == 0x80000000 )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                         v1);
    v5 = 0;
    if ( WindowDataByHwnd )
    {
      v6 = *((_QWORD *)WindowDataByHwnd + 48);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 24);
        if ( v7 )
        {
          if ( *((_BYTE *)this + 120) )
          {
            *((_DWORD *)this + 15) = -5;
          }
          else
          {
            v8 = *(_QWORD **)(v7 + 48);
            v9 = *(_DWORD *)(v7 + 72) == 0;
            if ( *(_DWORD *)(v7 + 72) )
            {
              do
              {
                if ( v6 == *v8 )
                  break;
                ++v5;
                ++v8;
              }
              while ( v5 < *(_DWORD *)(v7 + 72) );
              v9 = v5 == *(_DWORD *)(v7 + 72);
            }
            if ( !v9 )
              *((_DWORD *)this + 15) = v5;
          }
        }
      }
      return *((unsigned int *)this + 15);
    }
    else
    {
      result = 4294967286LL;
      *((_DWORD *)this + 15) = -10;
    }
  }
  return result;
}
