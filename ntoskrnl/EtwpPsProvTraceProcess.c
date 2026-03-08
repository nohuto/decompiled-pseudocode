/*
 * XREFs of EtwpPsProvTraceProcess @ 0x1407E8D90
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1407E9594 (EtwpWriteProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409ECC80 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmGetSessionId @ 0x140299600 (MmGetSessionId.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     SeQueryTokenIntegrity @ 0x14035C400 (SeQueryTokenIntegrity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsQueryStatisticsProcess @ 0x1406A8F30 (PsQueryStatisticsProcess.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     ObGetProcessHandleCount @ 0x14071172C (ObGetProcessHandleCount.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

unsigned int __fastcall EtwpPsProvTraceProcess(__int64 a1, char a2, unsigned int *a3, int *a4, __int16 a5)
{
  unsigned int result; // eax
  const EVENT_DESCRIPTOR *v10; // r15
  ULONG v11; // esi
  void *v12; // rcx
  int v13; // edi
  void *v14; // rdi
  int v15; // eax
  UNICODE_STRING *p_DestinationString; // rax
  unsigned int Length; // ecx
  unsigned int v18; // eax
  void *v19; // r14
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v28; // [rsp+40h] [rbp-C8h] BYREF
  int ProcessHandleCount; // [rsp+48h] [rbp-C0h] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  int v31; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+54h] [rbp-B4h] BYREF
  int v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  int v39; // [rsp+80h] [rbp-88h] BYREF
  PEPROCESS Process; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+90h] [rbp-78h] BYREF
  PVOID TokenInformation; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  struct _SID_AND_ATTRIBUTES IntegritySA; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v46[14]; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  __int64 v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int64 v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  int *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]
  __int64 *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  char *p_ProcessHandleCount; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  PVOID *v60; // [rsp+1A8h] [rbp+A0h]
  __int64 v61; // [rsp+1B0h] [rbp+A8h]
  PVOID *v62; // [rsp+1B8h] [rbp+B0h]
  __int64 v63; // [rsp+1C0h] [rbp+B8h]
  _QWORD *Sid; // [rsp+1C8h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+C8h]
  wchar_t *Buffer; // [rsp+1D8h] [rbp+D0h]
  __int64 v67; // [rsp+1E0h] [rbp+D8h]
  __int64 *v68; // [rsp+1E8h] [rbp+E0h]
  __int64 v69; // [rsp+1F0h] [rbp+E8h]
  int *v70; // [rsp+1F8h] [rbp+F0h]
  __int64 v71; // [rsp+200h] [rbp+F8h]
  int *v72; // [rsp+208h] [rbp+100h]
  __int64 v73; // [rsp+210h] [rbp+108h]
  unsigned int *v74; // [rsp+218h] [rbp+110h]
  __int64 v75; // [rsp+220h] [rbp+118h]
  unsigned int *v76; // [rsp+228h] [rbp+120h]
  unsigned int v77; // [rsp+230h] [rbp+128h]
  int v78; // [rsp+234h] [rbp+12Ch]
  wchar_t pszDest[16]; // [rsp+238h] [rbp+130h] BYREF

  v34 = 0;
  LODWORD(v35) = 0;
  v27 = 0LL;
  ProcessHandleCount = 0;
  v37 = 0LL;
  v38 = 0LL;
  result = (unsigned int)memset(v46, 0, 0x68uLL);
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
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
      v39 = *(_DWORD *)(a1 + 1088);
      v11 = 3;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v39;
      v48 = a1 + 2296;
      v50 = a1 + 1128;
      v49 = 8LL;
      v51 = 8LL;
      if ( ((a5 - 769) & 0xFFFD) != 0 )
      {
        if ( a5 != 770 )
          return EtwWrite(EtwpPsProvRegHandle, v10, 0LL, v11, &UserData);
        v28 = 0LL;
        PsQueryStatisticsProcess(a1, v46);
        v53 = 8LL;
        v52 = (int *)(a1 + 2112);
        v54 = (unsigned __int64 *)(a1 + 2004);
        v55 = 4LL;
        v19 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
        if ( SeQueryInformationToken(v19, TokenElevationType, &v28) >= 0 )
        {
          if ( *(_DWORD *)v28 == 1 )
          {
            v36 = 0LL;
            if ( SeQueryInformationToken(v19, TokenElevation, &v36) >= 0 )
              LODWORD(v27) = *(_DWORD *)v36 != 0 ? 1 : 4;
            if ( v36 )
              ExFreePoolWithTag(v36, 0);
          }
          else
          {
            LODWORD(v27) = *(_DWORD *)v28;
          }
        }
        ObFastDereferenceObject((signed __int64 *)(a1 + 1208), (unsigned __int64)v19, 0x746C6644u);
        if ( v28 )
          ExFreePoolWithTag(v28, 0);
        v57 = 4LL;
        v56 = &v27;
        ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
        v59 = 4LL;
        p_ProcessHandleCount = (char *)&ProcessHandleCount;
        v37 = *(_QWORD *)(a1 + 1608);
        v37 <<= 12;
        v60 = (PVOID *)&v37;
        v38 = *(_QWORD *)(a1 + 1616);
        v38 <<= 12;
        v62 = (PVOID *)&v38;
        Sid = &v46[3];
        v20 = v46[5];
        if ( HIDWORD(v46[5]) )
          v20 = -1;
        v61 = 8LL;
        v30 = v20;
        Buffer = (wchar_t *)&v30;
        v21 = v46[6];
        if ( HIDWORD(v46[6]) )
          v21 = -1;
        v63 = 8LL;
        v31 = v21;
        v22 = v46[8] >> 10;
        v68 = (__int64 *)&v31;
        v46[8] = v22;
        v65 = 8LL;
        if ( HIDWORD(v22) )
          LODWORD(v22) = -1;
        v70 = &v32;
        v32 = v22;
        v46[9] >>= 10;
        v23 = v46[9];
        v67 = 4LL;
        v69 = 4LL;
        if ( HIDWORD(v46[9]) )
          v23 = -1;
        v72 = &v33;
        v24 = a1 + 1832;
        v71 = 4LL;
        v25 = a1 + 1448;
        v74 = (unsigned int *)v24;
        v76 = (unsigned int *)v25;
        v26 = -1LL;
        v33 = v23;
        v73 = 4LL;
        v75 = 4LL;
        do
          ++v26;
        while ( *(_BYTE *)(v25 + v26) );
        v18 = v26 + 1;
      }
      else
      {
        v12 = *(void **)(a1 + 1344);
        v41 = -1LL;
        LODWORD(v36) = -1;
        v34 = *(_DWORD *)(a1 + 1344);
        LODWORD(v28) = -1;
        v52 = &v34;
        Process = 0LL;
        TokenInformation = 0LL;
        P = 0LL;
        IntegritySA = 0LL;
        v53 = 4LL;
        if ( PsLookupProcessByProcessId(v12, &Process) >= 0 )
        {
          v41 = Process[2].Affinity.StaticBitmap[6];
          ObfDereferenceObject(Process);
        }
        v55 = 8LL;
        v54 = &v41;
        LODWORD(v35) = MmGetSessionId(a1);
        v13 = 1;
        v57 = 4LL;
        v56 = &v35;
        if ( (a2 & 1) == 0 )
        {
          v11 = 2;
          v13 = HIDWORD(v27);
        }
        v59 = 4LL;
        if ( (a2 & 8) != 0 )
          v13 = v11;
        p_ProcessHandleCount = (char *)&v27 + 4;
        HIDWORD(v27) = v13;
        v14 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
        if ( SeQueryInformationToken(v14, TokenElevationType, &TokenInformation) >= 0 )
          LODWORD(v36) = *(_DWORD *)TokenInformation;
        v61 = 4LL;
        v60 = &v36;
        if ( TokenInformation )
          ExFreePoolWithTag(TokenInformation, 0);
        if ( SeQueryInformationToken(v14, TokenElevation, &P) >= 0 )
          LODWORD(v28) = *(_DWORD *)P;
        v63 = 4LL;
        v62 = &v28;
        if ( P )
          ExFreePoolWithTag(P, 0);
        SeQueryTokenIntegrity(v14, &IntegritySA);
        v15 = *((unsigned __int8 *)IntegritySA.Sid + 1);
        Sid = IntegritySA.Sid;
        v65 = (unsigned int)(4 * v15 + 8);
        ObFastDereferenceObject((signed __int64 *)(a1 + 1208), (unsigned __int64)v14, 0x746C6644u);
        p_DestinationString = *(UNICODE_STRING **)(a1 + 1472);
        if ( !p_DestinationString || !p_DestinationString->Length )
        {
          RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", a1 + 1448);
          RtlInitUnicodeString(&DestinationString, pszDest);
          p_DestinationString = &DestinationString;
        }
        Length = p_DestinationString->Length;
        Buffer = p_DestinationString->Buffer;
        v68 = &EtwpNull;
        v72 = a4 + 1;
        v74 = a3 + 4;
        v75 = *a3;
        v76 = a3 + 68;
        v18 = a3[2];
        v67 = Length;
        v69 = 2LL;
        v70 = a4;
        v71 = 4LL;
        v73 = 4LL;
      }
      v11 = 16;
      v78 = 0;
      v77 = v18;
      return EtwWrite(EtwpPsProvRegHandle, v10, 0LL, v11, &UserData);
  }
  return result;
}
