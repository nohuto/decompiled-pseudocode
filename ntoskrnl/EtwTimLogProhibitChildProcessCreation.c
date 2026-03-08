/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x1409E6C18
 * Callers:
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     EtwpTiFillProcessIdentity @ 0x140367BF4 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140367E98 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x14071DB40 (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r14
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // r15
  int v12; // r9d
  __int64 v13; // r11
  ULONG v14; // r12d
  int v15; // eax
  const wchar_t *v16; // rcx
  int v17; // eax
  __int16 v18; // bx
  int v19; // eax
  int v20; // eax
  ULONGLONG v21; // r10
  int v22; // r8d
  unsigned int v23; // r8d
  ULONGLONG v24; // r13
  __int16 v25; // ax
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rdx
  unsigned int v29; // r9d
  unsigned __int16 *v30; // r14
  ULONG v31; // r15d
  __int64 v32; // rax
  unsigned int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rcx
  const EVENT_DESCRIPTOR *v36; // rdx
  ULONG v37; // r9d
  int v38; // r15d
  wchar_t *v39; // rbx
  char v40; // [rsp+38h] [rbp-D0h]
  _WORD v41[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v42; // [rsp+40h] [rbp-C8h] BYREF
  int v43; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v44; // [rsp+48h] [rbp-C0h] BYREF
  int v45; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v49; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v50; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v52; // [rsp+B8h] [rbp-50h]
  __int64 v53; // [rsp+C0h] [rbp-48h]
  __int64 *v54; // [rsp+C8h] [rbp-40h]
  __int64 v55; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v56; // [rsp+D8h] [rbp-30h]
  __int64 v57; // [rsp+E0h] [rbp-28h] BYREF
  wchar_t *v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v60; // [rsp+F8h] [rbp-10h]
  __int64 v61; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *p_DestinationString; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h] BYREF
  int *v64; // [rsp+118h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+18h]
  wchar_t *v66; // [rsp+128h] [rbp+20h]
  int v67; // [rsp+130h] [rbp+28h] BYREF
  int v68; // [rsp+134h] [rbp+2Ch]
  _DWORD *v69; // [rsp+138h] [rbp+30h]
  __int64 v70; // [rsp+140h] [rbp+38h]
  wchar_t *v71; // [rsp+148h] [rbp+40h]
  _DWORD v72[2]; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  const wchar_t *v74; // [rsp+168h] [rbp+60h]
  int v75; // [rsp+170h] [rbp+68h]
  int v76; // [rsp+174h] [rbp+6Ch]
  __int16 *v77; // [rsp+178h] [rbp+70h]
  __int64 v78; // [rsp+180h] [rbp+78h]
  const wchar_t *v79; // [rsp+188h] [rbp+80h]
  int v80; // [rsp+190h] [rbp+88h]
  int v81; // [rsp+194h] [rbp+8Ch]
  __int64 v82[24]; // [rsp+198h] [rbp+90h] BYREF

  v4 = *(__int64 **)(a2 + 1472);
  v5 = &EmptyUnicodeString;
  v45 = a1;
  v40 = 1;
  v48 = 0LL;
  if ( v4 )
    v5 = v4;
  DestinationString = (unsigned __int64)v5;
  DestinationString_8 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  EtwpQueryProcessCommandLine(a2, (__int64)&DestinationString_8);
  Length = DestinationString_8.Length;
  if ( !DestinationString_8.Length )
  {
    RtlInitUnicodeString(&DestinationString_8, L"Unknown");
    Length = DestinationString_8.Length;
    v40 = 0;
  }
  if ( !a3 || !a3->Length )
  {
    RtlInitUnicodeString(&v49, L"Unknown");
    a3 = &v49;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v50, L"Unknown");
    a4 = &v50;
  }
  Buffer = DestinationString_8.Buffer;
  if ( a1 == 2 && (unsigned int)dword_140C042B8 > 5 && tlgKeywordOn((__int64)&dword_140C042B8, 0x200000000001LL) )
  {
    HIDWORD(v55) = v12;
    v52 = &v55;
    v54 = (__int64 *)v5[1];
    LODWORD(v55) = *(unsigned __int16 *)v5;
    v56 = &v59;
    LODWORD(v59) = Length;
    v60 = &v63;
    p_DestinationString = (unsigned __int64 *)a3->Buffer;
    LODWORD(v63) = a3->Length;
    v64 = &v67;
    v66 = a4->Buffer;
    v67 = a4->Length;
    HIDWORD(v59) = v12;
    HIDWORD(v63) = v12;
    v68 = v12;
    v53 = v13;
    v57 = v13;
    v58 = Buffer;
    v61 = v13;
    v65 = v13;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C042B8, (unsigned __int8 *)word_140035902, 0LL, 0LL, 0xAu, v51);
  }
  v14 = 12;
  if ( v5 && *(_WORD *)v5 )
  {
    v41[0] = *(_WORD *)v5 >> 1;
    UserData.Ptr = (ULONGLONG)v41;
    *(_QWORD *)&UserData.Size = 2LL;
    v15 = *(unsigned __int16 *)v5;
    v16 = (const wchar_t *)v5[1];
  }
  else
  {
    v41[0] = 6;
    UserData.Ptr = (ULONGLONG)v41;
    v16 = L"(null)";
    v15 = 12;
    *(_QWORD *)&UserData.Size = 2LL;
  }
  v75 = v15;
  v77 = &v42;
  v74 = v16;
  v76 = 0;
  v78 = 2LL;
  if ( Length )
  {
    v17 = Length;
    v18 = Length >> 1;
    v79 = Buffer;
  }
  else
  {
    v79 = L"(null)";
    v17 = 12;
    v18 = 6;
  }
  v42 = v18;
  v80 = v17;
  v81 = 0;
  v19 = EtwpTiFillProcessIdentity(v82, a2, &v48);
  v20 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v19 + 4)), (__int64)KeGetCurrentThread());
  v23 = v20 + v22;
  if ( a3 && a3->Length )
  {
    v24 = (ULONGLONG)a3->Buffer;
    v25 = a3->Length >> 1;
    v14 = a3->Length;
  }
  else
  {
    v25 = 6;
    v24 = v21;
  }
  LOWORD(v43) = v25;
  v26 = 16LL * v23;
  v27 = v23 + 1;
  *(ULONGLONG *)((char *)&UserData.Ptr + v26) = (ULONGLONG)&v43;
  v28 = 16LL * v27;
  *(ULONG *)((char *)&UserData.Size + v26) = 2;
  v29 = v27 + 1;
  *(ULONG *)((char *)&UserData.Reserved + v26) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v28) = v24;
  *(ULONG *)((char *)&UserData.Size + v28) = v14;
  *(ULONG *)((char *)&UserData.Reserved + v28) = 0;
  v30 = (unsigned __int16 *)DestinationString;
  if ( a4 && a4->Length )
  {
    v21 = (ULONGLONG)a4->Buffer;
    v31 = a4->Length;
    v44 = a4->Length >> 1;
    v32 = 16LL * v29;
    v33 = v27 + 2;
  }
  else
  {
    v31 = 12;
    v44 = 6;
    v34 = v29;
    v33 = v27 + 2;
    v32 = 16 * v34;
  }
  v35 = 16LL * v33;
  *(ULONGLONG *)((char *)&UserData.Ptr + v32) = (ULONGLONG)&v44;
  v36 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  v37 = v33 + 1;
  *(ULONG *)((char *)&UserData.Size + v32) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v32) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v35) = v21;
  *(ULONG *)((char *)&UserData.Size + v35) = v31;
  *(ULONG *)((char *)&UserData.Reserved + v35) = 0;
  v38 = v45;
  if ( v45 != 1 )
    v36 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  EtwWrite(EtwSecurityMitigationsRegHandle, v36, 0LL, v37, &UserData);
  v39 = DestinationString_8.Buffer;
  if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
  {
    v45 = v38;
    v52 = (__int64 *)&v45;
    v53 = 4LL;
    v54 = &v57;
    v56 = (__int64 *)*((_QWORD *)v30 + 1);
    v57 = *v30;
    v58 = (wchar_t *)&v61;
    v61 = DestinationString_8.Length;
    DestinationString = v48;
    p_DestinationString = &DestinationString;
    v64 = &v67;
    v66 = a3->Buffer;
    v67 = a3->Length;
    v69 = v72;
    v71 = a4->Buffer;
    v72[0] = a4->Length;
    v55 = 2LL;
    v59 = 2LL;
    v60 = (__int64 *)v39;
    v63 = 8LL;
    v65 = 2LL;
    v68 = 0;
    v70 = 2LL;
    v72[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C06690, (unsigned __int8 *)word_14003586A, 0LL, 0LL, 0xCu, v51);
  }
  if ( v40 )
    ExFreePoolWithTag(v39, 0);
}
