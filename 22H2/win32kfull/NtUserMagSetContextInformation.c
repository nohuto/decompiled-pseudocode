/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C01D6DF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     MagSetLensContextInformation @ 0x1C01A3870 (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  char *v9; // r14
  char *v10; // rsi
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdi
  ULONG v17; // eax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  char *v21; // rax
  __int64 j; // rcx
  ULONG64 v23; // rdx
  unsigned int v24; // r15d
  unsigned __int64 v25; // rax
  char *v26; // rax
  __int64 i; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // [rsp+50h] [rbp-1E8h]
  char *v30; // [rsp+58h] [rbp-1E0h]
  char *v31; // [rsp+60h] [rbp-1D8h]
  __int64 v32; // [rsp+B0h] [rbp-188h]
  __int128 v33; // [rsp+F0h] [rbp-148h]
  __int128 v34; // [rsp+100h] [rbp-138h]
  __int128 v35; // [rsp+110h] [rbp-128h]
  __int128 v36; // [rsp+120h] [rbp-118h]
  __int128 v37; // [rsp+130h] [rbp-108h]
  int v38; // [rsp+140h] [rbp-F8h]
  __int128 v39; // [rsp+180h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+190h] [rbp-A8h]
  __int128 v41; // [rsp+1A0h] [rbp-98h]
  __int128 v42; // [rsp+1B0h] [rbp-88h]
  __int128 v43; // [rsp+1C0h] [rbp-78h]
  __int128 v44; // [rsp+1D0h] [rbp-68h]
  int v45; // [rsp+1E0h] [rbp-58h]

  v8 = -1073741811;
  v9 = 0LL;
  v10 = 0LL;
  memset_0(&v39, 0, 0x68uLL);
  v31 = 0LL;
  v30 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v29 = -1LL;
  }
  else if ( a1 )
  {
    v29 = ValidateHwnd(a1);
    if ( !v29 )
    {
LABEL_5:
      v15 = 0;
      v16 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    v29 = 0LL;
  }
  if ( a2 >= 11 )
  {
    v8 = -1073741821;
    goto LABEL_5;
  }
  if ( a2 == 4 )
  {
    if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
    {
      UserSetLastError(5);
      v15 = 1;
      goto LABEL_132;
    }
    if ( (unsigned __int8)Enforced(grpdeskRitInput) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
    {
      UserSetLastError(5);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 7LL);
      v8 = -1073741790;
      goto LABEL_5;
    }
  }
  if ( a2 > 5 )
  {
    v12 = (unsigned int)(a2 - 6);
    if ( a2 == 6 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x10 )
        {
          v12 = a3 + 16;
          if ( a3 + 16 < a3 || v12 > MmUserProbeAddress )
          {
            v12 = MmUserProbeAddress;
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          v39 = *(_OWORD *)a3;
          if ( DWORD1(v39) <= 0x19 )
          {
            v12 = (unsigned int)v39;
            if ( (unsigned int)v39 <= 0x19 )
            {
              v24 = DWORD1(v39) + v39;
              if ( DWORD1(v39) + (int)v39 < (unsigned int)v39 )
              {
                v10 = 0LL;
                v15 = 1;
                v9 = 0LL;
              }
              else if ( v24 <= 0x19 )
              {
                v25 = 8LL * v24;
                v11 = 0xFFFFFFFFLL;
                if ( v25 > 0xFFFFFFFF )
                {
                  v10 = 0LL;
                  v15 = 1;
                  v9 = 0LL;
                }
                else if ( (int)v25 + 8 >= (unsigned int)v25 )
                {
                  v26 = (char *)Win32AllocPoolZInit((unsigned int)(v25 + 8), 1735226197LL);
                  v9 = v26;
                  if ( v26 )
                  {
                    v31 = v26;
                    *(_QWORD *)v26 = v39;
                    for ( i = 0LL; (unsigned int)i < v24; i = (unsigned int)(i + 1) )
                    {
                      v28 = (_QWORD *)(a3 + 8 + 8 * i);
                      if ( v28 + 1 < v28 || (unsigned __int64)(v28 + 1) > MmUserProbeAddress )
                        v28 = (_QWORD *)MmUserProbeAddress;
                      *(_QWORD *)&v26[8 * i + 8] = *v28;
                    }
                    goto LABEL_39;
                  }
                  v8 = -1073741801;
                  v10 = 0LL;
                  v15 = 1;
                }
                else
                {
                  v10 = 0LL;
                  v15 = 1;
                  v9 = 0LL;
                }
              }
              else
              {
                v8 = -1073741306;
                v10 = 0LL;
                v15 = 1;
                v9 = 0LL;
              }
            }
            else
            {
              v8 = -1073741306;
              v10 = 0LL;
              v15 = 1;
              v9 = 0LL;
            }
          }
          else
          {
            v8 = -1073741306;
            v10 = 0LL;
            v15 = 1;
            v9 = 0LL;
          }
        }
        else
        {
          v8 = -1073741306;
          v10 = 0LL;
          v15 = 1;
          v9 = 0LL;
        }
      }
      else
      {
        v10 = 0LL;
        v15 = 1;
        v9 = 0LL;
      }
    }
    else
    {
      v12 = (unsigned int)(a2 - 7);
      if ( a2 == 7 )
      {
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            v12 = a3 + 16;
            if ( a3 + 16 < a3 || v12 > MmUserProbeAddress )
            {
              v12 = MmUserProbeAddress;
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            v39 = *(_OWORD *)a3;
            if ( (unsigned int)v39 <= 6 )
            {
              v12 = 24LL * (unsigned int)v39;
              v11 = 0xFFFFFFFFLL;
              if ( v12 > 0xFFFFFFFF )
              {
                v10 = 0LL;
                v15 = 1;
                v9 = 0LL;
              }
              else if ( (int)v12 + 16 < (unsigned int)v12 )
              {
                v10 = 0LL;
                v15 = 1;
                v9 = 0LL;
              }
              else
              {
                v21 = (char *)Win32AllocPoolZInit((unsigned int)(v12 + 16), 1735226197LL);
                v9 = v21;
                if ( v21 )
                {
                  v30 = v21;
                  *(_OWORD *)v21 = v39;
                  for ( j = 0LL; (unsigned int)j < *(_DWORD *)v21; j = (unsigned int)(j + 1) )
                  {
                    v23 = a3 + 16 + 24 * j;
                    if ( v23 + 24 < v23 || v23 + 24 > MmUserProbeAddress )
                      v23 = MmUserProbeAddress;
                    v32 = *(_QWORD *)(v23 + 16);
                    *(_OWORD *)&v21[24 * j + 16] = *(_OWORD *)v23;
                    *(_QWORD *)&v21[24 * j + 32] = v32;
                  }
                  goto LABEL_39;
                }
                v8 = -1073741801;
                v10 = 0LL;
                v15 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v10 = 0LL;
              v15 = 1;
              v9 = 0LL;
            }
          }
          else
          {
            v8 = -1073741306;
            v10 = 0LL;
            v15 = 1;
            v9 = 0LL;
          }
        }
        else
        {
          v10 = 0LL;
          v15 = 1;
          v9 = 0LL;
        }
      }
      else
      {
        v12 = (unsigned int)(a2 - 8);
        if ( a2 != 8 )
        {
          v12 = (unsigned int)(a2 - 9);
          if ( a2 == 9 )
          {
            if ( !a3 )
            {
              v10 = 0LL;
              v15 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
            if ( a4 < 4 )
            {
              v8 = -1073741306;
              v10 = 0LL;
              v15 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
          }
          else
          {
            if ( !a3 )
            {
              v10 = 0LL;
              v15 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
            if ( a4 < 4 )
            {
              v8 = -1073741306;
              v10 = 0LL;
              v15 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
          }
          if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          LODWORD(v39) = *(_DWORD *)a3;
          v9 = (char *)&v39;
          goto LABEL_39;
        }
        v10 = 0LL;
        v15 = 1;
        v9 = 0LL;
      }
    }
  }
  else if ( a2 == 5 )
  {
    if ( a3 )
    {
      if ( a4 >= 0x64 )
      {
        if ( a3 + 100 < a3 || a3 + 100 > MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v33 = *(_OWORD *)(a3 + 16);
        v34 = *(_OWORD *)(a3 + 32);
        v35 = *(_OWORD *)(a3 + 48);
        v36 = *(_OWORD *)(a3 + 64);
        v37 = *(_OWORD *)(a3 + 80);
        v38 = *(_DWORD *)(a3 + 96);
        v39 = *(_OWORD *)a3;
        v40 = v33;
        v41 = v34;
        v42 = v35;
        v43 = v36;
        v44 = v37;
        v45 = v38;
        goto LABEL_38;
      }
      v8 = -1073741306;
      v10 = 0LL;
      v15 = 1;
      v9 = 0LL;
    }
    else
    {
      v10 = 0LL;
      v15 = 1;
      v9 = 0LL;
    }
  }
  else
  {
    v12 = (unsigned int)a2;
    if ( !a2 || (v12 = (unsigned int)(a2 - 1), a2 == 1) )
    {
      if ( !a3 )
      {
        v9 = 0LL;
        goto LABEL_39;
      }
      v10 = 0LL;
      v15 = 1;
      v9 = 0LL;
    }
    else
    {
      v12 = (unsigned int)(a2 - 2);
      if ( a2 == 2 )
      {
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v39 = *(_OWORD *)a3;
            goto LABEL_38;
          }
          v8 = -1073741306;
          v10 = 0LL;
          v15 = 1;
          v9 = 0LL;
        }
        else
        {
          v10 = 0LL;
          v15 = 1;
          v9 = 0LL;
        }
      }
      else
      {
        v12 = (unsigned int)(a2 - 3);
        if ( a2 != 3 )
        {
          if ( a2 != 4 )
          {
LABEL_39:
            v8 = MagSetLensContextInformation(gMagnContext, gptiCurrent, (struct tagWND *)v29, (unsigned int)a2, v9);
            v10 = v30;
            v15 = 1;
            v9 = v31;
            goto LABEL_132;
          }
          if ( !a3 )
          {
            v10 = 0LL;
            v15 = 1;
            v9 = 0LL;
            goto LABEL_132;
          }
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            v10 = 0LL;
            v15 = 1;
            v9 = 0LL;
            goto LABEL_132;
          }
          if ( a3 + 36 < a3 || a3 + 36 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v19 = *(_OWORD *)a3;
          v20 = *(_OWORD *)(a3 + 16);
          LODWORD(v41) = *(_DWORD *)(a3 + 32);
          goto LABEL_37;
        }
        if ( a3 )
        {
          if ( a4 >= 0x20 )
          {
            if ( a3 + 32 < a3 || a3 + 32 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v19 = *(_OWORD *)a3;
            v20 = *(_OWORD *)(a3 + 16);
LABEL_37:
            v40 = v20;
            v39 = v19;
LABEL_38:
            v9 = (char *)&v39;
            goto LABEL_39;
          }
          v8 = -1073741306;
          v10 = 0LL;
          v15 = 1;
          v9 = 0LL;
        }
        else
        {
          v10 = 0LL;
          v15 = 1;
          v9 = 0LL;
        }
      }
    }
  }
LABEL_132:
  if ( v8 < 0 )
    goto LABEL_5;
  v16 = 1LL;
LABEL_6:
  if ( !v15 )
  {
    v17 = RtlNtStatusToDosError(v8);
    UserSetLastError(v17);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v16;
}
