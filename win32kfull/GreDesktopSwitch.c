__int64 __fastcall GreDesktopSwitch(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  _QWORD *i; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  a5 = 0;
  v14 = a1;
  v9 = Gre::Base::Globals((Gre::Base *)a1);
  ENTER_GRE_DWM_CRIT((Gre::Base *)a1, &a5);
  if ( (unsigned int)IsDwmActive() && !a3 )
    SpRenderHint(&v14, 65539 - (unsigned int)(a2 != 0), 0LL, 0LL);
  LEAVE_GRE_DWM_CRIT((Gre::Base *)a1, 0);
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1768); i; i = (_QWORD *)*i )
      {
        v12 = i[6];
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 40) & 1) != 0 )
          {
            v13 = *(_QWORD *)(v12 + 2528);
            if ( v13 )
              *(_QWORD *)(v13 + 648) = a4;
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 2528) + 648LL) = a4;
    }
  }
  if ( a5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v9 + 10));
  }
  return 0LL;
}
