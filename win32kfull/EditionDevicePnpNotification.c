/*
 * XREFs of EditionDevicePnpNotification @ 0x1C00D53F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PostDeviceNotification @ 0x1C00D6230 (PostDeviceNotification.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200C6C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200D38 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200E78 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200F1C (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0243C58 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0243E80 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(_DWORD *a1)
{
  int v1; // eax
  _DWORD *v2; // rsi
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // rbx
  void *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  InteractiveControlManager *v11; // rax
  int v12; // eax
  InteractiveControlManager *v13; // rax

  v1 = a1[5];
  v2 = a1;
  v3 = 0LL;
  v4 = 0;
  if ( v1 == 2 )
  {
    v3 = 1LL;
  }
  else if ( a1[5] == 3 )
  {
    v3 = 2LL;
  }
  v5 = *(_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)a1 + 48LL);
  if ( (_BYTE)a1 == 2 )
  {
    v4 = v2[4];
    v7 = v1 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *(_DWORD *)(v5 + 200);
            if ( (v10 & 0x100) != 0 )
            {
              v11 = InteractiveControlManager::Instance((__int64)a1);
              InteractiveControlManager::OnDeviceRemoval(
                v11,
                (struct RawInputManagerDeviceObject *)((v5 - 72) & -(__int64)(v5 != 0)));
            }
            else if ( (v10 & 0x200) != 0 )
            {
              InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)((v5 - 72) & -(__int64)(v5 != 0)));
            }
          }
        }
        else if ( (*(_DWORD *)(v5 + 200) & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)((v5 - 72) & -(__int64)(v5 != 0)));
        }
      }
      else if ( (*(_DWORD *)(v5 + 200) & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)((v5 - 72) & -(__int64)(v5 != 0)));
      }
    }
    else if ( v5 )
    {
      v12 = *(_DWORD *)(v5 + 200);
      if ( (v12 & 0x100) != 0 )
      {
        v13 = InteractiveControlManager::Instance((__int64)a1);
        InteractiveControlManager::OnDeviceAttach(v13, (struct RawInputManagerDeviceObject *)(v5 - 72));
      }
      else if ( (v12 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)(v5 - 72));
      }
    }
  }
  else if ( !(_BYTE)a1 && v1 == 4 )
  {
    v6 = *(void **)(v5 + 896);
    if ( v6 )
    {
      Win32FreePool(v6);
      *(_QWORD *)(v5 + 896) = 0LL;
      *(_WORD *)(v5 + 890) = 0;
    }
  }
  if ( v3 )
  {
    PostDeviceNotification(0LL, *(struct DEVICEINFO **)v2, v4);
    if ( (*(_DWORD *)(*(_QWORD *)v2 + 184LL) & 0x2000) != 0 && (unsigned __int64)(v3 - 1) <= 1 )
      ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  }
}
