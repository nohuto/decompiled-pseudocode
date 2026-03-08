/*
 * XREFs of PpmEventTraceProfiles @ 0x140848900
 * Callers:
 *     PpmRegisterProfiles @ 0x140848708 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PpmEndProfileAccumulation @ 0x14099A27C (PpmEndProfileAccumulation.c)
 */

char __fastcall PpmEventTraceProfiles(char a1)
{
  _UNKNOWN **v1; // rax
  const EVENT_DESCRIPTOR *v3; // rdx
  __int64 *v4; // rdi
  unsigned __int8 v5; // bl
  STRSAFE_PCNZWCH *v6; // r11
  ULONGLONG *v7; // r11
  ULONGLONG v8; // r8
  ULONGLONG v9; // kr00_8
  const EVENT_DESCRIPTOR *v10; // rdx
  size_t pcchLength; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-61h] BYREF
  __int64 v16; // [rsp+58h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-49h] BYREF
  ULONGLONG *v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+80h] [rbp-31h]
  int v20; // [rsp+84h] [rbp-2Dh]
  ULONGLONG *v21; // [rsp+88h] [rbp-29h]
  int v22; // [rsp+90h] [rbp-21h]
  int v23; // [rsp+94h] [rbp-1Dh]
  char *v24; // [rsp+98h] [rbp-19h]
  int v25; // [rsp+A0h] [rbp-11h]
  int v26; // [rsp+A4h] [rbp-Dh]
  char *v27; // [rsp+A8h] [rbp-9h]
  int v28; // [rsp+B0h] [rbp-1h]
  int v29; // [rsp+B4h] [rbp+3h]
  ULONGLONG *v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+C0h] [rbp+Fh]
  int v32; // [rsp+C4h] [rbp+13h]
  unsigned __int64 *v33; // [rsp+C8h] [rbp+17h]
  int v34; // [rsp+D0h] [rbp+1Fh]
  int v35; // [rsp+D4h] [rbp+23h]
  unsigned __int64 *v36; // [rsp+D8h] [rbp+27h]
  int v37; // [rsp+E0h] [rbp+2Fh]
  int v38; // [rsp+E4h] [rbp+33h]
  unsigned __int64 *v39; // [rsp+E8h] [rbp+37h]
  int v40; // [rsp+F0h] [rbp+3Fh]
  int v41; // [rsp+F4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  pcchLength = 0LL;
  if ( PpmEtwRegistered )
  {
    v3 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
    if ( a1 )
      v3 = &PPM_ETW_PROCESSOR_PROFILE_RUNDOWN;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v1 )
    {
      v4 = PpmCurrentProfile;
      v5 = 0;
      v16 = MEMORY[0xFFFFF78000000008];
      PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
      while ( 1 )
      {
        RtlStringCchLengthW(*v6, 0x7FFFFFFFuLL, &pcchLength);
        v8 = *v7;
        UserData.Reserved = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        UserData.Ptr = v8;
        v19 = 1;
        v22 = 1;
        v25 = 4;
        UserData.Size = 2 * pcchLength + 2;
        v18 = v7 + 1;
        v21 = v7 + 4;
        v24 = (char *)v7 + 28;
        v27 = (char *)v7 + 12;
        v28 = 16;
        v13 = v7[117] / 0xA;
        v14 = v7[118] / 0xA;
        v9 = v7[119];
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v30 = v7 + 116;
        v33 = &v13;
        v36 = &v14;
        v39 = &v15;
        v15 = v9 / 0xA;
        v10 = &PPM_ETW_PROCESSOR_PROFILE_RUNDOWN;
        v31 = 8;
        v34 = 8;
        v37 = 8;
        v40 = 8;
        if ( !a1 )
          v10 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
        LOBYTE(v1) = EtwWrite(PpmEtwHandle, v10, 0LL, 9u, &UserData);
        if ( v5 == PpmProfileCount )
          break;
        v6 = (STRSAFE_PCNZWCH *)(PpmProfiles + 960LL * v5++);
      }
      v4[115] = v16;
    }
  }
  return (char)v1;
}
