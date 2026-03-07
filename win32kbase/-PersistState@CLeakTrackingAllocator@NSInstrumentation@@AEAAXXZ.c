void __fastcall NSInstrumentation::CLeakTrackingAllocator::PersistState(
        NSInstrumentation::CLeakTrackingAllocator *this)
{
  NSInstrumentation *v2; // rcx
  int v3; // edx
  unsigned int v4; // eax
  unsigned __int16 *v5; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v6[4]; // [rsp+38h] [rbp-41h] BYREF
  __int128 v7; // [rsp+48h] [rbp-31h]
  unsigned __int16 v8[4]; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v9; // [rsp+68h] [rbp-11h]
  const wchar_t *v10; // [rsp+70h] [rbp-9h]
  const wchar_t *v11; // [rsp+78h] [rbp-1h]
  const wchar_t *v12; // [rsp+80h] [rbp+7h]
  const wchar_t *v13; // [rsp+88h] [rbp+Fh]
  const wchar_t *v14; // [rsp+90h] [rbp+17h]
  const wchar_t *v15; // [rsp+98h] [rbp+1Fh]
  const wchar_t *v16; // [rsp+A0h] [rbp+27h]
  const wchar_t *v17; // [rsp+A8h] [rbp+2Fh]
  unsigned int v18[4]; // [rsp+B0h] [rbp+37h] BYREF

  v2 = (NSInstrumentation *)*((_QWORD *)this + 15);
  v3 = 0;
  *(_QWORD *)v8 = L"LeakTrackingAllocatorMode";
  v9 = L"PoolLeakedState";
  v10 = L"LeakedPoolTag0";
  v11 = L"LeakedPoolTag1";
  v12 = L"LeakedPoolTag2";
  v13 = L"LeakedPoolTag3";
  v14 = L"LeakedPoolTag4";
  v15 = L"LeakedPoolTag5";
  v16 = L"LeakedPoolTag6";
  v17 = L"LeakedPoolTag7";
  *(_OWORD *)v6 = 0LL;
  v7 = 0LL;
  if ( *((NSInstrumentation **)this + 14) != v2
    || (v2 = (NSInstrumentation *)*((_QWORD *)this + 17), *((NSInstrumentation **)this + 16) != v2) )
  {
    v3 = 1;
  }
  v4 = *(_DWORD *)this;
  v5 = (unsigned __int16 *)__PAIR64__(v3, v4);
  if ( v4 && v4 - 1 <= 1 )
    NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(this, v6, 8uLL, (unsigned __int64 *)v18);
  NSInstrumentation::PlatformPersistConfig32(v2, v8, (const unsigned __int16 **const)&v5, v18);
}
