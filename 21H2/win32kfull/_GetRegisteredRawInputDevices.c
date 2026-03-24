/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01D588C
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01FC050 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01D51E0 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 CurrentProcessWin32Process; // r13
  _QWORD *v9; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *v12; // rcx
  _QWORD *k; // rax
  unsigned int *v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 *v20; // rdx
  __int64 v21; // r8
  int v22; // ecx
  int v23; // eax
  __int16 v24; // r10
  __int16 v25; // r11
  __int64 *v26; // rax
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  int v34; // edx
  __int16 v35; // r11
  __int64 *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 *v39; // r8
  __int64 v40; // rax
  __int128 v42; // [rsp+28h] [rbp-B0h]
  __int16 v43; // [rsp+72h] [rbp-66h]

  v4 = 0;
  v5 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = *(_QWORD **)(CurrentProcessWin32Process + 832);
  if ( v9 )
  {
    for ( i = (_QWORD *)v9[2]; i != v9 + 2; i = (_QWORD *)*i )
      ++v5;
    v6 = (__int64)(v9 + 4);
    for ( j = (_QWORD *)v9[4]; j != (_QWORD *)v6; j = (_QWORD *)*j )
      ++v5;
    v12 = v9 + 6;
    for ( k = (_QWORD *)v9[6]; k != v12; k = (_QWORD *)*k )
      ++v5;
  }
  if ( a1 )
  {
    v14 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v15 = *v14;
    if ( (_DWORD)v15 )
    {
      ProbeForWrite(a1, 16 * v15, 4u);
      v18 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      if ( v18 )
      {
        if ( (unsigned int)v15 >= v5 )
        {
          v19 = 0;
          v20 = *(__int64 **)(v18 + 16);
          while ( 1 )
          {
            v21 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v20 == (__int64 *)(v21 + 16) || v19 >= (unsigned int)v15 )
              break;
            v22 = 0;
            DWORD1(v42) = 0;
            v23 = *((_DWORD *)v20 + 5);
            if ( (v23 & 1) != 0 )
            {
              v22 = (v23 & 2) != 0 ? 4096 : 256;
              DWORD1(v42) = v22;
            }
            v24 = *((_WORD *)v20 + 8);
            v25 = *((_WORD *)v20 + 9);
            v26 = (__int64 *)v20[4];
            if ( v26 )
              v27 = *v26;
            else
              v27 = 0LL;
            *((_QWORD *)&v42 + 1) = v27;
            if ( v24 != 1 || (v28 = 1, v25 != 6) )
              v28 = 0;
            if ( v28 && (*(_DWORD *)(v21 + 100) & 0x20) != 0 )
              goto LABEL_42;
            if ( v24 != 1 || (v29 = 1, v25 != 2) )
              v29 = 0;
            if ( v29 && (*(_DWORD *)(v21 + 100) & 2) != 0 )
            {
LABEL_42:
              v22 |= 0x30u;
              DWORD1(v42) = v22;
            }
            if ( v24 != 1 )
              goto LABEL_48;
            if ( v25 == 6 && (*(_DWORD *)(v21 + 100) & 0x200) != 0 )
            {
              v22 |= 0x200u;
              DWORD1(v42) = v22;
            }
            v30 = 1;
            if ( v25 != 6 )
LABEL_48:
              v30 = 0;
            if ( v30 && (*(_DWORD *)(v21 + 100) & 0x400) != 0 )
            {
              v22 |= 0x400u;
              DWORD1(v42) = v22;
            }
            if ( v24 == 1 && v25 == 2 && (*(_DWORD *)(v21 + 100) & 0x100) != 0 )
              DWORD1(v42) = v22 | 0x200;
            LODWORD(v42) = *((_DWORD *)v20 + 4);
            *((_OWORD *)a1 + v19) = v42;
            v20 = (__int64 *)*v20;
            ++v19;
          }
          v31 = *(__int64 **)(v21 + 32);
          while ( 1 )
          {
            v32 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v31 == (__int64 *)(v32 + 32) || v19 >= (unsigned int)v15 )
              break;
            v33 = *((_DWORD *)v31 + 5);
            if ( (v33 & 1) != 0 )
              v34 = (v33 & 2) != 0 ? 4128 : 288;
            else
              v34 = 32;
            v35 = *((_WORD *)v31 + 9);
            v36 = (__int64 *)v31[4];
            v37 = 0LL;
            if ( v36 )
              v37 = *v36;
            v38 = 2LL * v19;
            *((_WORD *)a1 + 4 * v38) = *((_WORD *)v31 + 8);
            *((_WORD *)a1 + 4 * v38 + 1) = v35;
            *((_DWORD *)a1 + 2 * v38 + 1) = v34;
            *((_QWORD *)a1 + v38 + 1) = v37;
            v31 = (__int64 *)*v31;
            ++v19;
          }
          v39 = *(__int64 **)(v32 + 48);
          while ( v39 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 832) + 48LL) && v19 < (unsigned int)v15 )
          {
            v43 = *((_WORD *)v39 + 9);
            v40 = 2LL * v19;
            *((_WORD *)a1 + 4 * v40) = *((_WORD *)v39 + 8);
            *((_WORD *)a1 + 4 * v40 + 1) = v43;
            *((_DWORD *)a1 + 2 * v40 + 1) = 16;
            *((_QWORD *)a1 + v40 + 1) = 0LL;
            v39 = (__int64 *)*v39;
            ++v19;
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
          UserSetLastError(122LL, v16, v17);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87LL, v6, v7);
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
