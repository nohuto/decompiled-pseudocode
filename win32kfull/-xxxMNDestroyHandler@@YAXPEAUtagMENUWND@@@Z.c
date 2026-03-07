void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rcx
  struct tagWND *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]

  v15 = 0LL;
  v14 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v12, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v12[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v12[0] + 24LL) )
    {
      v2 = *(_QWORD *)v12[0];
      if ( *(_QWORD *)(*(_QWORD *)v12[0] + 16LL) )
        v3 = *(struct tagWND **)(v2 + 16);
      else
        v3 = *(struct tagWND **)(v2 + 24);
      ThreadLockAlways(v3, &v14);
      xxxSendMessage(v3, 0x1E4u);
      ThreadUnlock1(v5, v4, v6);
    }
    if ( *(_QWORD *)(*(_QWORD *)v12[0] + 40LL)
      && *(int *)(*(_QWORD *)v12[0] + 80LL) >= 0
      && *(_DWORD *)(*(_QWORD *)v12[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL)
                                                           + 44LL) )
    {
      *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v12[0] + 80LL)
                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 88LL))
                + 4LL) &= ~0x80u;
    }
    if ( (**(_DWORD **)v12[0] & 0x2000) != 0 )
      FindTimer(*(void **)(*(_QWORD *)v12[0] + 16LL), (void *)0xFFFE, 0, 1, 0LL);
    if ( (**(_DWORD **)v12[0] & 0x4000) != 0 )
      FindTimer(*(void **)(*(_QWORD *)v12[0] + 16LL), (void *)0xFFFF, 0, 1, 0LL);
    if ( (**(_DWORD **)v12[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v12[0] + 8LL) )
    {
      ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL), &v14);
      xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v12[0] + 8LL), 0x125u);
      ThreadUnlock1(v8, v7, v9);
    }
    **(_DWORD **)v12[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v12[0] + 16LL) )
    {
      v10 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v12[0] + 16LL));
      v11 = v10;
      if ( v10 )
      {
        *(_QWORD *)(v10 + 8) = 0LL;
        if ( *(_QWORD *)(v10 + 16) && *(_QWORD *)(v10 + 16) != *(_QWORD *)v12[0] )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1195);
        *(_QWORD *)(v11 + 16) = *(_QWORD *)v12[0];
      }
    }
    if ( (**(_DWORD **)v12[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v12[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, *(_QWORD *)v12[0]);
      MNFreePopup(v13);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12);
}
