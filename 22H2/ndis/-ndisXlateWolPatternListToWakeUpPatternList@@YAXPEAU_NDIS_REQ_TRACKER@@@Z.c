/*
 * XREFs of ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096D18
 * Callers:
 *     ?ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091EC0 (-ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1C00901F8 (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 */

void __fastcall ndisXlateWolPatternListToWakeUpPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r9d
  SIZE_T v4; // r10
  char *v5; // rbp
  char *v6; // r8
  __int64 v7; // rax
  int v8; // eax
  size_t v9; // rbx
  size_t v10; // r8
  char *PoolWithTag; // rax
  char *v12; // r15
  int v13; // r12d
  char *v14; // rsi
  struct _NDIS_PM_PACKET_PATTERN *PMPacketPattern; // rax
  struct _NDIS_PM_PACKET_PATTERN *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  LODWORD(Size) = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x73u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(char **)(v1 + 40);
  *(_DWORD *)(v1 + 52) = 0;
  v6 = v5;
  *(_DWORD *)(v1 + 56) = 0;
  while ( v6 )
  {
    if ( *((_DWORD *)v6 + 3) == 1 )
    {
      LODWORD(Size) = *((_DWORD *)v6 + 43) + *((_DWORD *)v6 + 41) + 24;
      v2 += Size;
    }
    v7 = *((unsigned int *)v6 + 38);
    if ( (_DWORD)v7 )
      v6 = &v5[v7];
    else
      v6 = 0LL;
  }
  *((_DWORD *)a1 + 10) = 0;
  v8 = 0;
  if ( *(_DWORD *)(v1 + 48) < v2 )
  {
    v8 = -1073676268;
    *(_DWORD *)(v1 + 56) = v2;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  v9 = v4;
  if ( v8 )
  {
    v10 = v4;
LABEL_16:
    memset(v5, 0, v10);
    return;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x7877444Eu);
  v12 = PoolWithTag;
  v10 = v9;
  if ( !PoolWithTag )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_16;
  }
  memmove(PoolWithTag, v5, v9);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v13 = 0;
  v14 = v12;
  while ( *((_DWORD *)v14 + 3) != 1 )
  {
LABEL_23:
    v18 = *((unsigned int *)v14 + 38);
    if ( (_DWORD)v18 )
      v14 = &v12[v18];
    else
      v14 = 0LL;
    if ( !v14 )
      goto LABEL_29;
  }
  PMPacketPattern = ndisCreatePMPacketPattern((struct _NDIS_PM_WOL_PATTERN *)v14, (unsigned int *)&Size);
  v16 = PMPacketPattern;
  if ( PMPacketPattern )
  {
    v17 = (unsigned int)Size;
    memmove(v5, PMPacketPattern, (unsigned int)Size);
    ExFreePoolWithTag(v16, 0);
    v13 += Size;
    v5 += v17;
    goto LABEL_23;
  }
  *((_DWORD *)a1 + 10) = -1073741670;
LABEL_29:
  *(_DWORD *)(v1 + 52) = v13;
  *(_DWORD *)(v1 + 56) = v13;
  ExFreePoolWithTag(v12, 0);
}
