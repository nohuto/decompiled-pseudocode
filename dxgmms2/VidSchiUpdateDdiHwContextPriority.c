__int64 __fastcall VidSchiUpdateDdiHwContextPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // r9
  INT v12; // eax
  _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES v14; // [rsp+30h] [rbp-30h] BYREF

  *(_QWORD *)&v14.priorityBand = 0LL;
  *(&v14.inProcessPriority + 1) = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v9 = *(_BYTE *)(a1 + 88) == 0;
  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(v4 + 32);
  if ( !v9 )
  {
    v7 = gulPublicPriorityToSchedulingPriority[*(unsigned int *)(a1 + 84)];
    if ( v7 > 0x10 )
    {
      v8 = 3LL;
      v14.realtimeBandPriorityLevel = *(_DWORD *)(a1 + 84);
      goto LABEL_15;
    }
    if ( v7 == 16 )
      goto LABEL_5;
    v8 = 0LL;
    v9 = v7 == 0;
    goto LABEL_7;
  }
  v10 = *(_DWORD *)(v5 + 24);
  if ( v10 )
  {
    if ( v10 != 5 )
    {
      if ( (*(_DWORD *)(a1 + 76) & 1) == 0 )
      {
        v8 = 0LL;
        v9 = *(_DWORD *)(a1 + 68) == -7;
LABEL_7:
        LOBYTE(v8) = !v9;
        goto LABEL_15;
      }
LABEL_5:
      v8 = 2LL;
      goto LABEL_15;
    }
    if ( *(_BYTE *)(v5 + 2632) )
      goto LABEL_5;
    v8 = 3LL;
    v14.realtimeBandPriorityLevel = *(_DWORD *)(a1 + 68);
  }
  else
  {
    v8 = 0LL;
  }
LABEL_15:
  v14.priorityBand = v8;
  if ( bTracingEnabled )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( !v11 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
      v11 = a1;
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v8, &ChangeHwContextPriority, a3, v11, *(_DWORD *)(a1 + 84), v8);
  }
  v12 = *(_DWORD *)(a1 + 72);
  v14.gracePeriodLowerPriority = 0LL;
  v14.inProcessPriority = v12;
  v14.hContext = *(HANDLE *)(a1 + 48);
  v14.quantum = 20000LL;
  v14.gracePeriodSamePriority = 10000LL;
  return ADAPTER_RENDER::DdiSetContextSchedulingProperties(
           *(ADAPTER_RENDER **)(*(_QWORD *)(v6 + 16) + 2928LL),
           (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v14);
}
