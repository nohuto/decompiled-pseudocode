/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01D134C
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01F6840 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01D0D04 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 CurrentProcessWin32Process; // r13
  _QWORD *v8; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *v11; // rcx
  _QWORD *k; // rax
  unsigned int *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 *v18; // rdx
  __int64 v19; // r9
  int v20; // ecx
  int v21; // eax
  __int16 v22; // r11
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // r9
  int v27; // eax
  int v28; // edx
  __int16 v29; // r11
  __int64 *v30; // r9
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 *v33; // r9
  __int64 v34; // rax
  __int128 v36; // [rsp+28h] [rbp-B0h]
  __int16 v37; // [rsp+72h] [rbp-66h]

  v4 = 0;
  v5 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v8 = *(_QWORD **)(CurrentProcessWin32Process + 832);
  if ( v8 )
  {
    for ( i = (_QWORD *)v8[2]; i != v8 + 2; i = (_QWORD *)*i )
      ++v5;
    v6 = (__int64)(v8 + 4);
    for ( j = (_QWORD *)v8[4]; j != (_QWORD *)v6; j = (_QWORD *)*j )
      ++v5;
    v11 = v8 + 6;
    for ( k = (_QWORD *)v8[6]; k != v11; k = (_QWORD *)*k )
      ++v5;
  }
  if ( a1 )
  {
    v13 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v13 = (unsigned int *)MmUserProbeAddress;
    v14 = *v13;
    if ( (_DWORD)v14 )
    {
      ProbeForWrite(a1, 16 * v14, 4u);
      v16 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      if ( v16 )
      {
        if ( (unsigned int)v14 >= v5 )
        {
          v17 = 0;
          v18 = *(__int64 **)(v16 + 16);
          while ( 1 )
          {
            v19 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v18 == (__int64 *)(v19 + 16) || v17 >= (unsigned int)v14 )
              break;
            v20 = 0;
            DWORD1(v36) = 0;
            v21 = *((_DWORD *)v18 + 5);
            if ( (v21 & 1) != 0 )
            {
              v20 = (v21 & 2) != 0 ? 4096 : 256;
              DWORD1(v36) = v20;
            }
            v22 = *((_WORD *)v18 + 9);
            v23 = (__int64 *)v18[4];
            if ( v23 )
              v24 = *v23;
            else
              v24 = 0LL;
            *((_QWORD *)&v36 + 1) = v24;
            if ( *((_WORD *)v18 + 8) == 1 )
            {
              if ( v22 == 6 && (*(_DWORD *)(v19 + 100) & 0x20) != 0 || v22 == 2 && (*(_DWORD *)(v19 + 100) & 2) != 0 )
              {
                v20 |= 0x30u;
                DWORD1(v36) = v20;
              }
              if ( v22 == 6 && (*(_DWORD *)(v19 + 100) & 0x200) != 0 )
              {
                v20 |= 0x200u;
                DWORD1(v36) = v20;
              }
              if ( v22 == 6 && (*(_DWORD *)(v19 + 100) & 0x400) != 0 )
              {
                v20 |= 0x400u;
                DWORD1(v36) = v20;
              }
              if ( v22 == 2 && (*(_DWORD *)(v19 + 100) & 0x100) != 0 )
                DWORD1(v36) = v20 | 0x200;
            }
            LODWORD(v36) = *((_DWORD *)v18 + 4);
            *((_OWORD *)a1 + v17) = v36;
            v18 = (__int64 *)*v18;
            ++v17;
          }
          v25 = *(__int64 **)(v19 + 32);
          while ( 1 )
          {
            v26 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v25 == (__int64 *)(v26 + 32) || v17 >= (unsigned int)v14 )
              break;
            v27 = *((_DWORD *)v25 + 5);
            if ( (v27 & 1) != 0 )
              v28 = (v27 & 2) != 0 ? 4128 : 288;
            else
              v28 = 32;
            v29 = *((_WORD *)v25 + 9);
            v30 = (__int64 *)v25[4];
            if ( v30 )
              v31 = *v30;
            else
              v31 = 0LL;
            v32 = 2LL * v17;
            *((_WORD *)a1 + 4 * v32) = *((_WORD *)v25 + 8);
            *((_WORD *)a1 + 4 * v32 + 1) = v29;
            *((_DWORD *)a1 + 2 * v32 + 1) = v28;
            *((_QWORD *)a1 + v32 + 1) = v31;
            v25 = (__int64 *)*v25;
            ++v17;
          }
          v33 = *(__int64 **)(v26 + 48);
          while ( v33 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 832) + 48LL) && v17 < (unsigned int)v14 )
          {
            v37 = *((_WORD *)v33 + 9);
            v34 = 2LL * v17;
            *((_WORD *)a1 + 4 * v34) = *((_WORD *)v33 + 8);
            *((_WORD *)a1 + 4 * v34 + 1) = v37;
            *((_DWORD *)a1 + 2 * v34 + 1) = 16;
            *((_QWORD *)a1 + v34 + 1) = 0LL;
            v33 = (__int64 *)*v33;
            ++v17;
          }
          SortRegisteredDevices(a1, v5);
          return v5;
        }
        else
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (unsigned int *)MmUserProbeAddress;
          *a2 = v5;
          v4 = -1;
          UserSetLastError(122LL, v15);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87LL, v6);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v5;
  }
  return v4;
}
