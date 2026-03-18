/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C000BADC
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C0117190 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C02701B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlg_ea_1C02701B8.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C02705C4 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        PRKPROCESS PROCESS,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  int v7; // ebx
  void **v10; // r14
  struct _FONTHASH **v12; // rcx
  unsigned __int64 v13; // r13
  struct _FONTHASH *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int i; // edi
  int v21; // [rsp+40h] [rbp-61h]
  __int64 v24; // [rsp+58h] [rbp-49h] BYREF
  struct _EPROCESS *v25; // [rsp+60h] [rbp-41h]
  struct _EPROCESS *CurrentProcess; // [rsp+68h] [rbp-39h]
  __int64 v27; // [rsp+70h] [rbp-31h]
  _KAPC_STATE ApcState; // [rsp+78h] [rbp-29h] BYREF

  v7 = 0;
  *a4 = 0;
  v10 = a6;
  v25 = PROCESS;
  *a5 = 0;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PROCESS, &ApcState);
  v24 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = gpPFTPublic;
  v13 = 0LL;
  v21 = 0;
  if ( !*((_DWORD *)gpPFTPublic + 6) )
    goto LABEL_29;
  do
  {
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741789 )
      break;
    v14 = v12[v13 + 5];
    if ( !v14 )
      goto LABEL_28;
    v13 = (unsigned __int64)a7;
    while ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -1073741789 )
    {
      if ( *((_QWORD *)v14 + 10) )
      {
        v15 = *((_DWORD *)v14 + 13);
        if ( (v15 & 8) == 0 && (v15 & 0x200) == 0 )
        {
          if ( ++*a4 != -1 )
          {
            v16 = *((_DWORD *)v14 + 8);
            v17 = v16 + *a5;
            if ( v17 >= v16 )
            {
              *a5 = v17;
LABEL_16:
              if ( a2 && v7 >= 0 )
              {
                if ( *a4 > a2 || *a5 > a3 )
                {
                  v7 = -1073741789;
                }
                else
                {
                  v7 = PffDuplicateFileHandle(v14, CurrentProcess, v25, &a6[*a4 - 1]);
                  if ( v7 < 0 )
                  {
                    if ( (unsigned int)dword_1C03263F8 > 5
                      && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
                    {
                      v18 = **((_QWORD **)v14 + 25);
                      v27 = 0x2000000LL;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                        v18,
                        &unk_1C02F2479);
                    }
                  }
                  else
                  {
                    memmove(
                      (void *)v13,
                      *(const void **)(**((_QWORD **)v14 + 25) + 80LL),
                      2LL * *((unsigned int *)v14 + 8));
                    v13 += 2LL * *((unsigned int *)v14 + 8);
                  }
                }
              }
              goto LABEL_26;
            }
            *a5 = -1;
          }
          v7 = -1073741675;
          goto LABEL_16;
        }
      }
LABEL_26:
      v14 = (struct _FONTHASH *)*((_QWORD *)v14 + 1);
      if ( !v14 )
        break;
    }
    a7 = (unsigned __int16 *)v13;
    LODWORD(v13) = v21;
LABEL_28:
    v12 = gpPFTPublic;
    v13 = (unsigned int)(v13 + 1);
    v21 = v13;
  }
  while ( (unsigned int)v13 < *((_DWORD *)gpPFTPublic + 6) );
LABEL_29:
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  KeUnstackDetachProcess(&ApcState);
  if ( v7 < 0 )
  {
    for ( i = 0; i < a2; ++v10 )
    {
      if ( !*v10 )
        break;
      NtClose(*v10);
      ++i;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  return (unsigned int)v7;
}
