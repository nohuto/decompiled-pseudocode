/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18003AA80
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004BF70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18003AD28 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18003AEF4 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2, int a3)
{
  __int64 v3; // rdx
  double v5; // xmm6_8
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rcx
  struct _SINGLE_LIST_ENTRY *j; // rbx
  struct _SINGLE_LIST_ENTRY *v10; // rdi
  struct _SINGLE_LIST_ENTRY *v11; // rcx
  __int64 v12; // rcx
  char v13; // al
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v15; // rbx
  char v16; // bp
  CTimelineBase *v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rbx
  _QWORD v22[2]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationRecalc_Start,
      a3,
      1,
      (__int64)v22);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    Next = CDesktopManager::s_listTimeline.Next;
    v15 = &CDesktopManager::s_listTimeline;
    v16 = 1;
    CDesktopManager::s_fTimelineDirty = 0;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        v17 = (CTimelineBase *)&Next[-2];
        if ( LODWORD(Next[-1].Next) )
        {
          if ( v16 )
          {
            if ( *((_BYTE *)v17 + 73) )
            {
              v18 = CTimelineBase::UpdateBeforeTickWorker(v17, (CDesktopManager *)((char *)this + 328));
              Next = v15->Next;
            }
            else
            {
              v18 = 0;
            }
            if ( v18 < 0 )
              v16 = 0;
          }
          v15 = Next;
        }
        else
        {
          if ( Next )
            v15->Next = Next->Next;
          (**(void (__fastcall ***)(CTimelineBase *, __int64))v17)(v17, 1LL);
        }
        Next = v15->Next;
      }
      while ( v15->Next );
    }
    v19 = *((_QWORD *)this + 43);
    if ( v19 && v16 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 88LL))(v19, v3, 0LL) < 0 )
      v16 = 0;
    v20 = *((_QWORD *)this + 43);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      *((_QWORD *)this + 43) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
      {
        if ( !v16 )
          CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
        BYTE1(i[7].Next) = 0;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8)
                                                          + 64LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         2LL)
    && (GetKeyState(16) & 0xFF80) != 0 )
  {
    v5 = a2 / 20.0;
  }
  v8 = *((_QWORD *)this + 41);
  *((double *)this + 40) = v5 + *((double *)this + 40);
  if ( v8 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, v6, 0LL);
  for ( j = CDesktopManager::s_listTimeline.Next; j; j = j->Next )
  {
    v10 = j - 2;
    if ( !LOBYTE(j[7].Next) )
    {
      v11 = v10[8].Next;
      v22[0] = 0LL;
      if ( !v11 || ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, _QWORD *))v11->Next[9].Next)(v11, v22) < 0 )
      {
        LOBYTE(v10[9].Next) = 1;
LABEL_18:
        CTimelineBase::JumpToFinalValue((CTimelineBase *)&j[-2]);
        continue;
      }
      v12 = v22[0];
      v13 = v22[0] == 0LL;
      LOBYTE(v10[9].Next) = v22[0] == 0LL;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v13 = (char)v10[9].Next;
        v22[0] = 0LL;
      }
      if ( v13 )
        goto LABEL_18;
      ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v10[8].Next->Next[3].Next)(
        v10[8].Next,
        &v10[6]);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationRecalc_Stop,
      v7,
      1,
      (__int64)v22);
}
