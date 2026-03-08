/*
 * XREFs of ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C00A29A8
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C00A28A0 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C00A2AAC (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C00A2D30 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll(_DWORD *a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  int v8; // edx
  int v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+24h] [rbp-Ch]
  int v11; // [rsp+28h] [rbp-8h]

  v3 = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v6 )
      {
        v8 = v6 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            a1[22] = 1;
            a1[23] = -1;
            a1[24] = -805306369;
            a1[3] |= 0x10u;
          }
          else
          {
            return (unsigned int)-1073741811;
          }
        }
        else
        {
          a1[3] |= 1u;
          a1[21] = -805306369;
        }
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
          a1 + 16,
          v6);
        v10 = -1;
        v9 = 1;
        v11 = -805306369;
        v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a1 + 16,
               &v9,
               0LL);
        if ( v3 >= 0 )
        {
          a1[20] = 0;
          a1[3] |= 2u;
        }
      }
    }
    else
    {
      CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
        a1 + 10,
        0LL);
      v10 = -1;
      v9 = 1;
      v11 = -805306369;
      v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
             a1 + 10,
             &v9,
             0LL);
      if ( v3 >= 0 )
      {
        a1[14] = 0;
        a1[3] |= 8u;
      }
    }
  }
  else
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
      a1 + 4,
      0LL);
    v10 = -1;
    v9 = 1;
    v11 = -805306369;
    v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           a1 + 4,
           &v9,
           0LL);
    if ( v3 >= 0 )
    {
      a1[8] = 0;
      a1[3] |= 4u;
    }
  }
  return (unsigned int)v3;
}
