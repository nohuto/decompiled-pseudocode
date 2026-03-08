/*
 * XREFs of ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C020E1FC
 * Callers:
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020DE30 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020DEBC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C00271D8 (wcscmp_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@34@Z @ 0x1C005DDCC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@343@Z @ 0x1C005DED8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01EDDF0 (DxgkRetrieveStringFromRegistry.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C020E618 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 */

__int64 __fastcall FindBlockListStrings(
        PCWSTR SourceString,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned int *a6,
        struct _UNICODE_STRING *a7)
{
  unsigned int *v7; // rdi
  unsigned int v8; // r15d
  struct _UNICODE_STRING *v9; // rsi
  unsigned int v10; // r14d
  NTSTATUS v11; // r12d
  int v12; // ebx
  __int64 v13; // r13
  ULONG v14; // eax
  ULONG v15; // ecx
  unsigned __int16 *v16; // r9
  unsigned __int64 v17; // rax
  NTSTATUS v19; // eax
  int v20; // r10d
  __int64 v21; // r15
  unsigned int v22; // edi
  __int64 v23; // r15
  unsigned __int16 v24; // ax
  unsigned __int64 v25; // r14
  wchar_t *Buffer; // rsi
  unsigned __int64 v27; // rax
  const wchar_t *v28; // rcx
  __int64 v29; // rbx
  int v30; // eax
  unsigned int v31; // edi
  unsigned __int16 v32; // ax
  unsigned __int64 v33; // rsi
  wchar_t *v34; // r14
  unsigned __int64 v35; // rax
  const wchar_t *v36; // rcx
  __int64 v37; // rbx
  int v38; // eax
  char v39; // si
  unsigned int v40; // edi
  unsigned __int16 v41; // ax
  unsigned __int64 v42; // r14
  wchar_t *v43; // r15
  unsigned __int64 v44; // rax
  const wchar_t *v45; // rcx
  __int64 v46; // rbx
  int v47; // eax
  char v48; // r9
  unsigned int v49; // edi
  __int64 v50; // rbx
  enum _QAI_DRIVERVERSION v51; // esi
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int8 v59[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v60; // [rsp+54h] [rbp-ACh]
  unsigned __int32 v61; // [rsp+58h] [rbp-A8h]
  enum _QAI_DRIVERVERSION v62; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-A0h] BYREF
  enum _QAI_DRIVERVERSION v64; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  ULONG v66; // [rsp+6Ch] [rbp-94h]
  void *KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v68; // [rsp+80h] [rbp-80h] BYREF
  int v69; // [rsp+90h] [rbp-70h] BYREF
  ULONG v70; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 *v71; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *v72; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v73; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int *v74; // [rsp+B0h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD KeyInformation[2]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v79; // [rsp+128h] [rbp+28h]

