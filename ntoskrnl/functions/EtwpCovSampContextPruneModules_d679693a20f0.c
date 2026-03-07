unsigned __int64 __fastcall EtwpCovSampContextPruneModules(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r15
  _QWORD *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r14
  __int64 *i; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _OWORD *v12; // r8
  _QWORD *v13; // rax
  __int128 *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r13
  struct _KTHREAD *v17; // rax
  __int128 *v18; // r11
  __int128 *v19; // rax
  char *v20; // r10
  bool v21; // zf
  int v22; // r9d
  char *j; // rdx
  _QWORD *v24; // r15
  int v25; // r9d
  _QWORD *k; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  _OWORD **v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // [rsp+28h] [rbp-89h]
  __int128 v34; // [rsp+30h] [rbp-81h] BYREF
  __int128 v35; // [rsp+40h] [rbp-71h] BYREF
  _OWORD v36[8]; // [rsp+58h] [rbp-59h] BYREF

  result = *(_DWORD *)(a1 + 16) >> 1;
  v35 = 0LL;
  v34 = 0LL;
  if ( *(_DWORD *)(a1 + 1244) > (unsigned int)result || *(_DWORD *)(a1 + 1636) > (int)result )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 1640),
                             (signed __int32)PsGetCurrentThreadId(),
                             0);
    if ( !(_DWORD)result )
    {
      v3 = 8LL;
      v4 = v36;
      v5 = 8LL;
      do
      {
        v4[1] = v4;
        *v4 = v4;
        v4 += 2;
        --v5;
      }
      while ( v5 );
      CurrentThread = KeGetCurrentThread();
      v7 = (volatile signed __int64 *)(a1 + 1176);
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(a1 + 1176, 0LL);
      for ( i = *(__int64 **)(a1 + 1224); i != (__int64 *)(a1 + 1224); i = (__int64 *)*i )
      {
        if ( *(i - 1) == 1 && !*((_DWORD *)i + 15) )
        {
          v9 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)i + 16);
          if ( v9 >= 0x100 )
            v10 = ((v9 - 256) >> 8) + 4;
          else
            v10 = v9 >> 6;
          if ( (unsigned int)v10 >= 8 )
            v10 = 7LL;
          v11 = i + 2;
          v12 = &v36[v10];
          v13 = (_QWORD *)*((_QWORD *)v12 + 1);
          if ( (_OWORD *)*v13 != v12 )
LABEL_54:
            __fastfail(3u);
          *v11 = v12;
          i[3] = (__int64)v13;
          *v13 = v11;
          *((_QWORD *)v12 + 1) = v11;
        }
      }
      if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = &v35;
      *((_QWORD *)&v35 + 1) = &v35;
      *(_QWORD *)&v35 = &v35;
      v15 = v36;
      do
      {
        if ( (_QWORD *)*v15 != v15 )
        {
          *(_QWORD *)v14 = *v15;
          *(_QWORD *)(*v15 + 8LL) = *((_QWORD *)&v35 + 1);
          *((_QWORD *)&v35 + 1) = v15[1];
          **((_QWORD **)&v35 + 1) = &v35;
          v14 = (__int128 *)*((_QWORD *)&v35 + 1);
        }
        v15 += 2;
        --v3;
      }
      while ( v3 );
      *((_QWORD *)&v34 + 1) = &v34;
      v16 = 0LL;
      *(_QWORD *)&v34 = &v34;
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 1176, 0LL);
      v18 = (__int128 *)v35;
      *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
      while ( v18 != &v35 )
      {
        v19 = v18;
        v20 = (char *)v18 - 88;
        v21 = *((_QWORD *)v18 - 3) == 1LL;
        v18 = *(__int128 **)v18;
        *((_QWORD *)v19 + 1) = v19;
        *(_QWORD *)v19 = v19;
        if ( v21 && !*((_DWORD *)v20 + 33) && ++v16 > (unsigned __int64)*(unsigned int *)(a1 + 16) )
        {
          if ( (*((_DWORD *)v20 + 30) & 0x40000) == 0 )
          {
            v22 = *(_DWORD *)(a1 + 1196) >> 5;
            v33 = *((_QWORD *)v20 + 1) & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F));
            for ( j = (char *)(*(_QWORD *)(a1 + 1200)
                             + 8LL
                             * ((37
                               * (BYTE6(v33)
                                + 37
                                * (BYTE5(v33)
                                 + 37
                                 * (BYTE4(v33)
                                  + 37
                                  * (BYTE3(v33)
                                   + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                               + HIBYTE(v33)) & (unsigned int)(v22 - 1))); (*(_QWORD *)j & 1) == 0; j = *(char **)j )
            {
              if ( *(char **)j == v20 )
              {
                *(_QWORD *)j = *(_QWORD *)v20;
                --*(_DWORD *)(a1 + 1192);
                break;
              }
            }
            *(_QWORD *)v20 = 0LL;
          }
          v24 = v20 + 16;
          if ( *((_QWORD *)v20 + 2) )
          {
            v25 = *(_DWORD *)(a1 + 1212) >> 5;
            v33 = *((_QWORD *)v20 + 3) & (-1LL << (*(_DWORD *)(a1 + 1212) & 0x1F));
            for ( k = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                               + 8LL
                               * ((37
                                 * (BYTE6(v33)
                                  + 37
                                  * (BYTE5(v33)
                                   + 37
                                   * (BYTE4(v33)
                                    + 37
                                    * (BYTE3(v33)
                                     + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                                 + HIBYTE(v33)) & (unsigned int)(v25 - 1))); (*k & 1) == 0; k = (_QWORD *)*k )
            {
              if ( (_QWORD *)*k == v24 )
              {
                *k = *v24;
                --*(_DWORD *)(a1 + 1208);
                break;
              }
            }
            *v24 = 0LL;
          }
          v27 = v20 + 72;
          v28 = *((_QWORD *)v20 + 9);
          if ( *(char **)(v28 + 8) != v20 + 72 )
            goto LABEL_54;
          v29 = (_QWORD *)*((_QWORD *)v20 + 10);
          if ( (_QWORD *)*v29 != v27 )
            goto LABEL_54;
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          v30 = (_OWORD **)*((_QWORD *)&v34 + 1);
          --*(_DWORD *)(a1 + 1240);
          if ( *v30 != &v34 )
            goto LABEL_54;
          *((_QWORD *)v20 + 10) = v30;
          *v27 = &v34;
          *v30 = v27;
          *((_QWORD *)&v34 + 1) = v20 + 72;
        }
      }
      *(_DWORD *)(a1 + 1244) = 0;
      *(_DWORD *)(a1 + 1636) = 0;
      *(_QWORD *)(a1 + 1184) = 0LL;
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      while ( 1 )
      {
        result = v34;
        if ( (__int128 *)v34 == &v34 )
          break;
        if ( *(__int128 **)(v34 + 8) != &v34 )
          goto LABEL_54;
        v31 = *(_QWORD *)v34;
        if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != (_QWORD)v34 )
          goto LABEL_54;
        *(_QWORD *)&v34 = *(_QWORD *)v34;
        v32 = (_QWORD *)(result - 72);
        *(_QWORD *)(v31 + 8) = &v34;
        *(_QWORD *)(result - 72 + 64) = 0LL;
        *(_QWORD *)(result + 8) = result;
        *(_QWORD *)result = result;
        EtwpCovSampModuleCleanup(result - 72);
        ExFreePoolWithTag(v32, 0x56777445u);
      }
      _InterlockedExchange((volatile __int32 *)(a1 + 1640), 0);
    }
  }
  return result;
}
