__int64 __fastcall WheaAddHwErrorReportSectionDeviceDriver(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // r11d
  __int64 *ErrorSource; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rdx

  v4 = a2;
  if ( (unsigned __int8)WheapErrorHandleIsValid() )
  {
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(v6 + 12));
    if ( (unsigned __int8)WheapErrDescIsDeviceDriver((unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64)) )
    {
      if ( *(_DWORD *)(a1 + 4) >= v9[35]
        || (unsigned int)v4 > v9[34]
        || (unsigned int)(v4 + *(_DWORD *)(a1 + 8)) > v9[4] )
      {
        return (unsigned int)-1073741670;
      }
      else
      {
        **(_DWORD **)(a1 + 16) ^= ((unsigned __int16)**(_DWORD **)(a1 + 16) ^ (unsigned __int16)(**(_DWORD **)(a1 + 16)
                                                                                               + 16)) & 0x3FF0;
        v10 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v10 + 16) = *(_DWORD *)(a1 + 52);
        *(_DWORD *)(v10 + 24) = v4;
        *(_WORD *)(v10 + 20) = 768;
        *(_QWORD *)(a3 + 24) = v10 + 44;
        *(_QWORD *)(a3 + 16) = v10;
        *(_BYTE *)(v10 + 22) |= 2u;
        ++*(_DWORD *)(a1 + 4);
        *(_QWORD *)(a3 + 32) = v10 + 23;
        *(_QWORD *)(a3 + 4) = v10 + 72;
        *(_DWORD *)(a3 + 12) = v4;
        *(_QWORD *)(a1 + 24) = v10 + 72 + v4;
        *(_DWORD *)(a1 + 8) += v4 + 72;
        *(_DWORD *)a3 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741130;
    }
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return v7;
}
