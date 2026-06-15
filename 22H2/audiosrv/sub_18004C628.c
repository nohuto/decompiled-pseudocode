/*
 * XREFs of sub_18004C628 @ 0x18004C628
 * Callers:
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 * Callees:
 *     sub_1800104CC @ 0x1800104CC (sub_1800104CC.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180124630 @ 0x180124630 (sub_180124630.c)
 *     sub_1801246E0 @ 0x1801246E0 (sub_1801246E0.c)
 *     sub_180124C04 @ 0x180124C04 (sub_180124C04.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18004C628(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r13d
  __int64 v7; // r12
  __int16 v9; // r14
  unsigned __int64 v10; // r8
  PRTL_CRITICAL_SECTION_DEBUG v11; // rcx
  int SpinCount; // eax
  char v13; // al
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r9d
  int v20; // ecx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r8
  int SpinCount_low; // r9d
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  int v26; // ecx
  _WORD v27[2]; // [rsp+50h] [rbp-99h] BYREF
  int RecursionCount_low; // [rsp+54h] [rbp-95h] BYREF
  __int64 v29; // [rsp+58h] [rbp-91h] BYREF
  int v30; // [rsp+60h] [rbp-89h] BYREF
  int v31; // [rsp+64h] [rbp-85h] BYREF
  __int64 v32; // [rsp+68h] [rbp-81h] BYREF
  LPCRITICAL_SECTION v33; // [rsp+70h] [rbp-79h]
  PRTL_CRITICAL_SECTION_DEBUG v34; // [rsp+78h] [rbp-71h] BYREF
  __int64 v35; // [rsp+80h] [rbp-69h]
  __int64 v36; // [rsp+88h] [rbp-61h]
  _BYTE v37[64]; // [rsp+90h] [rbp-59h] BYREF
  _OWORD v38[2]; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v39; // [rsp+F0h] [rbp+7h]

  v32 = a4;
  v6 = a3;
  v7 = a2;
  v35 = a5;
  v36 = a6;
  v9 = 0;
  if ( a4 )
  {
    EnterCriticalSection(lpCriticalSection);
    v33 = lpCriticalSection;
    if ( (unsigned int)dword_18019C448 > 4
      && (byte_18019C458 & 0x10) != 0
      && (qword_18019C460 & 0x10) == qword_18019C460 )
    {
      v20 = BYTE1(lpCriticalSection[1].SpinCount);
      DebugInfo = lpCriticalSection[1].DebugInfo;
      SpinCount_low = LOWORD(lpCriticalSection[171].SpinCount);
      RecursionCount_low = LOBYTE(lpCriticalSection[171].RecursionCount);
      v30 = v20;
      v31 = v6;
      v34 = DebugInfo;
      v27[0] = SpinCount_low;
      v29 = v7;
      sub_180124C04(
        v20,
        (unsigned int)&unk_18016BE5E,
        (_DWORD)DebugInfo,
        SpinCount_low,
        (__int64)&v29,
        (__int64)v27,
        (__int64)&v34,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&RecursionCount_low);
    }
    v11 = lpCriticalSection[1].DebugInfo;
    if ( v11 && (LOBYTE(lpCriticalSection[171].RecursionCount) || (_BYTE)v6) )
    {
      if ( BYTE1(lpCriticalSection[1].SpinCount) )
      {
        (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v11->Type + 32LL))(v11);
        BYTE1(lpCriticalSection[1].SpinCount) = 0;
      }
      else
      {
        SpinCount = lpCriticalSection[171].SpinCount;
        if ( SpinCount )
        {
          if ( SpinCount == 1 )
            LODWORD(lpCriticalSection[171].SpinCount) = 3;
        }
        else
        {
          LODWORD(lpCriticalSection[171].SpinCount) = 1;
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          while ( 1 )
          {
            memset(v38, 0, sizeof(v38));
            v39 = 0LL;
            if ( v9 == 3
              && (unsigned int)dword_18019C448 > 2
              && __vcrt_trace_logging_provider::_TlgKeywordOn(
                   (__vcrt_trace_logging_provider *)&dword_18019C448,
                   (const struct _TlgProvider_t *)0x10,
                   v10) )
            {
              v27[0] = lpCriticalSection[171].SpinCount;
              v29 = v7;
              sub_180124630(v23, (unsigned int)&unk_18016BE09, v24, v25, (__int64)&v29, (__int64)v27);
            }
            v13 = sub_1800104CC();
            if ( !(_BYTE)v6 && v13 < 0 )
              break;
            LOBYTE(v6) = 0;
            v18 = sub_18005B754(v37, a6);
            sub_18005D590((_DWORD)lpCriticalSection, v7, 0, v32, v35, v18, (__int64)v38);
            EnterCriticalSection(lpCriticalSection);
            v33 = lpCriticalSection;
            v19 = lpCriticalSection[171].SpinCount;
            if ( v19 <= 1 )
            {
              LODWORD(lpCriticalSection[171].SpinCount) = 0;
              goto LABEL_16;
            }
            if ( (unsigned int)dword_18019C448 > 4
              && __vcrt_trace_logging_provider::_TlgKeywordOn(
                   (__vcrt_trace_logging_provider *)&dword_18019C448,
                   (const struct _TlgProvider_t *)0x10,
                   v10) )
            {
              v27[0] = v19;
              LOWORD(RecursionCount_low) = v9;
              v29 = v7;
              sub_1801246E0(
                v26,
                (unsigned int)&unk_18016BEF8,
                v10,
                v19,
                (__int64)&v29,
                (__int64)&RecursionCount_low,
                (__int64)v27);
              v19 = lpCriticalSection[171].SpinCount;
            }
            if ( v19 != 3 )
            {
              LODWORD(lpCriticalSection[171].SpinCount) = 0;
              (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)lpCriticalSection[1].DebugInfo + 32LL))(lpCriticalSection[1].DebugInfo);
              goto LABEL_16;
            }
            LODWORD(lpCriticalSection[171].SpinCount) = 1;
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            if ( (unsigned __int16)++v9 >= 5u )
              goto LABEL_18;
          }
          if ( (unsigned int)dword_18019C448 > 4
            && (byte_18019C458 & 0x10) != 0
            && (qword_18019C460 & 0x10) == qword_18019C460 )
          {
            LOWORD(RecursionCount_low) = lpCriticalSection[171].SpinCount;
            v32 = v7;
            sub_180124630(v14, (unsigned int)&unk_18016BF5A, v15, v16, (__int64)&v32, (__int64)&RecursionCount_low);
          }
          EnterCriticalSection(lpCriticalSection);
          LODWORD(lpCriticalSection[171].SpinCount) = 0;
        }
      }
    }
LABEL_16:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
LABEL_18:
  v17 = *(_QWORD *)(a6 + 56);
  if ( v17 )
  {
    LOBYTE(a2) = v17 != a6;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, a2);
    *(_QWORD *)(a6 + 56) = 0LL;
  }
}
