void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rbp
  int v3; // ecx
  int v4; // esi
  LARGE_INTEGER v5; // rdx
  LARGE_INTEGER v6; // rdi
  LARGE_INTEGER v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  int refreshed; // eax
  union _LARGE_INTEGER v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_DWORD *)(v1 + 200);
  v12.QuadPart = 0LL;
  v4 = ~((1 << (v3 + 1)) - 1);
  v6 = KeQueryPerformanceCounter(&v12);
  v8 = *((_QWORD *)a1 + 250);
  if ( (v4 & *((_DWORD *)a1 + 443)) != 0 )
  {
    if ( v8 )
    {
      v9 = v6.QuadPart - v8;
      v10 = *((_QWORD *)a1 + 251);
      if ( v9 < v10 )
      {
        *((_QWORD *)a1 + 250) = 0LL;
        *((_QWORD *)a1 + 251) = v10 - v9;
      }
      else
      {
        VidSchiStopNodeYield((unsigned __int64)a1, v5.QuadPart, v7.QuadPart);
      }
    }
    if ( *((_BYTE *)a1 + 2024) )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pqxxxx_EtwWriteTransfer(
          *((_DWORD *)a1 + 443) & v4,
          v5.LowPart,
          v7.LowPart,
          *(_QWORD *)(v1 + 16),
          0,
          *((_WORD *)a1 + 2),
          *((_BYTE *)a1 + 1772) & v4,
          0,
          0);
    }
  }
  else if ( !v8 )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode((__int64)a1);
    VidSchiStartNodeYield((__int64)a1, v6.QuadPart, v12.QuadPart, refreshed);
  }
}
