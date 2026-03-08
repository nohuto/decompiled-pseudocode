/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C01D7E20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  char *v9; // r14
  char *v10; // rsi
  ULONG64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdi
  ULONG v14; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  char *v18; // rax
  __int64 j; // rcx
  ULONG64 v20; // rdx
  unsigned int v21; // r15d
  unsigned __int64 v22; // rax
  char *v23; // rax
  __int64 i; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // [rsp+50h] [rbp-1E8h]
  char *v27; // [rsp+58h] [rbp-1E0h]
  char *v28; // [rsp+60h] [rbp-1D8h]
  __int64 v29; // [rsp+B0h] [rbp-188h]
  __int128 v30; // [rsp+F0h] [rbp-148h]
  __int128 v31; // [rsp+100h] [rbp-138h]
  __int128 v32; // [rsp+110h] [rbp-128h]
  __int128 v33; // [rsp+120h] [rbp-118h]
  __int128 v34; // [rsp+130h] [rbp-108h]
  int v35; // [rsp+140h] [rbp-F8h]
  __int128 v36; // [rsp+180h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+190h] [rbp-A8h]
  __int128 v38; // [rsp+1A0h] [rbp-98h]
  __int128 v39; // [rsp+1B0h] [rbp-88h]
  __int128 v40; // [rsp+1C0h] [rbp-78h]
  __int128 v41; // [rsp+1D0h] [rbp-68h]
  int v42; // [rsp+1E0h] [rbp-58h]

  v8 = -1073741811;
  v9 = 0LL;
  v10 = 0LL;
  memset_0(&v36, 0, 0x68uLL);
  v28 = 0LL;
  v27 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v26 = -1LL;
  }
  else if ( a1 )
  {
    v26 = ValidateHwnd(a1);
    if ( !v26 )
    {
LABEL_5:
      v12 = 0;
      v13 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    v26 = 0LL;
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
      v12 = 1;
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
    v11 = (unsigned int)(a2 - 6);
    if ( a2 == 6 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x10 )
        {
          v11 = a3 + 16;
          if ( a3 + 16 < a3 || v11 > MmUserProbeAddress )
          {
            v11 = MmUserProbeAddress;
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          v36 = *(_OWORD *)a3;
          if ( DWORD1(v36) <= 0x19 )
          {
            v11 = (unsigned int)v36;
            if ( (unsigned int)v36 <= 0x19 )
            {
              v21 = DWORD1(v36) + v36;
              if ( DWORD1(v36) + (int)v36 < (unsigned int)v36 )
              {
                v10 = 0LL;
                v12 = 1;
                v9 = 0LL;
              }
              else if ( v21 <= 0x19 )
              {
                v22 = 8LL * v21;
                if ( v22 > 0xFFFFFFFF )
                {
                  v10 = 0LL;
                  v12 = 1;
                  v9 = 0LL;
                }
                else if ( (int)v22 + 8 >= (unsigned int)v22 )
                {
                  v23 = (char *)Win32AllocPoolZInit((unsigned int)(v22 + 8), 1735226197LL);
                  v9 = v23;
                  if ( v23 )
                  {
                    v28 = v23;
                    *(_QWORD *)v23 = v36;
                    for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
                    {
                      v25 = (_QWORD *)(a3 + 8 + 8 * i);
                      if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > MmUserProbeAddress )
                        v25 = (_QWORD *)MmUserProbeAddress;
                      *(_QWORD *)&v23[8 * i + 8] = *v25;
                    }
                    goto LABEL_39;
                  }
                  v8 = -1073741801;
                  v10 = 0LL;
                  v12 = 1;
                }
                else
                {
                  v10 = 0LL;
                  v12 = 1;
                  v9 = 0LL;
                }
              }
              else
              {
                v8 = -1073741306;
                v10 = 0LL;
                v12 = 1;
                v9 = 0LL;
              }
            }
            else
            {
              v8 = -1073741306;
              v10 = 0LL;
              v12 = 1;
              v9 = 0LL;
            }
          }
          else
          {
            v8 = -1073741306;
            v10 = 0LL;
            v12 = 1;
            v9 = 0LL;
          }
        }
        else
        {
          v8 = -1073741306;
          v10 = 0LL;
          v12 = 1;
          v9 = 0LL;
        }
      }
      else
      {
        v10 = 0LL;
        v12 = 1;
        v9 = 0LL;
      }
    }
    else
    {
      v11 = (unsigned int)(a2 - 7);
      if ( a2 == 7 )
      {
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            v11 = a3 + 16;
            if ( a3 + 16 < a3 || v11 > MmUserProbeAddress )
            {
              v11 = MmUserProbeAddress;
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            v36 = *(_OWORD *)a3;
            if ( (unsigned int)v36 <= 6 )
            {
              v11 = 24LL * (unsigned int)v36;
              if ( v11 > 0xFFFFFFFF )
              {
                v10 = 0LL;
                v12 = 1;
                v9 = 0LL;
              }
              else if ( (int)v11 + 16 < (unsigned int)v11 )
              {
                v10 = 0LL;
                v12 = 1;
                v9 = 0LL;
              }
              else
              {
                v18 = (char *)Win32AllocPoolZInit((unsigned int)(v11 + 16), 1735226197LL);
                v9 = v18;
                if ( v18 )
                {
                  v27 = v18;
                  *(_OWORD *)v18 = v36;
                  for ( j = 0LL; (unsigned int)j < *(_DWORD *)v18; j = (unsigned int)(j + 1) )
                  {
                    v20 = a3 + 16 + 24 * j;
                    if ( v20 + 24 < v20 || v20 + 24 > MmUserProbeAddress )
                      v20 = MmUserProbeAddress;
                    v29 = *(_QWORD *)(v20 + 16);
                    *(_OWORD *)&v18[24 * j + 16] = *(_OWORD *)v20;
                    *(_QWORD *)&v18[24 * j + 32] = v29;
                  }
                  goto LABEL_39;
                }
                v8 = -1073741801;
                v10 = 0LL;
                v12 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v10 = 0LL;
              v12 = 1;
              v9 = 0LL;
            }
          }
          else
          {
            v8 = -1073741306;
            v10 = 0LL;
            v12 = 1;
            v9 = 0LL;
          }
        }
        else
        {
          v10 = 0LL;
          v12 = 1;
          v9 = 0LL;
        }
      }
      else
      {
        v11 = (unsigned int)(a2 - 8);
        if ( a2 != 8 )
        {
          v11 = (unsigned int)(a2 - 9);
          if ( a2 == 9 )
          {
            if ( !a3 )
            {
              v10 = 0LL;
              v12 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
            if ( a4 < 4 )
            {
              v8 = -1073741306;
              v10 = 0LL;
              v12 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
          }
          else
          {
            if ( !a3 )
            {
              v10 = 0LL;
              v12 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
            if ( a4 < 4 )
            {
              v8 = -1073741306;
              v10 = 0LL;
              v12 = 1;
              v9 = 0LL;
              goto LABEL_132;
            }
          }
          if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          LODWORD(v36) = *(_DWORD *)a3;
          v9 = (char *)&v36;
          goto LABEL_39;
        }
        v10 = 0LL;
        v12 = 1;
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
        v30 = *(_OWORD *)(a3 + 16);
        v31 = *(_OWORD *)(a3 + 32);
        v32 = *(_OWORD *)(a3 + 48);
        v33 = *(_OWORD *)(a3 + 64);
        v34 = *(_OWORD *)(a3 + 80);
        v35 = *(_DWORD *)(a3 + 96);
        v36 = *(_OWORD *)a3;
        v37 = v30;
        v38 = v31;
        v39 = v32;
        v40 = v33;
        v41 = v34;
        v42 = v35;
        goto LABEL_38;
      }
      v8 = -1073741306;
      v10 = 0LL;
      v12 = 1;
      v9 = 0LL;
    }
    else
    {
      v10 = 0LL;
      v12 = 1;
      v9 = 0LL;
    }
  }
  else
  {
    v11 = (unsigned int)a2;
    if ( !a2 || (v11 = (unsigned int)(a2 - 1), a2 == 1) )
    {
      if ( !a3 )
      {
        v9 = 0LL;
        goto LABEL_39;
      }
      v10 = 0LL;
      v12 = 1;
      v9 = 0LL;
    }
    else
    {
      v11 = (unsigned int)(a2 - 2);
      if ( a2 == 2 )
      {
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v36 = *(_OWORD *)a3;
            goto LABEL_38;
          }
          v8 = -1073741306;
          v10 = 0LL;
          v12 = 1;
          v9 = 0LL;
        }
        else
        {
          v10 = 0LL;
          v12 = 1;
          v9 = 0LL;
        }
      }
      else
      {
        v11 = (unsigned int)(a2 - 3);
        if ( a2 != 3 )
        {
          if ( a2 != 4 )
          {
LABEL_39:
            v8 = MagSetLensContextInformation(gMagnContext, gptiCurrent, (struct tagWND *)v26, (unsigned int)a2, v9);
            v10 = v27;
            v12 = 1;
            v9 = v28;
            goto LABEL_132;
          }
          if ( !a3 )
          {
            v10 = 0LL;
            v12 = 1;
            v9 = 0LL;
            goto LABEL_132;
          }
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            v10 = 0LL;
            v12 = 1;
            v9 = 0LL;
            goto LABEL_132;
          }
          if ( a3 + 36 < a3 || a3 + 36 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v16 = *(_OWORD *)a3;
          v17 = *(_OWORD *)(a3 + 16);
          LODWORD(v38) = *(_DWORD *)(a3 + 32);
          goto LABEL_37;
        }
        if ( a3 )
        {
          if ( a4 >= 0x20 )
          {
            if ( a3 + 32 < a3 || a3 + 32 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v16 = *(_OWORD *)a3;
            v17 = *(_OWORD *)(a3 + 16);
LABEL_37:
            v37 = v17;
            v36 = v16;
LABEL_38:
            v9 = (char *)&v36;
            goto LABEL_39;
          }
          v8 = -1073741306;
          v10 = 0LL;
          v12 = 1;
          v9 = 0LL;
        }
        else
        {
          v10 = 0LL;
          v12 = 1;
          v9 = 0LL;
        }
      }
    }
  }
LABEL_132:
  if ( v8 < 0 )
    goto LABEL_5;
  v13 = 1LL;
LABEL_6:
  if ( !v12 )
  {
    v14 = RtlNtStatusToDosError(v8);
    UserSetLastError(v14);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
