/*
 * XREFs of ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C024952C
 * Callers:
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0248E28 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 */

void __fastcall InteractiveControlDevice::SetMessagePromotionType(__int64 a1, int a2)
{
  int v4; // ebx
  int v5; // r8d
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 64) != a2 )
  {
    v4 = 0;
    if ( a2 && (unsigned int)(a2 - 1) <= 1 )
    {
      v5 = 0;
      v4 = 1;
    }
    else
    {
      v5 = *((_DWORD *)InteractiveControlManager::Instance(a1) + 27);
    }
    v6 = v4;
    *(_DWORD *)(a1 + 64) = a2;
    InteractiveControlDevice::SetComponentResolution(a1, 3, v5, &v6);
  }
}
