/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01AB428
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01D4D90 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01AADC8 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r15
  _QWORD *v8; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *v11; // rcx
  _QWORD *k; // rax
  unsigned int *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 *v17; // r13
  __int64 v18; // r8
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // eax
  __int16 v22; // di
  __int16 v23; // r11
  __int64 *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  _DWORD *v27; // rdx
  int v28; // eax
  _DWORD *v29; // r10
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  int v37; // edx
  __int16 v38; // r11
  __int64 *v39; // r8
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 *v42; // r8
  __int64 v43; // rax
  __int128 v45; // [rsp+28h] [rbp-C0h]
  unsigned int v46; // [rsp+F0h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  v8 = *(_QWORD **)(v7 + 824);
  if ( v8 )
  {
    for ( i = (_QWORD *)v8[2]; i != v8 + 2; i = (_QWORD *)*i )
      ++v5;
    for ( j = (_QWORD *)v8[4]; j != v8 + 4; j = (_QWORD *)*j )
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
    v46 = v14;
    if ( (_DWORD)v14 )
    {
      ProbeForWrite(a1, 16 * v14, 4u);
      v15 = *(_QWORD *)(v7 + 824);
      if ( v15 )
      {
        if ( (unsigned int)v14 >= v5 )
        {
          v16 = 0;
          v17 = *(__int64 **)(v15 + 16);
          while ( 1 )
          {
            v18 = *(_QWORD *)(v7 + 824);
            v19 = v46;
            if ( v17 == (__int64 *)(v18 + 16) || v16 >= v46 )
              break;
            v20 = 0;
            DWORD1(v45) = 0;
            v21 = *((_DWORD *)v17 + 5);
            if ( (v21 & 1) != 0 )
            {
              v20 = (v21 & 2) != 0 ? 4096 : 256;
              DWORD1(v45) = v20;
            }
            v22 = *((_WORD *)v17 + 8);
            v23 = *((_WORD *)v17 + 9);
            v24 = (__int64 *)v17[4];
            if ( v24 )
              v25 = *v24;
            else
              v25 = 0LL;
            *((_QWORD *)&v45 + 1) = v25;
            if ( v22 != 1 || (v26 = 1, v23 != 6) )
              v26 = 0;
            v27 = (_DWORD *)(v18 + 100);
            if ( v26 && (*v27 & 0x20) != 0 )
              goto LABEL_44;
            if ( v22 != 1 || (v28 = 1, v23 != 2) )
              v28 = 0;
            v29 = (_DWORD *)(v18 + 100);
            if ( v28 )
            {
              if ( (*v27 & 2) != 0 )
              {
LABEL_44:
                v20 |= 0x30u;
                DWORD1(v45) = v20;
                v29 = (_DWORD *)(v18 + 100);
              }
            }
            if ( v22 != 1 || (v30 = 1, v23 != 6) )
              v30 = 0;
            if ( v30 && (*v29 & 0x200) != 0 )
            {
              v20 |= 0x200u;
              DWORD1(v45) = v20;
            }
            if ( v22 != 1 || (v31 = 1, v23 != 6) )
              v31 = 0;
            if ( v31 && (*v29 & 0x400) != 0 )
            {
              v20 |= 0x400u;
              DWORD1(v45) = v20;
            }
            if ( v22 != 1 || (v32 = 1, v23 != 2) )
              v32 = 0;
            if ( v32 && (*v29 & 0x100) != 0 )
            {
              v20 |= 0x200u;
              DWORD1(v45) = v20;
            }
            if ( v22 != 1 || (v33 = 1, v23 != 2) )
              v33 = 0;
            if ( v33 && (*v29 & 0x800) != 0 )
              DWORD1(v45) = v20 | 0x8000;
            LODWORD(v45) = *((_DWORD *)v17 + 4);
            *((_OWORD *)a1 + v16) = v45;
            v17 = (__int64 *)*v17;
            ++v16;
          }
          v34 = *(__int64 **)(v18 + 32);
          while ( 1 )
          {
            v35 = *(_QWORD *)(v7 + 824);
            if ( v34 == (__int64 *)(v35 + 32) || v16 >= v19 )
              break;
            v36 = *((_DWORD *)v34 + 5);
            v37 = 32;
            if ( (v36 & 1) != 0 )
              v37 = (v36 & 2) != 0 ? 4128 : 288;
            v38 = *((_WORD *)v34 + 9);
            v39 = (__int64 *)v34[4];
            if ( v39 )
              v40 = *v39;
            else
              v40 = 0LL;
            v41 = 2LL * v16;
            *((_WORD *)a1 + 4 * v41) = *((_WORD *)v34 + 8);
            *((_WORD *)a1 + 4 * v41 + 1) = v38;
            *((_DWORD *)a1 + 2 * v41 + 1) = v37;
            *((_QWORD *)a1 + v41 + 1) = v40;
            v34 = (__int64 *)*v34;
            ++v16;
            v19 = v46;
          }
          v42 = *(__int64 **)(v35 + 48);
          while ( v42 != (__int64 *)(*(_QWORD *)(v7 + 824) + 48LL) && v16 < v19 )
          {
            v43 = 2LL * v16;
            *((_DWORD *)a1 + 2 * v43) = *((_DWORD *)v42 + 4);
            *((_DWORD *)a1 + 2 * v43 + 1) = 16;
            *((_QWORD *)a1 + v43 + 1) = 0LL;
            v42 = (__int64 *)*v42;
            ++v16;
            v19 = v46;
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
          UserSetLastError(122);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87);
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
