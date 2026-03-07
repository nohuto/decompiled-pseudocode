__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, int a4)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v22; // r15d
  unsigned __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int ClassStyle; // eax
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // rbx
  void *v32; // rax
  __int64 v33; // [rsp+20h] [rbp-60h] BYREF
  __int64 v34; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v35; // [rsp+30h] [rbp-50h] BYREF
  __int64 v36; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v37[16]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v39; // [rsp+60h] [rbp-20h]
  _QWORD *v40; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+70h] [rbp-10h] BYREF
  __int64 v42; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v38, a1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8 = 0;
  v40 = (_QWORD *)gSmartObjNullRef;
  v34 = 0LL;
  v41 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v41;
  v42 = 0LL;
  v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = 0;
  v35 = (_QWORD *)gSmartObjNullRef;
  v36 = *(_QWORD *)(v9 + 1512);
  *(_QWORD *)(v9 + 1512) = &v36;
  v42 = v39;
  SmartObjStackRefBase<tagMENU>::operator=(&v40, *(_QWORD *)v38[0]);
  v11 = v39;
  if ( v39 )
  {
    v12 = v39;
  }
  else
  {
    v11 = 0LL;
    v12 = *(_QWORD *)v38[0];
  }
  v33 = v12;
  if ( !v11 )
    v11 = *(_QWORD *)v38[0];
  v13 = a3 & 0x400;
  v14 = MNLookUpItem(v11, a2, v13, &v33);
  v39 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v38, v33);
  if ( v14 )
    goto LABEL_52;
  if ( a2 >= 0xFFFFF000 && !v13 )
  {
    v39 = v42;
    SmartObjStackRefBase<tagMENU>::operator=(v38, *v40);
    v25 = v39;
    if ( v39 )
    {
      v26 = v39;
    }
    else
    {
      v25 = 0LL;
      v26 = *(_QWORD *)v38[0];
    }
    v33 = v26;
    if ( !v25 )
      v25 = *(_QWORD *)v38[0];
    v14 = MNLookUpItem(v25, (unsigned __int16)a2, 0LL, &v33);
    v39 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v38, v33);
    if ( v14 )
    {
LABEL_52:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 40LL) & 0x100) == 0
        || (v15 = 1, *(_DWORD *)(*(_QWORD *)v14 + 8LL) != 61536) )
      {
        v15 = 0;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v14 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 40LL) &= ~0x400u;
      v16 = v39;
      if ( !v39 )
        v16 = *(_QWORD *)v38[0];
      v17 = MNGetPopupFromMenu(v16, &v34);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v35, v17);
      if ( *v35 )
      {
        v27 = v39;
        if ( !v39 )
          v27 = *(_QWORD *)v38[0];
        v10 = MNGetpItemIndex(v27, v14);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, *v35);
        MNDeleteAdjustIndexes(v34, v37, v10);
      }
      v18 = v39;
      if ( !v39 )
        v18 = *(_QWORD *)v38[0];
      MNFreeItem(v18, (_QWORD *)v14, a4);
      *(_DWORD *)(*(_QWORD *)v38[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v38[0] + 68LL) = 0;
      v19 = *(_QWORD *)v38[0];
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v38[0] + 24LL) + 128LL), 0, *(PVOID *)(v19 + 96));
        Win32FreePool(*(void **)(*(_QWORD *)v38[0] + 88LL));
        *(_DWORD *)(*(_QWORD *)v38[0] + 60LL) = 0;
        v20 = *(_QWORD *)v38[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 32LL) = 0LL;
        *(_QWORD *)(v20 + 88) = 0LL;
      }
      else
      {
        v22 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) - v14 + *(_QWORD *)(v19 + 88) - 96;
        if ( v22 )
        {
          memmove(
            *(void **)v14,
            *(const void **)(v14 + 96),
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)
                         + **(_DWORD **)(*(_QWORD *)v38[0] + 88LL)
                         - *(_DWORD *)(v14 + 96)));
          memmove((void *)v14, (const void *)(v14 + 96), v22);
          v23 = 0xAAAAAAAAAAAAAAABuLL * ((v14 - *(_QWORD *)(*(_QWORD *)v38[0] + 88LL)) >> 5);
          while ( (unsigned int)v23 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) - 1 )
          {
            v24 = 96LL * (int)v23;
            *(_QWORD *)(v24 + *(_QWORD *)(*(_QWORD *)v38[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v38[0] + 96LL)
                                                                     + 112LL * (unsigned int)v23;
            LODWORD(v23) = v23 + 1;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 88LL) + v24 + 8) = *(_QWORD *)(v24
                                                                                     + *(_QWORD *)(*(_QWORD *)v38[0]
                                                                                                 + 88LL))
                                                                         - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0]
                                                                                                 + 24LL)
                                                                                     + 16LL);
          }
        }
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v38[0] + 60LL)
                          - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)) >= 9 )
          MNAllocMenuItems((__int64)v38, 1u);
      }
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL);
      if ( v15
        && *(_QWORD *)(*(_QWORD *)v38[0] + 80LL)
        && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v38[0] + 80LL)) )
      {
        DirtyVisRgnTrackers(*(_QWORD *)(*(_QWORD *)v38[0] + 80LL));
        ClassStyle = DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v38[0] + 80LL));
        v29 = v38[0];
        v30 = ClassStyle;
        if ( *(_QWORD *)(*(_QWORD *)v38[0] + 80LL) )
        {
          v29 = *(_QWORD *)v38[0];
          v31 = **(_QWORD **)(*(_QWORD *)v38[0] + 80LL);
        }
        else
        {
          v31 = 0LL;
        }
        v32 = (void *)ReferenceDwmApiPort(v29);
        DwmAsyncChildStyleChange(v32, v31, -26, v30);
      }
      if ( *v35 )
        xxxMNUpdateShownMenu(&v35, *(_QWORD *)(*(_QWORD *)v38[0] + 88LL) + 96LL * v10, 2LL);
      v8 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v35);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v40);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v38);
  return v8;
}
