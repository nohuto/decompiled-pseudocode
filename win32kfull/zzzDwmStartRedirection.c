__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  int RedirectionBitmap; // r14d
  __int64 i; // rsi
  void *v3; // rax
  __int64 v4; // rcx
  __int64 j; // rbx
  void *v6; // rbx
  __int64 k; // rsi
  __int64 **v9; // rax
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 m; // rbx
  __int64 v14; // rdx
  _OWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+48h] [rbp-8h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF

  v18 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 1, 0, &v18);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 120) = v18;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v3 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8));
          DwmAsyncDesktopCreate(v3);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1LL, 0LL);
        if ( grpdeskRitInput )
        {
          for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              for ( k = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k, 0);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k);
                v9 = *(__int64 ***)(k + 8);
                v10 = **v9;
                v11 = (void *)ReferenceDwmApiPort(*v9);
                DwmAsyncDesktopFree(v11, v10);
              }
              v12 = *(_QWORD *)(ProcessWindowStation + 120);
              if ( v12 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v12, 1);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
              break;
            }
          }
        }
        v6 = (void *)ReferenceDwmApiPort(v4);
        if ( v6 )
        {
          v17 = 1073741896;
          v16 = 0LL;
          memset(v15, 0, sizeof(v15));
          LODWORD(v15[0]) = 2883588;
          WORD2(v15[0]) = 0x8000;
          LpcRequestPort(v6, v15);
          ObfDereferenceObject(v6);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 64) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m);
        }
        v14 = *(_QWORD *)(ProcessWindowStation + 120);
        if ( v14 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v14, 1);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
