/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C012D2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5B10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PostDeviceNotification @ 0x1C0108720 (PostDeviceNotification.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C012D328 (RIMDevChangeDoUsermodeCallback.c)
 *     IsPublicPointerDevice @ 0x1C01EE324 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01EE808 (UpdatePointerDeviceCount.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FE80 (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FF3C (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220060 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C02200F4 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0251FE8 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0252210 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r15d
  int updated; // edi
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  InteractiveControlManager *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // eax
  InteractiveControlManager *v19; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = gcPointerDevices;
  updated = 0;
  v5 = *(_QWORD *)(v1 + 568);
  RIMDevChangeDoUsermodeCallback();
  if ( (*(_DWORD *)(v1 + 272) & 0x4000) != 0 )
    return;
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      LOBYTE(v6) = 19;
      v15 = (_QWORD *)HMCreateHandleForObject(v1 + 88, v6);
      if ( v15 )
      {
        if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v1 + 288) & 0x80u) != 0 )
        {
          LOBYTE(v14) = 22;
          v16 = HMCreateHandleForObject(v5, v14);
          v17 = v16;
          if ( v16 )
          {
            HMLockObject(v16);
            *(_QWORD *)(v17 + 736) = *v15;
          }
          else
          {
            HMMarkObjectDestroy(v15);
            HMRemoveHandleForObject(v15);
            v15 = 0LL;
          }
        }
        if ( v15 )
          RawInputManagerDeviceObjectReference(v1);
      }
      v18 = *(_DWORD *)(v1 + 288);
      if ( (v18 & 0x100) != 0 )
      {
        v19 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceAttach(v19, (struct RawInputManagerDeviceObject *)v1);
      }
      else if ( (v18 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v1);
      }
      break;
    case 2:
      v11 = IsPublicPointerDevice(v1 + 88);
      v13 = 1LL;
      if ( v11 )
        updated = UpdatePointerDeviceCount(1LL);
      PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 88), v12, v13, updated);
      if ( (*(_DWORD *)(v1 + 288) & 0x200) != 0 )
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v1);
      break;
    case 3:
      if ( (*(_DWORD *)(v1 + 272) & 0x2000) != 0 )
      {
        UpdatePointerDeviceCount(2LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 88), v9, 2uLL, v3 + 1);
      }
      else
      {
        if ( (unsigned int)IsPublicPointerDevice(v1 + 88) )
        {
          updated = v3 + 1;
          UpdatePointerDeviceCount(2LL);
        }
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 88), v10, 2uLL, updated);
      }
      if ( (*(_DWORD *)(v1 + 288) & 0x200) != 0 )
        InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v1);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v1 + 288) & 0x80u) != 0 )
      {
        HMUnlockObject(v5);
        if ( *(_DWORD *)(v5 + 8) || !(unsigned int)HMMarkObjectDestroy(v5) )
        {
LABEL_14:
          v7 = *(_DWORD *)(v1 + 288);
          if ( (v7 & 0x100) != 0 )
          {
            v8 = InteractiveControlManager::Instance();
            InteractiveControlManager::OnDeviceRemoval(v8, (struct RawInputManagerDeviceObject *)v1);
          }
          else if ( (v7 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v1);
          }
          return;
        }
        HMRemoveHandleForObject(v5);
      }
      if ( (unsigned int)HMMarkObjectDestroy(v1 + 88) )
        HMRemoveHandleForObject(v1 + 88);
      goto LABEL_14;
    default:
      return;
  }
}
