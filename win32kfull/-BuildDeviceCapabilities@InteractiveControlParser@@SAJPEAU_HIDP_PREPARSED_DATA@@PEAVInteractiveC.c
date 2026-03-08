/*
 * XREFs of ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C024D274
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0248474 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1C024CE48 (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteracti.c)
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C024D1EC (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInter.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024D8C8 (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceCapabilities(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct InteractiveControlDevice *a2)
{
  char *v2; // rdi
  struct _HIDP_LINK_COLLECTION_NODE *v5; // rsi
  int Caps; // ebx
  struct _HIDP_LINK_COLLECTION_NODE *v7; // rax
  __int64 v8; // rdx
  ULONG LinkCollectionNodesLength; // [rsp+48h] [rbp+10h] BYREF

  v2 = (char *)a2 + 72;
  v5 = 0LL;
  LinkCollectionNodesLength = 0;
  memset_0((char *)a2 + 72, 0, 0xB8uLL);
  Caps = HidP_GetCaps(PreparsedData, (PHIDP_CAPS)(v2 + 4));
  if ( Caps < 0 )
    goto LABEL_14;
  Caps = HidP_GetLinkCollectionNodes(0LL, &LinkCollectionNodesLength, PreparsedData);
  if ( Caps != -1072627705 )
    goto LABEL_13;
  if ( LinkCollectionNodesLength > 1 )
  {
    v7 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPoolZInit(24LL * LinkCollectionNodesLength, 1819440195LL);
    v5 = v7;
    if ( !v7 )
    {
      Caps = -1073741670;
      goto LABEL_14;
    }
    Caps = HidP_GetLinkCollectionNodes(v7, &LinkCollectionNodesLength, PreparsedData);
    if ( Caps == 1114112 )
    {
      Caps = InteractiveControlParser::BuildComponentInformation(PreparsedData, v8, a2);
      if ( Caps >= 0 )
      {
        Caps = InteractiveControlParser::BuildDeviceAttributes((struct _INTERACTIVECTRL_CAPABILITIES *)v2, a2);
        if ( Caps >= 0 )
        {
          *(_DWORD *)v2 = *((_DWORD *)v2 + 20) && *((_DWORD *)v2 + 22);
          goto LABEL_16;
        }
      }
      goto LABEL_14;
    }
LABEL_13:
    if ( Caps >= 0 )
      goto LABEL_15;
  }
LABEL_14:
  InteractiveControlParser::FreeDeviceCapabilities((struct _INTERACTIVECTRL_CAPABILITIES *)v2);
LABEL_15:
  if ( v5 )
LABEL_16:
    Win32FreePool(v5);
  return (unsigned int)Caps;
}
