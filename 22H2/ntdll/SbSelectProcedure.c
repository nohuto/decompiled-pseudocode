/*
 * XREFs of SbSelectProcedure @ 0x18003E0E0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800F2524 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x180113880 (SbExecuteProcedure.c)
 * Callees:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E2C0 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwEventRegister @ 0x180042E80 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x180050300 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800514F0 (EtwNotificationUnregister.c)
 *     SbpUpdateCache @ 0x18006F930 (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     SbpTraceContextUpdate @ 0x1801137A8 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  char *pShimData; // r8
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rdx
  char *v16; // rsi
  char *v17; // rsi
  __int64 *v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  REGHANDLE v22; // r13
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  REGHANDLE v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int16 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v35; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v37; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG RegHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG v39; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v40; // [rsp+50h] [rbp-B0h]
  ULONGLONG v41; // [rsp+58h] [rbp-A8h]
  _EVENT_DATA_DESCRIPTOR v42; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+88h] [rbp-78h]
  int v47; // [rsp+8Ch] [rbp-74h]
  unsigned __int16 *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  __int128 v53; // [rsp+B0h] [rbp-50h]
  __int128 v54; // [rsp+C0h] [rbp-40h]
  __int128 v55; // [rsp+D0h] [rbp-30h]
  _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = pShimData + 2016) == 0LL || !*((_DWORD *)v9 + 12) )
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v6;
    _mm_lfence();
    v13 = v7;
    v14 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(UserData, 0, sizeof(UserData));
    v15 = -1LL;
    v34 = 0;
    v35 = 0;
    if ( !*(_DWORD *)(v14 + 44)
      || (RegHandle = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 2016) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v13 + 16);
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( *((_DWORD *)v18 + 10) )
      {
        v39 = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 2016;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v29 = *((_QWORD *)v20 + 2);
              if ( v29 )
                goto LABEL_48;
              if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v39) )
              {
                v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, v39, 0LL);
                if ( v29 )
                {
                  EtwNotificationUnregister(v39, 0LL);
                }
                else
                {
                  v41 = v39;
                  SbpTraceContextUpdate(v39, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                  v29 = v41;
                }
                v15 = -1LL;
                if ( v29 )
                {
LABEL_48:
                  v30 = *v18;
                  v42.Ptr = (unsigned __int64)(v18 + 14);
                  v31 = -1LL;
                  *(_QWORD *)&v42.Size = 16LL;
                  do
                    ++v31;
                  while ( *(_WORD *)(v30 + 2 * v31) );
                  v45 = v30;
                  v32 = v18[3];
                  v43 = &v36;
                  v33 = (unsigned __int16)(2 * (v31 + 1));
                  v36 = v33;
                  v46 = v33;
                  v44 = 2LL;
                  v47 = 0;
                  do
                    ++v15;
                  while ( *(_WORD *)(v32 + 2 * v15) );
                  v50 = v32;
                  v49 = 2LL;
                  v37 = 2 * (v15 + 1);
                  v48 = &v37;
                  v51 = v37;
                  v52 = 0;
                  EtwEventWrite(v29, &AeSbImplEvent, 5u, &v42);
                }
              }
            }
          }
        }
      }
      return v18[1];
    }
    v22 = *((_QWORD *)v17 + 2);
    if ( v22 )
    {
      v40 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &RegHandle) )
        goto LABEL_40;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, RegHandle, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(RegHandle, 0LL);
        v40 = v22;
      }
      else
      {
        v40 = RegHandle;
        SbpTraceContextUpdate(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
        v22 = v40;
      }
      v15 = -1LL;
    }
    if ( !v22 )
      goto LABEL_16;
    v23 = *(_QWORD *)v14;
    UserData[0].Ptr = v14 + 52;
    v24 = -1LL;
    *(_QWORD *)&UserData[0].Size = 16LL;
    do
      ++v24;
    while ( *(_WORD *)(v23 + 2 * v24) );
    UserData[2].Ptr = v23;
    v25 = *(_QWORD *)(v14 + 8);
    UserData[1].Ptr = (unsigned __int64)&v34;
    v26 = (unsigned __int16)(2 * (v24 + 1));
    v34 = v26;
    UserData[2].Size = v26;
    v27 = -1LL;
    *(_QWORD *)&UserData[1].Size = 2LL;
    UserData[2].Reserved = 0;
    do
      ++v27;
    while ( *(_WORD *)(v25 + 2 * v27) );
    UserData[4].Ptr = v25;
    *(_QWORD *)&UserData[3].Size = 2LL;
    v28 = (unsigned __int16)(2 * (v27 + 1));
    UserData[3].Ptr = (unsigned __int64)&v35;
    v35 = v28;
    UserData[4].Size = v28;
    UserData[4].Reserved = 0;
    EtwEventWrite(v22, &AeSbCallEvent, 5u, UserData);
LABEL_40:
    v15 = -1LL;
    goto LABEL_16;
  }
  return 0LL;
}
