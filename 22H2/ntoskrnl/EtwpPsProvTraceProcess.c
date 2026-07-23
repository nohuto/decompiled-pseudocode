/*
 * XREFs of EtwpPsProvTraceProcess @ 0x140602CDC
 * Callers:
 *     EtwpWriteProcessEvent @ 0x140602B04 (EtwpWriteProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EBB0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     SeQueryTokenIntegrity @ 0x140251BD8 (SeQueryTokenIntegrity.c)
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     RtlStringCchPrintfW @ 0x140348150 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PsQueryStatisticsProcess @ 0x140619120 (PsQueryStatisticsProcess.c)
 *     PsLookupProcessByProcessId @ 0x140625CA0 (PsLookupProcessByProcessId.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     ObGetProcessHandleCount @ 0x1406976DC (ObGetProcessHandleCount.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

unsigned int __fastcall EtwpPsProvTraceProcess(PEPROCESS Process, char a2, unsigned int *a3, int *a4, __int16 a5)
{
  unsigned int result; // eax
  const EVENT_DESCRIPTOR *v10; // r14
  ULONG v11; // esi
  void *v12; // rcx
  int v13; // edi
  struct _DMA_ADAPTER *v14; // rdi
  int v15; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 *v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  struct _DMA_ADAPTER *v20; // rsi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // ecx
  unsigned __int16 *v25; // rax
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rbx
  __int64 v27; // rax
  int v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  int ProcessHandleCount; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  int v34; // [rsp+50h] [rbp-B8h] BYREF
  int v35; // [rsp+54h] [rbp-B4h] BYREF
  int SessionId; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  PVOID v42; // [rsp+80h] [rbp-88h] BYREF
  PVOID v43; // [rsp+88h] [rbp-80h] BYREF
  PEPROCESS Processa; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp-70h] BYREF
  PVOID TokenInformation; // [rsp+A0h] [rbp-68h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  _SID_AND_ATTRIBUTES IntegritySA; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v50[14]; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  _LIST_ENTRY *p_ThreadListHead; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  int *p_SessionId; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  int *p_ProcessHandleCount; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 *v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  _QWORD *Sid; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  int *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  __int64 *v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  int *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  int *v76; // [rsp+218h] [rbp+110h]
  __int64 v77; // [rsp+220h] [rbp+118h]
  unsigned int *v78; // [rsp+228h] [rbp+120h]
  __int64 v79; // [rsp+230h] [rbp+128h]
  unsigned int *p_Count; // [rsp+238h] [rbp+130h]
  unsigned int v81; // [rsp+240h] [rbp+138h]
  int v82; // [rsp+244h] [rbp+13Ch]
  wchar_t pszDest[16]; // [rsp+248h] [rbp+140h] BYREF

  v29 = 0;
  v35 = 0;
  SessionId = 0;
  v28 = 0;
  ProcessHandleCount = 0;
  v39 = 0LL;
  v40 = 0LL;
  result = (unsigned int)memset(v50, 0, 0x68uLL);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  DestinationString = 0LL;
  switch ( a5 )
  {
    case 769:
      v10 = &ProcessStart;
      goto LABEL_3;
    case 770:
      v10 = (const EVENT_DESCRIPTOR *)ProcessStop;
      goto LABEL_3;
    case 771:
      v10 = (const EVENT_DESCRIPTOR *)ProcessRundown;
LABEL_3:
      LODWORD(v41) = Process[1].Header.WaitListHead.Flink;
      v11 = 3;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v41;
      v52 = &Process[2].Affinity.Bitmap[6];
      p_ThreadListHead = &Process[1].ThreadListHead;
      v53 = 8LL;
      v55 = 8LL;
      if ( ((a5 - 769) & 0xFFFD) != 0 )
      {
        if ( a5 != 770 )
          return EtwWrite(EtwpPsProvRegHandle, v10, 0LL, v11, &UserData);
        v42 = 0LL;
        PsQueryStatisticsProcess(Process, v50);
        v57 = 8LL;
        v56 = &Process[1].EndPadding[2];
        v59 = 4LL;
        v58 = (unsigned __int64 *)&Process[1].Spare2[11];
        v20 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
        if ( SeQueryInformationToken(v20, TokenElevationType, &v42) >= 0 )
        {
          if ( *(_DWORD *)v42 == 1 )
          {
            v43 = 0LL;
            if ( SeQueryInformationToken(v20, TokenElevation, &v43) >= 0 )
              v28 = *(_DWORD *)v43 != 0 ? 1 : 4;
            if ( v43 )
              ExFreePoolWithTag(v43, 0);
          }
          else
          {
            v28 = *(_DWORD *)v42;
          }
        }
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v20);
        if ( v42 )
          ExFreePoolWithTag(v42, 0);
        v61 = 4LL;
        p_SessionId = &v28;
        ProcessHandleCount = ObGetProcessHandleCount(Process, 0LL);
        v63 = 4LL;
        p_ProcessHandleCount = &ProcessHandleCount;
        v39 = Process[1].ActiveProcessors.Bitmap[19];
        v39 <<= 12;
        v64 = &v39;
        v40 = Process[1].ActiveProcessorsPadding[0];
        v40 <<= 12;
        v66 = &v40;
        Sid = &v50[3];
        v21 = v50[5];
        if ( HIDWORD(v50[5]) )
          v21 = -1;
        v65 = 8LL;
        v31 = v21;
        v70 = &v31;
        v22 = v50[6];
        if ( HIDWORD(v50[6]) )
          v22 = -1;
        v67 = 8LL;
        v32 = v22;
        v23 = v50[8] >> 10;
        v72 = (__int64 *)&v32;
        v50[8] = v23;
        v69 = 8LL;
        if ( HIDWORD(v23) )
          LODWORD(v23) = -1;
        v74 = &v33;
        v33 = v23;
        v50[9] >>= 10;
        v24 = v50[9];
        v71 = 4LL;
        v73 = 4LL;
        if ( HIDWORD(v50[9]) )
          v24 = -1;
        v76 = &v34;
        v25 = &Process[1].IdealProcessorPadding[2];
        v75 = 4LL;
        p_ActiveProcessors = &Process[1].ActiveProcessors;
        v78 = (unsigned int *)v25;
        p_Count = (unsigned int *)&p_ActiveProcessors->Count;
        v27 = -1LL;
        v34 = v24;
        v77 = 4LL;
        v79 = 4LL;
        do
          ++v27;
        while ( *((_BYTE *)&p_ActiveProcessors->Count + v27) );
        v19 = v27 + 1;
      }
      else
      {
        v12 = (void *)Process[1].AffinityPadding[2];
        v45 = -1LL;
        v37 = -1;
        v35 = Process[1].AffinityPadding[2];
        LODWORD(v38) = -1;
        v56 = (unsigned __int64 *)&v35;
        Processa = 0LL;
        TokenInformation = 0LL;
        P = 0LL;
        IntegritySA = 0LL;
        v57 = 4LL;
        if ( PsLookupProcessByProcessId(v12, &Processa) >= 0 )
        {
          v45 = Processa[2].Affinity.Bitmap[6];
          HalPutDmaAdapter((PADAPTER_OBJECT)Processa);
        }
        v59 = 8LL;
        v58 = &v45;
        SessionId = MmGetSessionId((__int64)Process);
        v13 = 1;
        v61 = 4LL;
        p_SessionId = &SessionId;
        if ( (a2 & 1) == 0 )
        {
          v11 = 2;
          v13 = v29;
        }
        v63 = 4LL;
        if ( (a2 & 8) != 0 )
          v13 = v11;
        p_ProcessHandleCount = &v29;
        v29 = v13;
        v14 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
        if ( SeQueryInformationToken(v14, TokenElevationType, &TokenInformation) >= 0 )
          v37 = *(_DWORD *)TokenInformation;
        v65 = 4LL;
        v64 = (unsigned __int64 *)&v37;
        if ( TokenInformation )
          ExFreePoolWithTag(TokenInformation, 0);
        if ( SeQueryInformationToken(v14, TokenElevation, &P) >= 0 )
          LODWORD(v38) = *(_DWORD *)P;
        v67 = 4LL;
        v66 = (unsigned __int64 *)&v38;
        if ( P )
          ExFreePoolWithTag(P, 0);
        SeQueryTokenIntegrity(v14, &IntegritySA);
        v15 = *((unsigned __int8 *)IntegritySA.Sid + 1);
        Sid = IntegritySA.Sid;
        v69 = (unsigned int)(4 * v15 + 8);
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v14);
        p_DestinationString = (UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[2];
        if ( !p_DestinationString || !p_DestinationString->Length )
        {
          RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", &Process[1].ActiveProcessors);
          RtlInitUnicodeString(&DestinationString, pszDest);
          p_DestinationString = &DestinationString;
        }
        v17 = &EmptyUnicodeString;
        if ( p_DestinationString )
          v17 = (__int64 *)p_DestinationString;
        v18 = *(unsigned __int16 *)v17;
        v70 = (int *)v17[1];
        v72 = &EtwpNull;
        v76 = a4 + 1;
        v78 = a3 + 4;
        v79 = *a3;
        p_Count = a3 + 68;
        v19 = a3[2];
        v71 = v18;
        v73 = 2LL;
        v74 = a4;
        v75 = 4LL;
        v77 = 4LL;
      }
      v11 = 16;
      v82 = 0;
      v81 = v19;
      return EtwWrite(EtwpPsProvRegHandle, v10, 0LL, v11, &UserData);
  }
  return result;
}
