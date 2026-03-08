/*
 * XREFs of EtwpSampledProfileRunDown @ 0x1409ECE34
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpSampledProfileRunDown(__int64 a1, char a2, char a3)
{
  unsigned __int16 v3; // si
  unsigned __int16 *v6; // rcx
  unsigned int v7; // eax
  __int16 *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // eax
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // [rsp+38h] [rbp-29h] BYREF
  __int128 v18; // [rsp+40h] [rbp-21h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-11h]
  unsigned __int64 v20; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-1h]
  _QWORD v22[3]; // [rsp+68h] [rbp+7h] BYREF
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]

  v20 = 0LL;
  v21 = 0;
  v19 = 0LL;
  v3 = 3914 - (a2 != 0);
  v17 = 0;
  v18 = 0LL;
  if ( a3 )
  {
    v6 = EtwpProfileObject;
    v7 = 1;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    v7 = EtwpPmcProfile;
    v6 = (unsigned __int16 *)qword_140C31BA8;
    if ( !EtwpPmcProfile )
    {
LABEL_14:
      KeReleaseMutex(&EtwpGroupMaskMutex, 0);
      return;
    }
  }
  v8 = (__int16 *)(v6 + 304);
  v9 = v7;
  do
  {
    v10 = *v8;
    v17 = 0;
    LODWORD(v18) = v10;
    if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020E8[0])(1LL, 24LL, &v18, &v17) < 0 )
    {
      v11 = 0;
      v12 = L"Unknown";
    }
    else
    {
      v11 = DWORD2(v18);
      v12 = v19;
    }
    v13 = L"Unknown";
    v21 = v11;
    v20 = __PAIR64__(v11, v10);
    if ( v12 )
      v13 = v12;
    v22[0] = &v20;
    v14 = -1LL;
    v22[1] = 12LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = *(_DWORD *)a1;
    v22[2] = v13;
    v16 = *(_QWORD *)(a1 + 1096);
    v23 = 2 * v14 + 2;
    v24 = 0;
    EtwpLogKernelEvent((__int64)v22, v16, v15, 2u, v3, 0x401903u);
    v8 += 308;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    goto LABEL_14;
}
