/*
 * XREFs of ?GetGroupFromGroupId@CActivationObjectManager@@AEBAPEAVCActivationGroup@@AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C009858C
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C00982F8 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 *     ?GetForegroundWindowForGroup@CActivationObjectManager@@QEAAPEAUHWND__@@AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0127F50 (-GetForegroundWindowForGroup@CActivationObjectManager@@QEAAPEAUHWND__@@AEBUACTIVATION_GROUP_ID@@.c)
 * Callees:
 *     <none>
 */

struct CActivationGroup *__fastcall CActivationObjectManager::GetGroupFromGroupId(
        CActivationObjectManager *this,
        const struct ACTIVATION_GROUP_ID *a2)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v8; // [rsp+10h] [rbp+10h]

  v2 = *((_DWORD *)this + 1);
  v3 = 0LL;
  v4 = -1LL << (v2 & 0x1F);
  v5 = 0LL;
  v6 = v4 & 0x89164BF51CLL;
  while ( 1 )
  {
    if ( v5 )
      goto LABEL_5;
    if ( !(v2 >> 5) )
      return (struct CActivationGroup *)v3;
    v8 = v4 & 0x89164BF51CLL;
    v5 = *((_QWORD *)this + 1)
       + 8LL
       * ((37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v8)) & ((v2 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v6 == (v4 & *(_QWORD *)(v5 + 8)) )
        goto LABEL_7;
    }
    v5 = 0LL;
LABEL_7:
    if ( !v5 )
      return (struct CActivationGroup *)v3;
    if ( *(_DWORD *)(v5 + 16) == 1 )
      return (struct CActivationGroup *)v5;
  }
}
