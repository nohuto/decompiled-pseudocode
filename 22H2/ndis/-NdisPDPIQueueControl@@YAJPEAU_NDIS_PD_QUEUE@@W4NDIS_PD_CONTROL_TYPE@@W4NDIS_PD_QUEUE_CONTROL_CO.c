/*
 * XREFs of ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C011C680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BB18 (WPP_RECORDER_SF_qdL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLLd @ 0x1C007F0E8 (WPP_RECORDER_SF_qLLd.c)
 */

__int64 __fastcall NdisPDPIQueueControl(
        struct _NDIS_PD_QUEUE *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int *a8)
{
  _QWORD *v8; // rbp
  int v10; // esi
  int v11; // r15d
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v17; // eax
  unsigned __int16 v18; // r9
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+90h] [rbp+18h] BYREF

  v8 = a1->PDPlatformReserved[1];
  v10 = a3;
  v11 = a2;
  v13 = v8[4];
  v21 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Du,
      0x34u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      a2,
      a3);
  if ( v10 != 1 )
  {
    if ( v10 <= 1 )
      goto LABEL_36;
    if ( v10 <= 3 )
    {
      if ( *((_BYTE *)v8 + 60) )
        goto LABEL_8;
    }
    else
    {
      if ( v10 != 4 )
      {
        if ( v10 == 5 )
          goto LABEL_8;
LABEL_36:
        v15 = -1073741637;
        goto LABEL_12;
      }
      if ( *((_BYTE *)v8 + 60) )
      {
        if ( *((_BYTE *)v8 + 61) )
        {
          v15 = -1073741436;
          goto LABEL_12;
        }
        if ( v11 || !a4 || a5 < 4 )
          goto LABEL_11;
        a2 = *a4;
        v21 = a2;
        if ( (unsigned int)a2 > 0xFFFF )
        {
          v15 = -1073741585;
          goto LABEL_12;
        }
        if ( (_DWORD)a2 )
          v21 = a2 | (*(unsigned __int16 *)(*(_QWORD *)(v13 + 56) + 104LL) << 16);
        a4 = (unsigned int *)&v21;
        v14 = 4;
        goto LABEL_27;
      }
    }
    v15 = -1073741808;
    goto LABEL_12;
  }
LABEL_8:
  if ( v11 || !a4 || (v14 = a5, a5 < 4) )
  {
LABEL_11:
    v15 = -1073741811;
    goto LABEL_12;
  }
LABEL_27:
  v15 = (*(__int64 (__fastcall **)(struct _NDIS_PD_QUEUE *, _QWORD, _QWORD, unsigned int *, unsigned int, void *, unsigned int, unsigned int *))(*(_QWORD *)(v13 + 80) + 88LL))(
          a1,
          0LL,
          (unsigned int)v10,
          a4,
          v14,
          a6,
          a7,
          a8);
  if ( (v15 & 0x80000000) == 0 )
  {
    switch ( v10 )
    {
      case 1:
        v17 = *a4;
        *((_DWORD *)v8 + 48) = *a4;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 53;
        break;
      case 2:
        v17 = *a4;
        *((_DWORD *)v8 + 18) = *a4;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 55;
        break;
      case 3:
        v17 = *a4;
        *((_DWORD *)v8 + 19) = *a4;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 56;
        break;
      case 4:
        v17 = *a4;
        *((_DWORD *)v8 + 20) = *a4;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 54;
        break;
      default:
        v17 = *a4;
        *((_DWORD *)v8 + 49) = *a4;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 57;
        break;
    }
    LODWORD(v20) = v17;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      v18,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      v20);
  }
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x3Au, v19);
  return v15;
}
