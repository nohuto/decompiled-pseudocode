/*
 * XREFs of ndisNsiGetInterfaceRosEnumObject @ 0x1C00F9A30
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00099E0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C870 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F830 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00098F0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F140 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosEnumObject(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // r13
  char v5; // bl
  char *v6; // r12
  unsigned int v7; // ebp
  int v8; // esi
  char v9; // r15
  int v10; // edi
  int v11; // r14d
  const void *p_InterfaceGuid; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  struct _NDIS_MINIPORT_BLOCK *v16; // rax
  struct _NDIS_MINIPORT_BLOCK *v17; // rdx
  signed __int32 InterlockedFlags; // eax
  signed __int32 v19; // ett
  struct _NDIS_IF_BLOCK *v21; // [rsp+88h] [rbp+10h]

  v3 = 0;
  v4 = a3;
  v5 = (char)a1;
  if ( !a2 )
    a2 = a1;
  v21 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)a1,
      a3);
    a2 = v21;
  }
  v6 = *(char **)(v4 + 40);
  v7 = *(_DWORD *)(v4 + 52);
  v8 = *(_DWORD *)(v4 + 48);
  if ( v6 )
  {
    v9 = 0;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        if ( v9 )
        {
LABEL_27:
          v4 = a3;
          v5 = (char)a1;
          v3 = 0;
          break;
        }
        if ( v7 > 0x214 )
        {
          switch ( v7 )
          {
            case 0x218u:
              v10 = 16;
              p_InterfaceGuid = &a1->InterfaceGuid;
              v11 = 552;
              break;
            case 0x228u:
              v10 = 1;
              p_InterfaceGuid = &a1->ifConnectorPresent;
              v11 = 556;
              break;
            case 0x22Cu:
              v10 = 4;
              p_InterfaceGuid = &a1->ifFlags;
              v11 = 560;
              break;
            case 0x230u:
              p_InterfaceGuid = &a2->MediaType;
              v10 = 4;
              v16 = ndisIfReferenceMiniport(a1, 0x18u);
              v17 = v16;
              if ( v16 )
              {
                _m_prefetchw(&v16->InterlockedFlags);
                InterlockedFlags = v16->InterlockedFlags;
                do
                {
                  v19 = InterlockedFlags;
                  InterlockedFlags = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v17->InterlockedFlags,
                                       InterlockedFlags,
                                       InterlockedFlags);
                }
                while ( v19 != InterlockedFlags );
                if ( (InterlockedFlags & 0x100) != 0 )
                  p_InterfaceGuid = &a1->MediaType;
                ndisIfDereferenceMiniport(a1, v17, 0x18u);
              }
              v11 = 564;
              break;
            case 0x234u:
              v10 = 4;
              p_InterfaceGuid = &a2->PhysicalMediumType;
              v11 = 568;
              v9 = 1;
              break;
            default:
              goto LABEL_48;
          }
        }
        else if ( v7 == 532 )
        {
          v10 = 4;
          p_InterfaceGuid = &a2->ConnectionType;
          v11 = 536;
        }
        else if ( v7 )
        {
          switch ( v7 )
          {
            case 4u:
              v10 = 516;
              p_InterfaceGuid = &a1->ifDescr;
              v11 = 520;
              break;
            case 0x208u:
              v10 = 2;
              p_InterfaceGuid = &a1->ifType;
              v11 = 524;
              break;
            case 0x20Cu:
              v10 = 4;
              v11 = 528;
              p_InterfaceGuid = &a2->AccessType;
              break;
            case 0x210u:
              v10 = 4;
              p_InterfaceGuid = &a1->DirectionType;
              v11 = 532;
              break;
            default:
              goto LABEL_48;
          }
        }
        else
        {
          v10 = 4;
          p_InterfaceGuid = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v11 = 4;
        }
        if ( v8 < v10 || !p_InterfaceGuid )
        {
LABEL_48:
          v9 = 1;
          goto LABEL_26;
        }
        memmove(v6, p_InterfaceGuid, (unsigned int)v10);
        v13 = v11 - v7;
        v7 = v11;
        v6 += v13;
        v8 -= v13;
LABEL_26:
        a2 = v21;
        if ( v8 <= 0 )
          goto LABEL_27;
      }
    }
    v14 = v7 - *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v4 + 48) = v14;
    if ( !v14 )
      v3 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      v5,
      v4,
      v3);
  return v3;
}