  v7 = a6;
  v8 = a2;
  v9 = a7;
  v61 = a2;
  v10 = a3;
  v71 = a4;
  v60 = a3;
  v74 = a6;
  v72 = a7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v79 = 0LL;
  v11 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v11 >= 0 )
  {
    if ( (_DWORD)v79 )
    {
      v12 = DWORD1(v79) + 18;
      v13 = operator new[]((unsigned int)(DWORD1(v79) + 18), 0x4B677844u, 256LL);
      if ( v13 )
      {
        v14 = 0;
        v66 = 0;
        if ( (_DWORD)v79 )
        {
          v15 = v12 - 2;
          v70 = v12 - 2;
          do
          {
            v11 = ZwEnumerateValueKey(KeyHandle, v14, KeyValueBasicInformation, (PVOID)v13, v15, &ResultLength);
            if ( v11 >= 0 && *(_DWORD *)(v13 + 4) == 7 )
            {
              v16 = v71;
              v17 = (unsigned __int64)*(unsigned int *)(v13 + 8) >> 1;
              v59[0] = 0;
              *(_WORD *)(v13 + 2 * v17 + 12) = 0;
              v11 = ParseAndCompareBlockListCondition((const unsigned __int16 *)(v13 + 12), v8, v10, v16, a5, v59);
              if ( v11 >= 0 )
              {
                if ( v59[0] )
                {
                  ValueName = 0LL;
                  RtlInitUnicodeString(&ValueName, (PCWSTR)(v13 + 12));
                  if ( *v7 < 0x14 )
                  {
                    v19 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName, (__int64)&v9[*v7]);
                    LOBYTE(v20) = 0;
                    v11 = v19;
                    if ( v19 >= 0 )
                    {
                      v9[*v7].Buffer[((unsigned __int64)v9[*v7].Length >> 1) - 1] = 0;
                      v21 = *v7;
                      v22 = 0;
                      v23 = v21;
                      v24 = _mm_cvtsi128_si32((__m128i)v9[v23]);
                      v68 = v9[v23];
                      v25 = v24;
                      if ( v24 )
                      {
                        Buffer = v68.Buffer;
                        v27 = 0LL;
                        do
                        {
                          v28 = &Buffer[v27 / 2];
                          v29 = -1LL;
                          do
                            ++v29;
                          while ( v28[v29] );
                          if ( !(_DWORD)v29 )
                            break;
                          v30 = wcscmp_0(v28, L"GPU_P_ALL");
                          LOBYTE(v20) = 0;
                          if ( !v30 )
                          {
                            v59[0] = 1;
                            goto LABEL_24;
                          }
                          v22 += v29 + 1;
                          v27 = 2LL * v22;
                        }
                        while ( v27 < v25 );
                      }
                      v59[0] = 0;
LABEL_24:
                      v31 = 0;
                      v32 = _mm_cvtsi128_si32((__m128i)v72[v23]);
                      v68 = v72[v23];
                      v33 = v32;
                      if ( v32 )
                      {
                        v34 = v68.Buffer;
                        v35 = 0LL;
                        do
                        {
                          v36 = &v34[v35 / 2];
                          v37 = -1LL;
                          do
                            ++v37;
                          while ( v36[v37] );
                          if ( !(_DWORD)v37 )
                            break;
                          v38 = wcscmp_0(v36, L"GPU_PV_ALL");
                          LOBYTE(v20) = 0;
                          if ( !v38 )
                          {
                            v39 = 1;
                            goto LABEL_31;
                          }
                          v31 += v37 + 1;
                          v35 = 2LL * v31;
                        }
                        while ( v35 < v33 );
                      }
                      v39 = 0;
LABEL_31:
                      v40 = 0;
                      v41 = _mm_cvtsi128_si32((__m128i)v72[v23]);
                      v68 = v72[v23];
                      v42 = v41;
                      if ( v41 )
                      {
                        v43 = v68.Buffer;
                        v44 = 0LL;
                        do
                        {
                          v45 = &v43[v44 / 2];
                          v46 = -1LL;
                          do
                            ++v46;
                          while ( v45[v46] );
                          if ( !(_DWORD)v46 )
                            break;
                          v47 = wcscmp_0(v45, L"GPU_PV_HIGH_SECURITY");
                          LOBYTE(v20) = 0;
                          if ( !v47 )
                          {
                            v48 = 1;
                            goto LABEL_44;
                          }
                          v40 += v46 + 1;
                          v44 = 2LL * v40;
                        }
                        while ( v44 < v42 );
                      }
                      v48 = 0;
LABEL_44:
                      if ( (v39 || v48)
                        && (unsigned int)dword_1C013A918 > 5
                        && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000200LL) )
                      {
                        if ( !(_BYTE)v54 || (v55 = 1, v39) )
                          v55 = v20;
                        v49 = v60;
                        v50 = v13 + 12;
                        v51 = v61;
                        v69 = v55;
                        v62 = a5;
                        *(_QWORD *)&v68.Length = v71;
                        v73 = (unsigned __int16 *)(v13 + 12);
                        v63 = v60;
                        v64 = v61;
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                          v52,
                          byte_1C00A0304,
                          v53,
                          v54,
                          (__int64)&v64,
                          (__int64)&v63,
                          (void **)&v68,
                          (__int64)&v62,
                          (void **)&v73,
                          (__int64)&v69);
                        LOBYTE(v20) = 0;
                      }
                      else
                      {
                        v49 = v60;
                        v50 = v13 + 12;
                        v51 = v61;
                      }
                      if ( v59[0] != (_BYTE)v20 && (unsigned int)dword_1C013A918 > 5 )
                      {
                        if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000001000LL) )
                        {
                          v64 = a5;
                          v73 = v71;
                          *(_QWORD *)&v68.Length = v50;
                          v63 = v49;
                          v62 = v51;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                            v56,
                            byte_1C00A02A0,
                            v57,
                            v58,
                            (__int64)&v62,
                            (__int64)&v63,
                            (void **)&v73,
                            (__int64)&v64,
                            (void **)&v68);
                        }
                      }
                      v7 = v74;
                      v9 = v72;
                      v10 = v60;
                      v8 = v61;
                      ++*v74;
                    }
                  }
                }
              }
            }
            v15 = v70;
            v14 = v66 + 1;
            v66 = v14;
          }
          while ( v14 < (unsigned int)v79 );
        }
        operator delete((void *)v13);
      }
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v11;
}
