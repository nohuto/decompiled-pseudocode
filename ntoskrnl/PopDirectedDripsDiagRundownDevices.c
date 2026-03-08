/*
 * XREFs of PopDirectedDripsDiagRundownDevices @ 0x14099B8B8
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x14099B298 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14099AEF4 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14099AF60 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14099B190 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x14099C034 (PopDirectedDripsDiagSanitizeHardwareId.c)
 */

void PopDirectedDripsDiagRundownDevices()
{
  UNICODE_STRING *v0; // r12
  unsigned int *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // r8
  int *v7; // rdi
  UNICODE_STRING *v8; // r15
  UNICODE_STRING *v9; // r13
  UNICODE_STRING *v10; // r14
  UNICODE_STRING *v11; // rsi
  unsigned __int16 *v12; // r9
  REGHANDLE v13; // r12
  int Length; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r11d
  _QWORD *v19; // r10
  int v20; // r8d
  _DWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  ULONGLONG v24; // rax
  __int64 v25; // rcx
  ULONGLONG v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  _BYTE v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+3Ch] [rbp-CCh] BYREF
  int v33; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+44h] [rbp-C4h] BYREF
  int v35; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING *v38; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-A0h] BYREF
  int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+88h] [rbp-80h] BYREF
  int *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  _DWORD *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  wchar_t *Buffer; // [rsp+C8h] [rbp-40h]
  _DWORD v52[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  __int64 v55; // [rsp+E8h] [rbp-20h]
  _DWORD v56[2]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  wchar_t *v59; // [rsp+108h] [rbp+0h]
  _DWORD v60[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  wchar_t *v63; // [rsp+128h] [rbp+20h]
  _DWORD v64[2]; // [rsp+130h] [rbp+28h] BYREF
  unsigned int *v65; // [rsp+138h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+38h]
  unsigned int *v67; // [rsp+148h] [rbp+40h]
  __int64 v68; // [rsp+150h] [rbp+48h]
  unsigned int *v69; // [rsp+158h] [rbp+50h]
  __int64 v70; // [rsp+160h] [rbp+58h]
  int *v71; // [rsp+168h] [rbp+60h]
  __int64 v72; // [rsp+170h] [rbp+68h]
  _DWORD *v73; // [rsp+178h] [rbp+70h]
  __int64 v74; // [rsp+180h] [rbp+78h]
  wchar_t *v75; // [rsp+188h] [rbp+80h]
  _DWORD v76[2]; // [rsp+190h] [rbp+88h] BYREF
  __int64 *v77; // [rsp+198h] [rbp+90h]
  __int64 v78; // [rsp+1A0h] [rbp+98h]
  UNICODE_STRING **v79; // [rsp+1A8h] [rbp+A0h]
  __int64 v80; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v81; // [rsp+1B8h] [rbp+B0h]
  __int64 v82; // [rsp+1C0h] [rbp+B8h]
  wchar_t *v83; // [rsp+1C8h] [rbp+C0h]
  _DWORD v84[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 *v85; // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  _QWORD v87[28]; // [rsp+1E8h] [rbp+E0h] BYREF

  v0 = &PopDirectedDripsDiagEmptyString;
  v31[0] = PopWnfCsEnterScenarioId;
  v32 = 0;
  v36 = 0;
  LODWORD(v37) = 0;
  v34 = 0;
  v35 = 0;
  v43 = PopWnfCsEnterScenarioId;
  while ( 1 )
  {
    v1 = (unsigned int *)qword_140C38AB0;
    if ( qword_140C38AB0 == &qword_140C38AB0 )
      break;
    if ( *((PVOID **)qword_140C38AB0 + 1) != &qword_140C38AB0
      || (v2 = *(_QWORD *)qword_140C38AB0, *(PVOID *)(*(_QWORD *)qword_140C38AB0 + 8LL) != qword_140C38AB0) )
    {
      __fastfail(3u);
    }
    qword_140C38AB0 = *(PVOID *)qword_140C38AB0;
    v3 = 0LL;
    *(_QWORD *)(v2 + 8) = &qword_140C38AB0;
    v4 = 0LL;
    v32 = 0;
    v5 = v1[39];
    if ( v5 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong((__int64)v87, (__int64)L"DFX Transition Count", v5);
      v3 = (unsigned int)(v32 + 1);
      v32 = v3;
      v4 = (unsigned int)v3;
    }
    v6 = v1[40];
    if ( (_DWORD)v6 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong(
        (__int64)&v87[7 * (unsigned int)v4],
        (__int64)L"PS4 Transition Count",
        v6);
      v3 = (unsigned int)(v32 + 1);
      v32 = v3;
      v4 = (unsigned int)v3;
    }
    v7 = (int *)(v1 + 38);
    if ( *((_WORD *)v1 + 76) )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v87[7 * (unsigned int)v4], (__int64)L"Problem Device");
      v3 = (unsigned int)(v32 + 1);
      v32 = v3;
      v4 = (unsigned int)v3;
    }
    if ( (*v7 & 0x10000) != 0 )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean(
        (__int64)&v87[7 * (unsigned int)v4],
        (__int64)L"Initiated PS4 Transition");
      v3 = (unsigned int)++v32;
    }
    if ( (*v7 & 0x40000) != 0 )
    {
      v8 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v1 + 7) )
        v8 = (UNICODE_STRING *)(v1 + 12);
      v9 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v1 + 9) )
        v9 = (UNICODE_STRING *)(v1 + 16);
      v10 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v1 + 11) )
        v10 = (UNICODE_STRING *)(v1 + 20);
      v11 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v1 + 13) )
        v11 = (UNICODE_STRING *)(v1 + 24);
      if ( *((_QWORD *)v1 + 15) )
        v38 = (UNICODE_STRING *)(v1 + 28);
      else
        v38 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v1 + 17) )
        v0 = (UNICODE_STRING *)(v1 + 32);
      PopDirectedDripsDiagSanitizeHardwareId(v1 + 16, v4, v6, v3);
      if ( (unsigned int)dword_140D53980 > 5 && tlgKeywordOn((__int64)&dword_140D53980, 0x400000000000LL) )
      {
        v47 = &v33;
        v49 = v52;
        Buffer = v8->Buffer;
        v52[0] = v8->Length;
        v53 = v56;
        v55 = *((_QWORD *)v12 + 1);
        v56[0] = *v12;
        v57 = v60;
        v59 = v10->Buffer;
        v60[0] = v10->Length;
        v61 = v64;
        v63 = v11->Buffer;
        v64[0] = v11->Length;
        v39 = v1[37];
        v65 = &v39;
        v40 = v1[39];
        v67 = &v40;
        v41 = v1[40];
        v69 = &v41;
        v42 = *v7;
        v71 = &v42;
        v73 = v76;
        LOBYTE(v33) = v31[0];
        v48 = 1LL;
        v50 = 2LL;
        v52[1] = 0;
        v75 = v38->Buffer;
        v76[0] = v38->Length;
        v44 = v43;
        v77 = &v44;
        LODWORD(v38) = v1[6];
        v79 = &v38;
        v81 = v84;
        v83 = v0->Buffer;
        v54 = 2LL;
        v56[1] = 0;
        v58 = 2LL;
        v60[1] = 0;
        v62 = 2LL;
        v64[1] = 0;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 2LL;
        v76[1] = 0;
        v78 = 8LL;
        v80 = 4LL;
        v82 = 2LL;
        v84[0] = v0->Length;
        v84[1] = 0;
        v85 = &v45;
        v45 = 0x1000000LL;
        v86 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140D53980,
          (unsigned __int8 *)word_140031A22,
          0LL,
          0LL,
          0x16u,
          &v46);
      }
      if ( PopDiagHandleRegistered )
      {
        v13 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS) )
        {
          *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
          PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v31;
          qword_140C38D18 = 8LL;
          qword_140C38D10 = (__int64)(v1 + 4);
          v34 = v8->Length >> 1;
          qword_140C38D20 = (__int64)&v34;
          qword_140C38D28 = 4LL;
          Length = v8->Length;
          qword_140C38D30 = (__int64)v8->Buffer;
          dword_140C38D38 = Length;
          dword_140C38D3C = 0;
          v35 = v9->Length >> 1;
          qword_140C38D40 = (__int64)&v35;
          qword_140C38D48 = 4LL;
          v15 = v9->Length;
          qword_140C38D50 = (__int64)v9->Buffer;
          dword_140C38D58 = v15;
          dword_140C38D5C = 0;
          v36 = v10->Length >> 1;
          qword_140C38D60 = (__int64)&v36;
          qword_140C38D68 = 4LL;
          v16 = v10->Length;
          qword_140C38D70 = (__int64)v10->Buffer;
          dword_140C38D78 = v16;
          dword_140C38D7C = 0;
          LODWORD(v37) = v11->Length >> 1;
          qword_140C38D80 = (__int64)&v37;
          qword_140C38D88 = 4LL;
          v17 = v11->Length;
          qword_140C38D90 = (__int64)v11->Buffer;
          qword_140C38DA0 = (__int64)(v1 + 37);
          qword_140C38DB0 = (__int64)(v1 + 39);
          dword_140C38D98 = v17;
          qword_140C38DC0 = (__int64)(v1 + 40);
          dword_140C38D9C = 0;
          qword_140C38DA8 = 4LL;
          qword_140C38DB8 = 4LL;
          qword_140C38DC8 = 4LL;
          qword_140C38DD0 = (__int64)(v1 + 38);
          qword_140C38DD8 = 4LL;
          EtwWrite(v13, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS, 0LL, 0xEu, &PopDirectedDripsDiagEventData);
        }
      }
      LODWORD(v3) = v32;
      v0 = &PopDirectedDripsDiagEmptyString;
    }
    if ( PopDiagSleepStudyHandleRegistered && (_DWORD)v3 )
    {
      v18 = 0;
      v19 = v87;
      do
      {
        v20 = 5 * v18++;
        v21 = v19 + 2;
        v22 = 2LL * (unsigned int)(v20 + 2);
        v23 = 2LL * (unsigned int)(v20 + 3);
        *(&PopDirectedDripsDiagEventData.Ptr + v22) = (ULONGLONG)(v1 + 8);
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v22) = 16LL;
        v24 = v19[1];
        *(&PopDirectedDripsDiagEventData.Ptr + v23) = (ULONGLONG)v19;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v23) = 4LL;
        v25 = 2LL * (unsigned int)(v20 + 4);
        *(&PopDirectedDripsDiagEventData.Ptr + v25) = v24;
        LODWORD(v24) = *(_DWORD *)v19;
        *(&PopDirectedDripsDiagEventData.Reserved + 2 * v25) = 0;
        *(&PopDirectedDripsDiagEventData.Size + 2 * v25) = 2 * v24;
        v26 = (ULONGLONG)v19 + 20;
        v19 += 7;
        v27 = 2LL * (unsigned int)(v20 + 5);
        *(&PopDirectedDripsDiagEventData.Ptr + v27) = (ULONGLONG)v21;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v27) = 4LL;
        v28 = 2LL * (unsigned int)(v20 + 6);
        *(&PopDirectedDripsDiagEventData.Ptr + v28) = v26;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v28) = (unsigned int)(2 * *v21);
      }
      while ( v18 < (unsigned int)v3 );
      *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
      PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v31;
      qword_140C38D18 = 4LL;
      qword_140C38D10 = (__int64)&v32;
      v29 = 2LL * (unsigned int)(v20 + 7);
      *(&PopDirectedDripsDiagEventData.Ptr + v29) = (ULONGLONG)&v43;
      *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v29) = 8LL;
      EtwWrite(
        PopDiagSleepStudyHandle,
        &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
        0LL,
        5 * v3 + 3,
        &PopDirectedDripsDiagEventData);
    }
    v30 = *((_QWORD *)v1 + 2);
    if ( v30 )
    {
      *(_QWORD *)(v30 + 776) = 0LL;
      *((_QWORD *)v1 + 2) = 0LL;
    }
    PopDirectedDripsDiagFreeDeviceDiagnostic(v1);
  }
}
