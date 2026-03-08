/*
 * XREFs of PopDiagTraceExecutePowerAction @ 0x14098BC1C
 * Callers:
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessImageFileName @ 0x1402E1550 (PsGetProcessImageFileName.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char PopDiagTraceExecutePowerAction(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        ...)
{
  __int64 ProcessImageFileName; // rax
  const CHAR *v13; // rsi
  __int64 v14; // rbx
  int v15; // ebx
  REGHANDLE v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // r10
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  BOOL v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+64h] [rbp-A4h] BYREF
  int v34; // [rsp+68h] [rbp-A0h] BYREF
  BOOL v35; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  int *v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  int *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  int *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  int *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  int *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  int *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  int *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  int *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  BOOL *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  int *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  const CHAR *v63; // [rsp+158h] [rbp+50h]
  int v64; // [rsp+160h] [rbp+58h]
  int v65; // [rsp+164h] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+168h] [rbp+60h] BYREF
  int *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  int *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  int *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]
  int *v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]
  int *v75; // [rsp+1C8h] [rbp+C0h]
  __int64 v76; // [rsp+1D0h] [rbp+C8h]
  int *v77; // [rsp+1D8h] [rbp+D0h]
  __int64 v78; // [rsp+1E0h] [rbp+D8h]
  int *v79; // [rsp+1E8h] [rbp+E0h]
  __int64 v80; // [rsp+1F0h] [rbp+E8h]
  int *v81; // [rsp+1F8h] [rbp+F0h]
  __int64 v82; // [rsp+200h] [rbp+F8h]
  int *v83; // [rsp+208h] [rbp+100h]
  __int64 v84; // [rsp+210h] [rbp+108h]
  int *v85; // [rsp+218h] [rbp+110h]
  __int64 v86; // [rsp+220h] [rbp+118h]
  int *v87; // [rsp+228h] [rbp+120h]
  __int64 v88; // [rsp+230h] [rbp+128h]
  BOOL *v89; // [rsp+238h] [rbp+130h]
  __int64 v90; // [rsp+240h] [rbp+138h]
  __int64 *v91; // [rsp+248h] [rbp+140h]
  __int64 v92; // [rsp+250h] [rbp+148h]
  char v93[16]; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v94; // [rsp+268h] [rbp+160h]
  __int64 v95; // [rsp+270h] [rbp+168h]
  int v96; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v97; // [rsp+2D0h] [rbp+1C8h] BYREF
  int v98; // [rsp+2D8h] [rbp+1D0h] BYREF
  int v99; // [rsp+2E0h] [rbp+1D8h] BYREF

  v99 = a4;
  v98 = a3;
  v97 = a2;
  v96 = a1;
  v23 = a12 != 0;
  ProcessImageFileName = PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
  v13 = (const CHAR *)ProcessImageFileName;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_BYTE *)(ProcessImageFileName + v14) );
  v15 = v14 + 1;
  v22 = v15;
  if ( PopDiagHandleRegistered )
  {
    v16 = PopDiagHandle;
    LOBYTE(ProcessImageFileName) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_EXECUTE_POWER_ACTION);
    if ( (_BYTE)ProcessImageFileName )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v96;
      v40 = 4LL;
      v39 = &v97;
      v42 = 4LL;
      v41 = &v98;
      v44 = 4LL;
      v43 = &v99;
      v46 = 4LL;
      v45 = &a5;
      v47 = &a6;
      v49 = &a7;
      v51 = &a8;
      v53 = &a9;
      v55 = &a10;
      v57 = &a11;
      v59 = &v23;
      v61 = &v22;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v63 = v13;
      v64 = v15;
      v65 = 0;
      LOBYTE(ProcessImageFileName) = EtwWrite(v16, &POP_ETW_EVENT_EXECUTE_POWER_ACTION, 0LL, 0xEu, &UserData);
      v15 = v22;
    }
  }
  if ( dword_140C03928 )
  {
    LOBYTE(ProcessImageFileName) = tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL);
    if ( (_BYTE)ProcessImageFileName )
    {
      if ( v18 > 5 )
      {
        LOBYTE(ProcessImageFileName) = tlgKeywordOn(v19, v17);
        if ( (_BYTE)ProcessImageFileName )
        {
          v24 = v96;
          v68 = 4LL;
          v67 = &v24;
          v25 = v97;
          v69 = &v25;
          v26 = v98;
          v71 = &v26;
          v27 = v99;
          v73 = &v27;
          v28 = a5;
          v75 = &v28;
          v29 = a6;
          v77 = &v29;
          v30 = a7;
          v79 = &v30;
          v31 = a8;
          v81 = &v31;
          v32 = a9;
          v83 = &v32;
          v33 = a10;
          v85 = &v33;
          v34 = a11;
          v87 = &v34;
          v35 = v23;
          v89 = &v35;
          v91 = &v36;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v88 = 4LL;
          v90 = 4LL;
          LODWORD(v36) = v15;
          v92 = 4LL;
          tlgCreate1Sz_char((__int64)v93, v13);
          v37 = 0x1000000LL;
          v94 = &v37;
          v95 = 8LL;
          LOBYTE(ProcessImageFileName) = tlgWriteTransfer_EtwWriteTransfer(
                                           v20,
                                           (unsigned __int8 *)byte_14002DFA3,
                                           0LL,
                                           0LL,
                                           0x11u,
                                           &v66);
        }
      }
    }
  }
  return ProcessImageFileName;
}
