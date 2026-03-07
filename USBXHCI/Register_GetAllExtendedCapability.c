void __fastcall Register_GetAllExtendedCapability(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  int Ulong; // eax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // edx

  v2 = *(unsigned int **)(a1 + 56);
  if ( v2 )
  {
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v2);
      *(_DWORD *)a2 = Ulong;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = *(unsigned __int8 *)(a2 + 1);
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v9,
          6,
          71,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          Ulong,
          *(_BYTE *)(a2 + 1));
      }
      if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
        break;
      if ( (unsigned __int8)*(_DWORD *)a2 == 2 )
      {
        XilRegister_ReadBufferUlong(a1, v2, a2, 4LL);
        v7 = *(_DWORD *)(a2 + 8) >> 28;
        if ( (_DWORD)v7 )
        {
          v8 = a2 + 16;
LABEL_13:
          XilRegister_ReadBufferUlong(a1, v2, v8, v7);
        }
      }
      if ( *(_DWORD *)a2 == -1 )
        return;
      if ( !*(_BYTE *)(a2 + 1) )
        return;
      v6 = 4LL * *(unsigned __int8 *)(a2 + 1);
      v2 = (unsigned int *)((char *)v2 + v6);
      if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        return;
      a2 += v6;
    }
    v7 = 2LL;
    v8 = a2;
    goto LABEL_13;
  }
}
