/*
 * XREFs of ?RetrievePreviouslyPersistedState@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAW4TrackingMode@LeakTrackingAllocatorCore@2@PEAW4PoolLeakState@12@PEAII2@Z @ 0x1C00D4F44
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00D4E64 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?PlatformRetrieveConfig32@NSInstrumentation@@YAXPEAGQEAPEBGPEAIPEA_N_K@Z @ 0x1C00D5054 (-PlatformRetrieveConfig32@NSInstrumentation@@YAXPEAGQEAPEBGPEAIPEA_N_K@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::RetrievePreviouslyPersistedState(
        enum NSInstrumentation::LeakTrackingAllocatorCore::TrackingMode *a1,
        enum NSInstrumentation::CLeakTrackingAllocator::PoolLeakState *a2,
        char *a3,
        __int64 a4,
        unsigned int *a5)
{
  signed __int64 v8; // rcx
  unsigned __int64 i; // rax
  unsigned int v10; // edx
  bool *v11; // [rsp+20h] [rbp-71h]
  unsigned __int64 v12; // [rsp+28h] [rbp-69h]
  unsigned __int16 v13[4]; // [rsp+30h] [rbp-61h] BYREF
  const wchar_t *v14; // [rsp+38h] [rbp-59h]
  const wchar_t *v15; // [rsp+40h] [rbp-51h]
  const wchar_t *v16; // [rsp+48h] [rbp-49h]
  const wchar_t *v17; // [rsp+50h] [rbp-41h]
  const wchar_t *v18; // [rsp+58h] [rbp-39h]
  const wchar_t *v19; // [rsp+60h] [rbp-31h]
  const wchar_t *v20; // [rsp+68h] [rbp-29h]
  const wchar_t *v21; // [rsp+70h] [rbp-21h]
  const wchar_t *v22; // [rsp+78h] [rbp-19h]
  unsigned __int16 *v23; // [rsp+80h] [rbp-11h] BYREF
  char v24; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v25[4]; // [rsp+A8h] [rbp+17h] BYREF

  *(_QWORD *)v13 = L"LeakTrackingAllocatorMode";
  v14 = L"PoolLeakedState";
  v15 = L"LeakedPoolTag0";
  v16 = L"LeakedPoolTag1";
  v17 = L"LeakedPoolTag2";
  v18 = L"LeakedPoolTag3";
  v19 = L"LeakedPoolTag4";
  v20 = L"LeakedPoolTag5";
  v21 = L"LeakedPoolTag6";
  v22 = L"LeakedPoolTag7";
  NSInstrumentation::PlatformRetrieveConfig32(a1, v13, (const unsigned __int16 **const)&v23, v25, v11, v12);
  *(_DWORD *)a1 = (_DWORD)v23;
  *(_DWORD *)a2 = HIDWORD(v23);
  if ( *(_DWORD *)a1 && (unsigned int)(*(_DWORD *)a1 - 1) >= 2 )
    *(_DWORD *)a1 = 0;
  if ( *(_DWORD *)a2 > 1u )
    *(_DWORD *)a2 = 0;
  *a5 = 0;
  v8 = &v24 - a3;
  for ( i = 0LL; i < 8; ++i )
  {
    if ( !*((_BYTE *)v25 + i + 2) )
      break;
    v10 = *(_DWORD *)&a3[v8];
    if ( !v10 )
      break;
    *(_DWORD *)a3 = v10;
    ++*a5;
    a3 += 4;
  }
}
