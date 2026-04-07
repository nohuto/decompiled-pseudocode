/*
 * XREFs of ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002AF7C
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001AB00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002AE7C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     wistd::__function::__func__lambda_8cfddf842dd701e76edd4d414fa3e64b__void___cdecl(int_const_&)_::operator() @ 0x180057560 (wistd--__function--__func__lambda_8cfddf842dd701e76edd4d414fa3e64b__void___cdecl(int_const_-)_--.c)
 * Callees:
 *     ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180005434 (-OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

void __fastcall CWindowList::UpdateAccentState(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rdx
  struct CWindowData *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
  {
    v7 = *(_QWORD *)(a1 + 536);
    if ( *(_DWORD *)(v7 + 16LL * i + 8) == a3 )
    {
      v8 = *(struct CWindowData **)(v7 + 16LL * i);
      v9 = *((_QWORD *)v8 + 48);
      if ( v9 )
      {
        if ( !a2 || *((_QWORD *)v8 + 15) == *(_QWORD *)(a2 + 120) )
        {
          v10 = *(_QWORD **)(v9 + 272);
          if ( v10 )
            CAccent::OnAccentStateUpdated(v10, v8, a3);
        }
      }
    }
  }
}
