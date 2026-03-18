/*
 * XREFs of EditionDevicePnpNotification @ 0x1C0102A40
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x1C0102FA4 (PostDeviceNotification.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021A82C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021A8E8 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021AA0C (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021AAA0 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024F594 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024F7BC (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(struct DEVICEINFO **a1)
{
  int v1; // eax
  __int64 v3; // rdi
  int v4; // ebp
  struct DEVICEINFO *v5; // rbx
  char v6; // cl
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  InteractiveControlManager *v12; // rax
  int v13; // eax
  InteractiveControlManager *v14; // rax

  v1 = *((_DWORD *)a1 + 5);
  v3 = 0LL;
  v4 = 0;
  if ( v1 == 2 )
  {
    v3 = 1LL;
  }
  else if ( *((_DWORD *)a1 + 5) == 3 )
  {
    v3 = 2LL;
  }
  v5 = *a1;
  v6 = *((_BYTE *)*a1 + 48);
  if ( v6 == 2 )
  {
    v4 = *((_DWORD *)a1 + 4);
    v8 = v1 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v11 = *((_DWORD *)v5 + 50);
            if ( (v11 & 0x100) != 0 )
            {
              v12 = InteractiveControlManager::Instance();
              InteractiveControlManager::OnDeviceRemoval(
                v12,
                (struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
            }
            else if ( (v11 & 0x200) != 0 )
            {
              InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
            }
          }
        }
        else if ( (*((_DWORD *)v5 + 50) & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
        }
      }
      else if ( (*((_DWORD *)v5 + 50) & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
      }
    }
    else if ( v5 )
    {
      v13 = *((_DWORD *)v5 + 50);
      if ( (v13 & 0x100) != 0 )
      {
        v14 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceAttach(v14, (struct DEVICEINFO *)((char *)v5 - 88));
      }
      else if ( (v13 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached((struct DEVICEINFO *)((char *)v5 - 88));
      }
    }
  }
  else if ( !v6 && v1 == 4 )
  {
    v7 = *((_QWORD *)v5 + 112);
    if ( v7 )
    {
      Win32FreePool(v7);
      *((_QWORD *)v5 + 112) = 0LL;
      *((_WORD *)v5 + 445) = 0;
    }
  }
  if ( v3 )
  {
    PostDeviceNotification(0LL, *a1, v4);
    if ( (*((_DWORD *)*a1 + 46) & 0x2000) != 0 && (unsigned __int64)(v3 - 1) <= 1 )
      ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  }
}
