__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int64 i; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+58h] [rbp+10h]

  v6 = 0;
  if ( a2 && (unsigned int)PfLockSharedTryAcquire((ULONG_PTR)&qword_140C64CD8) )
  {
    v7 = qword_140C64CB8;
    if ( a2 == *(_QWORD *)(qword_140C64CB8 + 8) )
    {
LABEL_10:
      v10 = *(_QWORD *)(v7 + 16);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C64CD8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C64CD8);
      KeAbPostRelease((ULONG_PTR)&qword_140C64CD8);
      KeLeaveCriticalRegion();
      if ( qword_140C64CF8 != v10 )
      {
        if ( !(unsigned int)PfLockSharedTryAcquire((ULONG_PTR)&qword_140C64D00) )
          return v6;
        if ( dword_140C64CEC )
        {
          v11 = 0LL;
          for ( i = (HIBYTE(v10)
                   + 37
                   * (BYTE6(v10)
                    + 37
                    * (BYTE5(v10)
                     + 37
                     * (BYTE4(v10)
                      + 37
                      * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))) & (unsigned int)(dword_140C64CEC - 1);
                ;
                i = (unsigned int)(dword_140C64CEC - 1) & (v11 + i) )
          {
            v13 = *(_QWORD *)((i << dword_140C64CE8) + qword_140C64CE0);
            if ( !v13 )
              break;
            if ( v13 == v10 )
            {
              qword_140C64CF8 = v10;
              goto LABEL_23;
            }
            if ( !v11 )
            {
              v11 = 2654435761LL * v10 + 1;
              if ( ((-79 * (_BYTE)v10) & 1) != 0 )
                v11 = 2654435761LL * v10;
            }
          }
        }
        v6 = 1;
        qword_140C64D38 = MEMORY[0xFFFFF78000000320];
LABEL_23:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C64D00, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&qword_140C64D00);
        KeAbPostRelease((ULONG_PTR)&qword_140C64D00);
        KeLeaveCriticalRegion();
      }
      PfpRpLogDeprioEvent(a2, a1, v6 != 0 ? a3 : 0);
      return v6;
    }
    v8 = -1LL << (dword_140C64CAC & 0x1F);
    v9 = a2 & v8;
    if ( (unsigned int)dword_140C64CAC >> 5 )
    {
      v15 = a2 & v8;
      v7 = qword_140C64CB0
         + 8LL
         * ((37
           * (BYTE6(v15)
            + 37
            * (BYTE5(v15)
             + 37
             * (BYTE4(v15)
              + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v9 + 11623883)))))))
           + HIBYTE(v15)) & (((unsigned int)dword_140C64CAC >> 5) - 1));
      while ( 1 )
      {
        v7 = *(_QWORD *)v7;
        if ( (v7 & 1) != 0 )
          break;
        if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
        {
          if ( !v7 )
            break;
          qword_140C64CB8 = v7;
          goto LABEL_10;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C64CD8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C64CD8);
    KeAbPostRelease((ULONG_PTR)&qword_140C64CD8);
    KeLeaveCriticalRegion();
  }
  return v6;
}
