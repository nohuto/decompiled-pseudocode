/*
 * XREFs of zzzDwmStartRedirection @ 0x1C00E942C
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C0135DA0 (NtUserDwmKernelStartup.c)
 * Callees:
 *     GreDwmStartup @ 0x1C000CD48 (GreDwmStartup.c)
 *     _GetProcessWindowStation @ 0x1C000EED0 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C0029460 (bSetDevDragRect.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00296FC (zzzEnableDwmPointerSupport.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00BEDE8 (CreateOrGetRedirectionBitmap.c)
 *     DwmAsyncDesktopCreate @ 0x1C00E9384 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C00E9864 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00E9904 (DwmNotifyChildrenAddRemove.c)
 *     zzzDecomposeDesktop @ 0x1C00EAA3C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF608 (DeleteOrSetRedirectionBitmap.c)
 *     GreDwmShutdown @ 0x1C0134054 (GreDwmShutdown.c)
 *     StopFade @ 0x1C01E7A90 (StopFade.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  int RedirectionBitmap; // r14d
  __int64 i; // rsi
  __int64 **v4; // rax
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 j; // rbx
  void *v10; // rbx
  __int64 v12; // r9
  __int64 k; // rsi
  __int64 v14; // rdx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 m; // rbx
  __int64 v19; // rdx
  _OWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+48h] [rbp-8h]
  HSURF v23; // [rsp+80h] [rbp+30h] BYREF

  v23 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 1, 0, &v23);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 120) = v23;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v4 = *(__int64 ***)(i + 8);
          v5 = **v4;
          v6 = (void *)ReferenceDwmApiPort(*v4, v1);
          DwmAsyncDesktopCreate(v6, v5);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1u, 0);
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
                zzzDecomposeDesktop((struct tagDESKTOP *)k);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k);
                v15 = (void *)ReferenceDwmApiPort(**(_QWORD **)(k + 8), v14);
                DwmAsyncDesktopFree(v15);
              }
              v16 = *(_QWORD *)(ProcessWindowStation + 120);
              if ( v16 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v16, 1LL, v12);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
              break;
            }
          }
        }
        v10 = (void *)ReferenceDwmApiPort(v8, v7);
        if ( v10 )
        {
          v22 = 1073741894;
          v21 = 0LL;
          memset(v20, 0, sizeof(v20));
          LODWORD(v20[0]) = 2883588;
          WORD2(v20[0]) = 0x8000;
          LpcRequestPort(v10, v20);
          ObfDereferenceObject(v10);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 64) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m);
        }
        v19 = *(_QWORD *)(ProcessWindowStation + 120);
        if ( v19 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v19, 1LL, v17);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
