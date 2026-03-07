__int64 __fastcall Control_Transfer_ValidateBuffer(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // edx
  int v4; // ecx
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  int v8; // edx
  int v9; // edx

  v1 = *(_QWORD *)(a1 + 344);
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 64);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v1 + 104);
    if ( v5 > 0x10000 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v1,
          29,
          (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24),
          v5,
          0);
      return (unsigned int)-1073741637;
    }
    v6 = *(_DWORD *)(a1 + 4);
    if ( v5 > v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v1,
          30,
          (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24),
          v5,
          v6);
      return (unsigned int)-1073741670;
    }
    if ( v5 == v6 && (*(_DWORD *)(v1 + 80) & 0xFFFLL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_DDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v8,
          v1,
          31,
          (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24),
          *(_DWORD *)(v1 + 104));
      }
      return (unsigned int)-1073741670;
    }
    if ( v4 == 3 && **(_QWORD **)(v1 + 72) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v9,
          v1,
          32,
          (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24));
      }
      return (unsigned int)-1073741637;
    }
  }
  return v3;
}
