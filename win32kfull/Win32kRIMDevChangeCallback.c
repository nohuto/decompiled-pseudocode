/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C01A7C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PostDeviceNotification @ 0x1C00D6230 (PostDeviceNotification.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01A7A1C (RIMDevChangeDoUsermodeCallback.c)
 *     IsPublicPointerDevice @ 0x1C01C43C4 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01C460C (UpdatePointerDeviceCount.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200C6C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200D38 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200E78 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200F1C (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0243C58 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0243E80 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  unsigned int updated; // edi
  int v5; // r15d
  __int64 v6; // rdx
  bool v7; // zf
  _DWORD *v8; // r14
  __int64 v9; // rcx
  InteractiveControlManager *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  int v19; // eax
  InteractiveControlManager *v20; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v1 + 544);
  updated = 0;
  v5 = *(_DWORD *)(SGDGetUserSessionState(a1) + 16328);
  RIMDevChangeDoUsermodeCallback(a1);
  if ( (*(_DWORD *)(v1 + 256) & 0x10000) != 0 )
    return;
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      LOBYTE(v6) = 19;
      v16 = (_QWORD *)HMCreateHandleForObject(v1 + 72, v6);
      if ( !v16 )
        goto LABEL_34;
      if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v1 + 272) & 0x80u) != 0 )
      {
        LOBYTE(v14) = 22;
        v17 = HMCreateHandleForObject(v3, v14);
        v18 = v17;
        if ( !v17 )
        {
          HMMarkObjectDestroy(v16);
          HMRemoveHandleForObject(v16);
LABEL_34:
          v19 = *(_DWORD *)(v1 + 272);
          if ( (v19 & 0x100) != 0 )
          {
            v20 = InteractiveControlManager::Instance(v15);
            InteractiveControlManager::OnDeviceAttach(v20, (struct RawInputManagerDeviceObject *)v1);
          }
          else if ( (v19 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v1);
          }
          return;
        }
        HMLockObject(v17);
        *(_QWORD *)(v18 + 784) = *v16;
      }
      RawInputManagerDeviceObjectReference(v1);
      goto LABEL_34;
    case 2:
      if ( (unsigned int)IsPublicPointerDevice(v1 + 72) )
        updated = UpdatePointerDeviceCount(1LL);
      PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 72), v13, 1uLL, updated);
      if ( (*(_DWORD *)(v1 + 272) & 0x200) != 0 )
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v1);
      break;
    case 3:
      if ( (*(_DWORD *)(v1 + 256) & 0x2000) != 0 )
      {
        UpdatePointerDeviceCount(2LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 72), v11, 2uLL, v5 + 1);
      }
      else
      {
        if ( (unsigned int)IsPublicPointerDevice(v1 + 72) )
        {
          updated = v5 + 1;
          UpdatePointerDeviceCount(2LL);
        }
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 72), v12, 2uLL, updated);
      }
      if ( (*(_DWORD *)(v1 + 272) & 0x200) != 0 )
        InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v1);
      break;
    case 4:
      v7 = *(_DWORD *)(a1 + 4) == 2;
      v8 = (_DWORD *)(v1 + 272);
      if ( v7 && (*v8 & 0x80u) != 0 )
      {
        HMUnlockObject(v3);
        if ( *(_DWORD *)(v3 + 8) || !(unsigned int)HMMarkObjectDestroy(v3) )
        {
LABEL_13:
          if ( (*v8 & 0x100) != 0 )
          {
            v10 = InteractiveControlManager::Instance(v9);
            InteractiveControlManager::OnDeviceRemoval(v10, (struct RawInputManagerDeviceObject *)v1);
          }
          else if ( (*v8 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v1);
          }
          return;
        }
        HMRemoveHandleForObject(v3);
      }
      if ( (unsigned int)HMMarkObjectDestroy(v1 + 72) )
        HMRemoveHandleForObject(v1 + 72);
      goto LABEL_13;
    default:
      return;
  }
}
