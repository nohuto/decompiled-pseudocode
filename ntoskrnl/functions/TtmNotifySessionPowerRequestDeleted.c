void __fastcall TtmNotifySessionPowerRequestDeleted(unsigned int a1, int a2)
{
  unsigned __int64 v3; // rbp
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  int v7; // r9d
  __int64 v8; // r10
  char v9; // di
  _QWORD *i; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = a2;
  v4 = TtmpAcquireSessionById(&v12, a1);
  v6 = v12;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(v12 + 272) )
    {
      v7 = *(_DWORD *)(v12 + 276) >> 5;
      v8 = -1LL << (*(_DWORD *)(v12 + 276) & 0x1F);
      v9 = 1;
      v12 = v8 & v3;
      v5 = 37
         * ((unsigned __int8)((v8 & v3) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v8 & v3) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v8 & v3) >> 32)
            + 37
            * ((((unsigned int)v8 & (unsigned int)v3) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v8 & (unsigned int)v3) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(v8 & v3) >> 8) + 37 * ((unsigned __int8)(v8 & v3) + 11623883LL)))))));
      for ( i = (_QWORD *)(*(_QWORD *)(v6 + 280) + 8 * (((_DWORD)v5 + ((v8 & v3) >> 56)) & (unsigned int)(v7 - 1)));
            ;
            i = (_QWORD *)*i )
      {
        v11 = (_QWORD *)*i;
        if ( (*i & 1) != 0 )
          break;
        if ( (v8 & v11[1]) == (v8 & v3) )
        {
          *i = *v11;
          --*(_DWORD *)(v6 + 272);
          *v11 |= 0x8000000000000002uLL;
          if ( !v11 )
            break;
          ExFreePoolWithTag(v11, 0x52507454u);
          goto LABEL_11;
        }
      }
    }
    v9 = 0;
LABEL_11:
    LOBYTE(v5) = v9;
    TtmiLogSessionPowerRequestDeleted(a1, (unsigned int)v3, v5);
  }
  else
  {
    TtmiLogError("TtmNotifySessionPowerRequestDeleted", 3662LL, (unsigned int)v4, -1LL);
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
