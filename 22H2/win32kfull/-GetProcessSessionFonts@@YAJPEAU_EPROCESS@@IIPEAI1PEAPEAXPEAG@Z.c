/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00A5058
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C012B890 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016A260 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledDeviceUsage @ 0x1C016A5D4 (Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C021E4D0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C027235C (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        PRKPROCESS PROCESS,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  int v7; // ebx
  void **v10; // r14
  unsigned int v11; // esi
  struct _FONTHASH **v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdx
  struct PFF *v15; // rdi
  struct _EPROCESS *v16; // r12
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  unsigned int j; // edi
  int i; // [rsp+30h] [rbp-61h]
  unsigned int v25; // [rsp+34h] [rbp-5Dh]
  __int64 v27; // [rsp+48h] [rbp-49h] BYREF
  struct _EPROCESS *v28; // [rsp+50h] [rbp-41h]
  struct _EPROCESS *CurrentProcess; // [rsp+58h] [rbp-39h]
  __int64 v30; // [rsp+60h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-29h] BYREF

  v7 = 0;
  *a4 = 0;
  v10 = a6;
  *a5 = 0;
  v25 = a3;
  v11 = a2;
  v28 = PROCESS;
  if ( (_DWORD)a2 )
    memset(a6, 0, 8LL * (unsigned int)a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(PROCESS, a2, a3);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PROCESS, &ApcState);
  v27 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = gpPFTPublic;
  v13 = 0LL;
  for ( i = 0; (unsigned int)v13 < *((_DWORD *)gpPFTPublic + 6); i = v13 )
  {
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741789 )
      break;
    v15 = SkipInvalidPff(v12[v13 + 5]);
    if ( v15 )
    {
      v16 = v28;
      do
      {
        if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
          break;
        if ( !(unsigned int)Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabledDeviceUsage(
                              0x80000000LL,
                              v14)
          || *((_QWORD *)v15 + 10) )
        {
          v17 = *((_DWORD *)v15 + 13);
          if ( (v17 & 8) == 0 && (v17 & 0x200) == 0 )
          {
            if ( ++*a4 == -1 )
              goto LABEL_18;
            v18 = *((_DWORD *)v15 + 8);
            v19 = -1;
            v20 = v18 + *a5;
            if ( v20 >= v18 )
              v19 = v18 + *a5;
            *a5 = v19;
            if ( v20 < v18 )
LABEL_18:
              v7 = -1073741675;
            if ( v11 && v7 >= 0 )
            {
              if ( *a4 > v11 || *a5 > v25 )
                v7 = -1073741789;
              if ( v7 >= 0 )
              {
                v7 = PffDuplicateFileHandle(v15, CurrentProcess, v16, &a6[*a4 - 1]);
                if ( v7 < 0 )
                {
                  if ( (unsigned int)dword_1C032A3D8 > 5
                    && (qword_1C032A3E8 & 0x200000000000LL) != 0
                    && (qword_1C032A3F0 & 0x200000000000LL) == qword_1C032A3F0 )
                  {
                    v21 = **((_QWORD **)v15 + 25);
                    v30 = *(_QWORD *)(v21 + 80);
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                      v21,
                      &unk_1C02F3F9F);
                  }
                }
                else
                {
                  memmove(a7, *(const void **)(**((_QWORD **)v15 + 25) + 80LL), 2LL * *((unsigned int *)v15 + 8));
                  a7 += *((unsigned int *)v15 + 8);
                }
              }
            }
          }
        }
        v15 = SkipInvalidPff(*((struct PFF **)v15 + 1));
      }
      while ( v15 );
      LODWORD(v13) = i;
    }
    v12 = gpPFTPublic;
    v13 = (unsigned int)(v13 + 1);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  KeUnstackDetachProcess(&ApcState);
  if ( v7 < 0 )
  {
    for ( j = 0; j < v11; ++v10 )
    {
      if ( !*v10 )
        break;
      NtClose(*v10);
      ++j;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  return (unsigned int)v7;
}
