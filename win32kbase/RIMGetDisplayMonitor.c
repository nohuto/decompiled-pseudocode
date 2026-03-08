/*
 * XREFs of RIMGetDisplayMonitor @ 0x1C01BD4AC
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01BE49C (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C001F730 (DrvGetWDDMAdapterInfo.c)
 */

__int64 __fastcall RIMGetDisplayMonitor(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned int v5; // r11d
  int v7; // r14d
  unsigned int v9; // r9d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v18; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *a2;
  v7 = *(_DWORD *)(a1 + 24);
  v17 = v3;
  v9 = 0;
  if ( v5 )
  {
    v10 = *((_QWORD *)a2 + 1);
    v11 = *(_DWORD *)(a1 + 116);
    while ( 1 )
    {
      v12 = 216LL * v9;
      if ( *(_DWORD *)(v12 + v10 + 116) == v11 && *(_DWORD *)(v12 + v10 + 120) == *(_DWORD *)(a1 + 120) )
        break;
      if ( ++v9 >= v5 )
        goto LABEL_8;
    }
    v3 = *(_QWORD *)(v12 + v10 + 16);
    v7 = *(_DWORD *)(v12 + v10 + 24);
    v17 = v3;
  }
LABEL_8:
  v13 = *((_QWORD *)gpDispInfo + 13);
  if ( v13 )
  {
    v14 = HIDWORD(v17);
    while ( 1 )
    {
      v15 = *(_QWORD *)(v13 + 88);
      v18 = 0LL;
      LODWORD(v17) = 0;
      if ( (unsigned int)DrvGetWDDMAdapterInfo(v15, 1, &v18, &v17) )
      {
        if ( (_DWORD)v17 == v7 && v18 == __PAIR64__(v14, v3) )
          break;
      }
      v13 = *(_QWORD *)(v13 + 56);
      if ( !v13 )
        return v4;
    }
    *a3 = v13;
    return 1;
  }
  return v4;
}
