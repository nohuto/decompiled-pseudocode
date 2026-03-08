/*
 * XREFs of EtwTimLogProhibitLowILImageMap @ 0x1409E71A4
 * Callers:
 *     MiAllowImageMap @ 0x1407D35A0 (MiAllowImageMap.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     EtwpTiFillProcessIdentity @ 0x140367BF4 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140367E98 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x14071DB40 (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogProhibitLowILImageMap(int a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 *v4; // rdi
  const wchar_t *v5; // r15
  __int64 *v8; // rax
  ULONG v9; // esi
  unsigned __int16 v10; // ax
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  __int16 v17; // r10
  int v18; // r8d
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rcx
  const EVENT_DESCRIPTOR *v22; // rdx
  void *v23; // rsi
  _WORD v24[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+68h] [rbp-A0h] BYREF
  int *v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  _DWORD *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  _DWORD v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  void *v40; // [rsp+C8h] [rbp-40h]
  _DWORD v41[2]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  _DWORD *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  __int64 v46; // [rsp+F8h] [rbp-10h]
  _DWORD v47[2]; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  const wchar_t *v49; // [rsp+118h] [rbp+10h]
  int v50; // [rsp+120h] [rbp+18h]
  int v51; // [rsp+124h] [rbp+1Ch]
  int *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  const wchar_t *v54; // [rsp+138h] [rbp+30h]
  int v55; // [rsp+140h] [rbp+38h]
  int v56; // [rsp+144h] [rbp+3Ch]
  _QWORD v57[20]; // [rsp+148h] [rbp+40h] BYREF

  v4 = &EmptyUnicodeString;
  v5 = L"(null)";
  v28 = 0LL;
  v8 = *(__int64 **)(a2 + 1472);
  v29 = 0LL;
  if ( v8 )
    v4 = v8;
  v9 = 12;
  v10 = *(_WORD *)v4;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v10 )
  {
    v24[0] = v10 >> 1;
    UserData.Ptr = (ULONGLONG)v24;
    v11 = *(unsigned __int16 *)v4;
    v12 = (const wchar_t *)v4[1];
  }
  else
  {
    v24[0] = 6;
    UserData.Ptr = (ULONGLONG)v24;
    v12 = L"(null)";
    v11 = 12;
  }
  v49 = v12;
  v51 = 0;
  v50 = v11;
  EtwpQueryProcessCommandLine(a2, (__int64)&v29);
  v53 = 2LL;
  v52 = &v25;
  if ( (_WORD)v29 )
  {
    v54 = (const wchar_t *)*((_QWORD *)&v29 + 1);
    v13 = (unsigned __int16)v29;
    v14 = (unsigned __int16)v29 >> 1;
  }
  else
  {
    v54 = L"(null)";
    v13 = 12;
    v14 = 6;
  }
  LOWORD(v25) = v14;
  v55 = v13;
  v56 = 0;
  v15 = EtwpTiFillProcessIdentity(v57, a2, &v28);
  v16 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v19 = v16 + v18;
  if ( a3 && *a3 )
  {
    v5 = (const wchar_t *)*((_QWORD *)a3 + 1);
    v9 = *a3;
    v26 = *a3 >> 1;
  }
  else
  {
    v26 = v17;
  }
  v20 = 16LL * v19;
  v21 = 16LL * (v19 + 1);
  *(ULONGLONG *)((char *)&UserData.Ptr + v20) = (ULONGLONG)&v26;
  v22 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_LOWIL_IMAGE_MAP;
  *(ULONG *)((char *)&UserData.Size + v20) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v20) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v21) = (ULONGLONG)v5;
  *(ULONG *)((char *)&UserData.Size + v21) = v9;
  *(ULONG *)((char *)&UserData.Reserved + v21) = 0;
  if ( a1 != 1 )
    v22 = &MITIGATION_ENFORCE_PROHIBIT_LOWIL_IMAGE_MAP;
  EtwWrite(EtwSecurityMitigationsRegHandle, v22, 0LL, v19 + 2, &UserData);
  v23 = (void *)*((_QWORD *)&v29 + 1);
  if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
  {
    v27 = a1;
    v32 = &v27;
    v33 = 4LL;
    v34 = v37;
    v36 = v4[1];
    v37[0] = *(unsigned __int16 *)v4;
    v38 = v41;
    v41[0] = (unsigned __int16)v29;
    v30 = v28;
    v42 = &v30;
    v44 = v47;
    v46 = *((_QWORD *)a3 + 1);
    v47[0] = *a3;
    v35 = 2LL;
    v37[1] = 0;
    v39 = 2LL;
    v40 = v23;
    v41[1] = 0;
    v43 = 8LL;
    v45 = 2LL;
    v47[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06690,
      (unsigned __int8 *)&dword_1400359E4,
      0LL,
      0LL,
      0xAu,
      &v31);
  }
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
}
