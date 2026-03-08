/*
 * XREFs of ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C00C2770
 * Callers:
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C000C19C (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00C2680 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C0156004 (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C0156108 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C01562F8 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     <none>
 */

struct CActivationObject *__fastcall CActivationObjectManager::GetActivationObjectFromLuid(
        CActivationObjectManager *this,
        const struct _LUID *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdi

  v2 = *((_DWORD *)this + 1);
  v3 = 0LL;
  v4 = 0LL;
  v5 = -1LL << (*((_BYTE *)this + 4) & 0x1F);
  v6 = v5 & (HIBYTE(a2->HighPart)
           + 37
           * (BYTE2(a2->HighPart)
            + 37
            * (BYTE1(a2->HighPart)
             + 37
             * (LOBYTE(a2->HighPart)
              + 37
              * (HIBYTE(a2->LowPart)
               + 37 * (BYTE2(a2->LowPart) + 37 * (BYTE1(a2->LowPart) + 37 * (LOBYTE(a2->LowPart) + 11623883LL))))))));
LABEL_2:
  if ( v4 )
    goto LABEL_5;
  if ( v2 >> 5 )
  {
    v4 = *((_QWORD *)this + 1)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & ((v2 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v4 + 8)) )
      {
        if ( !v4 )
          return (struct CActivationObject *)v3;
        if ( a2->LowPart == *(_DWORD *)(v4 + 32) && a2->HighPart == *(_DWORD *)(v4 + 36) )
          return (struct CActivationObject *)(v4 - 8);
        goto LABEL_2;
      }
    }
  }
  return (struct CActivationObject *)v3;
}
