/*
 * XREFs of ndisQueryCustomGuids @ 0x1C0030BE8
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C0030688 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisQueryCustomGuids(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        _QWORD *a3,
        _WORD *a4)
{
  _QWORD *v5; // r15
  int SetMiniport; // eax
  unsigned __int64 MethodId_low; // r14
  int v10; // ebx
  unsigned __int64 v12; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rbp
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  int *v19; // r15
  __int64 v20; // r12
  int v21; // ecx
  void *v22; // r14
  PVOID DataBlockObject; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  DataBlockObject = 0LL;
  v5 = a3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0xDu,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  *v5 = 0LL;
  *a4 = 0;
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqWmi;
  *(_QWORD *)&a2->Header.Type = 15466902LL;
  a2->DATA.QUERY_INFORMATION.Oid = 65815;
  a2->PortNumber = 0;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a2, 0, 0LL, 0LL);
  MethodId_low = LOWORD(a2->DATA.METHOD_INFORMATION.MethodId);
  if ( ((SetMiniport + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    if ( (_WORD)MethodId_low )
    {
      v12 = MethodId_low / 0x1C;
      if ( LOWORD(a2->DATA.METHOD_INFORMATION.MethodId) / 0x1Cu )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(a2->DATA.METHOD_INFORMATION.MethodId), 0x3177444Eu);
        v14 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0xFu,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a1);
          v10 = -1073741670;
          goto LABEL_7;
        }
        a2->DATA.QUERY_INFORMATION.InformationBuffer = PoolWithTag;
        a2->DATA.QUERY_INFORMATION.InformationBufferLength = MethodId_low;
        v10 = ndisQuerySetMiniportEx(a1, 0LL, a2, 0, 0LL, 0LL);
        if ( v10 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0x10u,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a1);
        }
        else
        {
          if ( (a1->Flags & 0x20000) != 0 && (_WORD)v12 )
          {
            v15 = v14 + 6;
            v16 = (unsigned __int16)v12;
            do
            {
              *v15 |= 0x10000000u;
              v15 += 7;
              --v16;
            }
            while ( v16 );
          }
          if ( !(_WORD)v12 )
            goto LABEL_27;
          if ( a1->MajorNdisVersion >= 6u )
          {
            v17 = v14 + 6;
            v18 = (unsigned __int16)v12;
            do
            {
              *v17 |= 0x8000000u;
              v17 += 7;
              --v18;
            }
            while ( v18 );
            goto LABEL_27;
          }
          v19 = v14 + 6;
          v20 = (unsigned __int16)v12;
          do
          {
            v21 = *v19;
            if ( (*(_BYTE *)v19 & 0x60) == 0x60 )
            {
              v22 = &AllUsersReadWriteSecurityDescriptor;
            }
            else if ( (v21 & 0x20) != 0 )
            {
              v22 = &AllUsersReadSecurityDescriptor;
            }
            else
            {
              v22 = &AllUsersWriteSecurityDescriptor;
              if ( (v21 & 0x40) == 0 )
                v22 = &AdminsSecurityDescriptor;
            }
            *v19 = v21 | 0x8000000;
            v10 = IoWMIOpenBlock((LPCGUID)(v19 - 6), 0x40000u, &DataBlockObject);
            if ( v10 >= 0 )
            {
              v10 = ObSetSecurityObjectByPointer(DataBlockObject, 7LL, v22);
              ObfDereferenceObject(DataBlockObject);
            }
            v19 += 7;
            --v20;
          }
          while ( v20 );
          v5 = v24;
        }
        if ( v10 )
        {
          ExFreePoolWithTag(v14, 0);
          goto LABEL_7;
        }
LABEL_27:
        *v5 = v14;
        *a4 = v12;
        goto LABEL_7;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0xEu,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  v10 = -1073741637;
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x11u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      v10);
  return (unsigned int)v10;
}
