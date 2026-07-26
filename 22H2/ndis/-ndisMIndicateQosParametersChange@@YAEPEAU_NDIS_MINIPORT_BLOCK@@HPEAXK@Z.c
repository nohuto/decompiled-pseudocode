/*
 * XREFs of ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006FE24
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00170C0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     memcmp @ 0x1C0040730 (memcmp.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     WPP_RECORDER_SF_LLLLLLLL @ 0x1C0072E14 (WPP_RECORDER_SF_LLLLLLLL.c)
 *     WPP_RECORDER_SF_qDqL @ 0x1C0073448 (WPP_RECORDER_SF_qDqL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008C9A4 (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A186C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 */

unsigned __int8 __fastcall ndisMIndicateQosParametersChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        struct _NDIS_QOS_PARAMETERS *a3,
        unsigned int a4)
{
  unsigned int v4; // r14d
  int v6; // ebp
  _QWORD *v8; // rcx
  unsigned __int16 v9; // r9
  unsigned __int8 v10; // dl
  int Type; // edx
  unsigned int Size; // eax
  int v13; // eax
  _NDIS_OBJECT_HEADER v14; // esi
  __int64 v15; // r15
  __int64 v16; // r12
  PVOID PoolWithTag; // r13
  void *v18; // rcx
  USHORT v19; // r12
  int v20; // edx
  _WORD *v22; // rcx
  int v23; // [rsp+20h] [rbp-78h]
  char v24[8]; // [rsp+28h] [rbp-70h]
  char v25[8]; // [rsp+30h] [rbp-68h]
  char v26; // [rsp+30h] [rbp-68h]
  char v27[4]; // [rsp+40h] [rbp-58h]

  v4 = a4;
  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    v26 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      24,
      165,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      v26,
      (char)a3,
      a4);
  }
  if ( !a1->QosHwCapabilities )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      return 0;
    v9 = 166;
    v10 = 5;
    goto LABEL_45;
  }
  if ( v4 < 0x34 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      *(_DWORD *)v24 = v4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x18u,
        0xA7u,
        (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
        *(_QWORD *)v24);
    }
    goto LABEL_43;
  }
  Type = a3->Header.Type;
  if ( (_BYTE)Type != 0xB6
    || (Size = a3->Header.Size, (unsigned __int16)Size < 0x34u)
    || a3->Header.Revision != 1
    || (a4 = a3->Header.Size, v4 < Size) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_LLLLLLLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        Type,
        a3->Header.Size,
        a4,
        v23,
        Type,
        *(_DWORD *)v25,
        a3->Header.Size,
        *(_DWORD *)v27,
        a3->Header.Revision);
LABEL_43:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      v9 = 169;
      v10 = 2;
LABEL_45:
      WPP_RECORDER_SF_(v8[8], v10, 0x18u, v9, (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids);
    }
    return 0;
  }
  v13 = ndisValidateQosParameters(a1, v6 == 1073873056, a3, Size, 0LL);
  if ( v13 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v24 = v13;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x18u,
        0xAAu,
        (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
        *(_QWORD *)v24);
    }
    return 0;
  }
  v14 = (_NDIS_OBJECT_HEADER)a3->Header.Size;
  v15 = 4920LL;
  if ( v6 != 1073873056 )
    v15 = 4936LL;
  v16 = 4928LL;
  if ( v6 != 1073873056 )
    v16 = 4944LL;
  if ( *(unsigned int *)&v14 <= *(_DWORD *)((char *)&a1->Header + v16) )
  {
    v22 = *(_WORD **)(&a1->Header.Type + v15);
    v19 = a3->Header.Size;
    if ( v22[1] == *(_WORD *)&v14.Type && !memcmp(v22, a3, a3->Header.Size) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v24 = v6;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0xACu,
          (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
          *(_QWORD *)v24);
      }
      return 0;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3->Header.Size, 0x7371444Eu);
    if ( !PoolWithTag )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v25 = v6;
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0xABu,
          (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
          v14.Type,
          *(_QWORD *)v25);
      }
      return 0;
    }
    v18 = *(void **)(&a1->Header.Type + v15);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    *(_QWORD *)(&a1->Header.Type + v15) = PoolWithTag;
    *(_NDIS_OBJECT_HEADER *)((char *)&a1->Header + v16) = v14;
    v19 = a3->Header.Size;
  }
  memmove(*(void **)(&a1->Header.Type + v15), a3, v19);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      24,
      173,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      v6,
      (char)a3,
      v4);
  }
  return 1;
}
