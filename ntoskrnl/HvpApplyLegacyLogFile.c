/*
 * XREFs of HvpApplyLegacyLogFile @ 0x140A2755C
 * Callers:
 *     HvApplyLogFiles @ 0x1407F9454 (HvApplyLogFiles.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvpGenerateLogMetadata @ 0x1407EA6F0 (HvpGenerateLogMetadata.c)
 *     HvpIsMetadataArrayCoherent @ 0x1407F9D58 (HvpIsMetadataArrayCoherent.c)
 *     HvpUpdateRecoveryVector @ 0x1407F9DF8 (HvpUpdateRecoveryVector.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x1407F9FEC (HvpApplyLogEntryDataToFileBackedHive.c)
 */

__int64 __fastcall HvpApplyLegacyLogFile(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 (__fastcall *a5)(_QWORD, _QWORD, __int64),
        void (__fastcall *a6)(_DWORD *, _QWORD),
        RTL_BITMAP *a7)
{
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, __int64, __int64, _DWORD **); // rax
  int v13; // ebx
  ULONG v14; // r14d
  unsigned int v15; // r14d
  __int64 v16; // rax
  _DWORD *v17; // rsi
  unsigned int v18; // r15d
  unsigned int v20; // [rsp+30h] [rbp-61h] BYREF
  _DWORD *v21; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-51h]
  _DWORD BitMapHeader[5]; // [rsp+44h] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-39h]
  void (__fastcall *v25)(_DWORD *, _QWORD); // [rsp+60h] [rbp-31h]
  unsigned int v26[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v27; // [rsp+70h] [rbp-21h]
  int v28; // [rsp+78h] [rbp-19h]
  unsigned int v29; // [rsp+7Ch] [rbp-15h]
  __int128 v30; // [rsp+80h] [rbp-11h]

  v25 = a6;
  v9 = a1[10];
  v10 = *(_QWORD *)(a2 + 16);
  v22 = v9 >> 12;
  BugCheckParameter2 = a4;
  BitMapHeader[0] = 0;
  v11 = (v9 >> 12) + 4;
  BitMapHeader[2] = 0;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _DWORD **))(a2 + 8);
  v21 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v20 = 0;
  v13 = v12(v10, 512LL, v11, &v21);
  if ( v13 >= 0 )
  {
    if ( *v21 == 1414678852 )
    {
      BitMapHeader[1] = a1[10] >> 9;
      *(_QWORD *)&BitMapHeader[3] = v21 + 1;
      v14 = RtlNumberOfSetBits((PRTL_BITMAP)&BitMapHeader[1]);
      if ( v14 )
      {
        v15 = v14 << 9;
        HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1], 0LL, &v20);
        v16 = a5(8 * v20, 0LL, 859000131LL);
        v17 = (_DWORD *)v16;
        if ( v16 )
        {
          HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1], v16, &v20);
          v18 = v20;
          v28 = a1[10];
          v26[0] = 1162638920;
          v29 = v20;
          v26[1] = v15 + 8 * (v20 + 5);
          if ( HvpIsMetadataArrayCoherent(v26, (__int64)v17, v20) )
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _DWORD **))(a2 + 8))(
                    *(_QWORD *)(a2 + 16),
                    (v22 + 1027) & 0xFFFFFE00,
                    v15,
                    &v21);
            if ( v13 >= 0 )
            {
              v13 = HvpApplyLogEntryDataToFileBackedHive(
                      BugCheckParameter2,
                      (__int64)v26,
                      (__int64)v17,
                      (__int64)v21,
                      v15,
                      BitMapHeader);
              if ( v13 >= 0 )
              {
                if ( (v27 & 1) != 0 )
                  a1[36] |= 1u;
                if ( a7 )
                  HvpUpdateRecoveryVector(v17, v18, a7);
                v13 = 1073741833;
              }
            }
          }
          else
          {
            v13 = -1073741492;
          }
          v25(v17, 8 * v18);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return 0;
      }
    }
    else if ( BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0 )
    {
      a1[1022] |= 4u;
      return 1073741833;
    }
    else
    {
      return (unsigned int)-1073741492;
    }
  }
  return (unsigned int)v13;
}
