/*
 * XREFs of LdrpResReportResourceAccessInternal @ 0x180042CA4
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 *     _tlgKeywordOn @ 0x1800854C4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AEBC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1800D0378 (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternal(unsigned __int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r15d
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  void *v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // r10
  int v23; // [rsp+20h] [rbp-E0h]
  __int16 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 *v34; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  __int64 *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int16 *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int16 *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int64 v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]

  result = RtlRunOnceExecuteOnce(&unk_18016D290, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned __int16)dword_18016D190;
    result = (unsigned int)++dword_18016D190;
    if ( !v10 )
    {
      v25 = 0LL;
      if ( a2 )
      {
        v11 = 1;
        result = LdrResGetRCConfig(a1, a2, (unsigned int)&v25, 4096, 0);
        if ( (int)result >= 0 )
          v12 = v25;
        else
          v12 = 0LL;
      }
      else
      {
        v11 = 0;
        result = (__int64)LdrpGetRcConfig(a1, v9, 0, 1);
        v12 = result;
      }
      if ( v12 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( (unsigned int)dword_180166520 <= 5 )
              return result;
            result = tlgKeywordOn(&dword_180166520, 0x400000000000LL);
            if ( !(_BYTE)result )
              return result;
            v26 = *a3;
            v38 = &v28;
            v32 = &v26;
            v16 = &unk_180131A9B;
            v27 = a3[1];
            v34 = &v27;
            v36 = &v25;
            v37 = 4LL;
            v24 = 4;
            v40 = (__int64 *)&v24;
            v42 = (__int16 *)(v14 + 28);
            v23 = 8;
            v33 = 8LL;
            v35 = 8LL;
            v28 = 0x1000000LL;
            v39 = 8LL;
            v41 = v21;
            v43 = 16LL;
          }
          else
          {
            if ( a4 == 3 )
            {
              if ( (unsigned int)dword_180166520 <= 5 )
                return result;
              result = tlgKeywordOn(&dword_180166520, 0x400000000000LL);
              if ( !(_BYTE)result )
                return result;
              v28 = *a3;
              v32 = &v28;
              v27 = a3[1];
              v34 = &v27;
              v26 = a3[2];
              v36 = &v26;
              v38 = &v25;
              v39 = 4LL;
              v24 = 4;
              v42 = &v24;
              v44 = (__int16 *)(v14 + 28);
              v40 = &v29;
              v16 = &unk_180131801;
              v23 = 9;
              v33 = 8LL;
              v29 = 0x1000000LL;
              v41 = 8LL;
              v43 = v15;
              v45 = 16LL;
            }
            else
            {
              if ( (unsigned int)dword_180166520 <= 5 )
                return result;
              result = tlgKeywordOn(&dword_180166520, 0x400000000000LL);
              if ( !(_BYTE)result )
                return result;
              v29 = *a3;
              v32 = &v29;
              v28 = a3[1];
              v34 = &v28;
              v27 = a3[2];
              v36 = &v27;
              v26 = a3[3];
              v38 = &v26;
              v40 = &v25;
              v41 = 4LL;
              v24 = 4;
              v44 = &v24;
              v46 = v14 + 28;
              v42 = (__int16 *)&v30;
              v16 = &unk_180131957;
              v23 = 10;
              v33 = 8LL;
              v39 = 8LL;
              v30 = 0x1000000LL;
              v43 = 8LL;
              v45 = v22;
              v47 = 16LL;
            }
            v35 = 8LL;
            v37 = 8LL;
          }
          LODWORD(v25) = v11;
          return tlgWriteTransfer_EtwEventWriteTransfer(
                   (unsigned int)&dword_180166520,
                   (_DWORD)v16,
                   v13,
                   v14,
                   v23,
                   (__int64)v31);
        }
        if ( (unsigned int)dword_180166520 > 5 )
        {
          result = tlgKeywordOn(&dword_180166520, 0x400000000000LL);
          if ( (_BYTE)result )
          {
            v25 = 0x1000000LL;
            v32 = &v25;
            v33 = 8LL;
            tlgCreate1Sz_wchar_t(&v34, L"ResIdCount less than 2.");
            return tlgWriteTransfer_EtwEventWriteTransfer(
                     (unsigned int)&dword_180166520,
                     (unsigned int)&unk_180131CEF,
                     v19,
                     v20,
                     4,
                     (__int64)v31);
          }
        }
      }
      else if ( (unsigned int)dword_180166520 > 5 )
      {
        result = tlgKeywordOn(&dword_180166520, 0x400000000000LL);
        if ( (_BYTE)result )
        {
          v25 = 0x1000000LL;
          v32 = &v25;
          v33 = 8LL;
          tlgCreate1Sz_wchar_t(&v34, L"Failed to retrieve service checksum.");
          return tlgWriteTransfer_EtwEventWriteTransfer(
                   (unsigned int)&dword_180166520,
                   (unsigned int)&unk_180131C2A,
                   v17,
                   v18,
                   4,
                   (__int64)v31);
        }
      }
    }
  }
  return result;
}
