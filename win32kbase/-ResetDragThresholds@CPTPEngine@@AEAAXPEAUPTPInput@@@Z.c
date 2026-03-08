/*
 * XREFs of ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238A3C
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0235884 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0236AD8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0238700 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C023A51C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::ResetDragThresholds(CPTPEngine *this, struct PTPInput *a2)
{
  unsigned int v2; // esi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  char *v7; // rdi

  v2 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v5 = (_QWORD *)((char *)a2 + 96);
    do
    {
      v6 = (unsigned int)(*((_DWORD *)v5 - 9) % *((_DWORD *)this + 4));
      v7 = (char *)this + 400 * v6 + 1208;
      if ( (*(_DWORD *)v7 & 1) != 0 )
      {
        if ( (*(_DWORD *)v7 & 2) == 0 )
        {
          *((_QWORD *)v7 + 2) = *v5;
          *((_QWORD *)v7 + 6) = *v5;
          CPTPEngine::SetupDragRectsForContact(this, (CPTPEngine *)((char *)this + 400 * v6 + 1208));
        }
        *(_DWORD *)v7 &= 0xFFF7FFFB;
      }
      ++v2;
      v5 += 12;
    }
    while ( v2 < *((_DWORD *)a2 + 12) );
  }
}
