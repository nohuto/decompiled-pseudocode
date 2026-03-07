__int64 __fastcall HUBUCX_CreateDeviceInUCX(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r8
  int v5; // edi
  __int64 result; // rax

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 364);
  v4 = a1[1];
  *((_DWORD *)a1 + 42) = 24;
  if ( (v3 & 0x800) != 0 )
  {
    *((_DWORD *)a1 + 43) = 3;
    *((_DWORD *)a1 + 40) = 512;
    goto LABEL_9;
  }
  if ( (v3 & 0x100) != 0 )
  {
    *((_DWORD *)a1 + 43) = 2;
  }
  else
  {
    if ( (v3 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 43) = 0;
      *((_DWORD *)a1 + 40) = 8;
      goto LABEL_9;
    }
    *((_DWORD *)a1 + 43) = 1;
  }
  *((_DWORD *)a1 + 40) = 64;
LABEL_9:
  *((_DWORD *)a1 + 44) = *(unsigned __int16 *)(v4 + 200);
  a1[23] = (__int64)a1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *))(v2 + 400))(*(_QWORD *)(v2 + 248), a1 + 21, a1 + 3);
  if ( v5 >= 0 )
  {
    a1[192] = a1[3];
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x25u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        v5);
    *((_DWORD *)a1 + 391) = -1073737728;
    *((_DWORD *)a1 + 390) = -1073741670;
  }
  result = 4065LL;
  if ( v5 >= 0 )
    return 4077LL;
  return result;
}
