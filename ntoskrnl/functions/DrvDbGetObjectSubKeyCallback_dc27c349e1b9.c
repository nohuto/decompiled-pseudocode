__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t **v4; // r14
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v11; // edi
  wchar_t *Pool2; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rcx
  int v15; // eax
  NTSTRSAFE_PWSTR v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm1
  unsigned __int8 (__fastcall *v24)(__int64, wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v25; // eax
  unsigned int v26; // edi
  int v28; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+50h] [rbp-20h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (const wchar_t **)&off_1400081C8;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0;
  v33 = 0;
  v28 = 0;
  DestinationString = 0LL;
  while ( wcsicmp(a3, *v4) )
  {
    ++v6;
    ++v4;
    if ( v6 )
    {
      v11 = 256;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 512LL, 1111770192LL);
      v13 = Pool2;
      if ( !Pool2 )
        break;
      v14 = Pool2;
      if ( *(_WORD *)(a4 + 8) )
      {
        if ( RtlStringCchCopyExW(Pool2, 0x100uLL, (NTSTRSAFE_PCWSTR)(a4 + 8), &ppszDestEnd, &pcchRemaining, 0x900u) >= 0 )
        {
          v15 = pcchRemaining;
          if ( pcchRemaining >= 2 )
          {
            v16 = ppszDestEnd;
            *ppszDestEnd = 92;
            v14 = v16 + 1;
            *v14 = 0;
            v11 = v15 - 2;
            goto LABEL_9;
          }
        }
LABEL_28:
        ExFreePoolWithTag(v13, 0);
        break;
      }
LABEL_9:
      if ( RtlStringCchCopyW(v14, v11, a3) < 0 )
        goto LABEL_28;
      v17 = 0LL;
      if ( a1 )
        v17 = *(_QWORD *)(a1 + 224);
      if ( (int)SysCtxRegOpenKey(v17, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) < 0
        || (int)PnpCtxRegQueryInfoKey(v18, (int)Handle, (int)&v33, 0, (__int64)&v28, 0LL, 0LL) < 0 )
      {
        goto LABEL_28;
      }
      if ( v33 && *(_DWORD *)(a4 + 4) < *(_DWORD *)a4 )
      {
        v19 = ExAllocatePool2(256LL, 552LL, 1111770192LL);
        v5 = v19;
        if ( !v19 )
          goto LABEL_28;
        v20 = (_OWORD *)v19;
        v21 = (_OWORD *)a4;
        v22 = 4LL;
        do
        {
          *v20 = *v21;
          v20[1] = v21[1];
          v20[2] = v21[2];
          v20[3] = v21[3];
          v20[4] = v21[4];
          v20[5] = v21[5];
          v20[6] = v21[6];
          v20 += 8;
          v23 = v21[7];
          v21 += 8;
          *(v20 - 1) = v23;
          --v22;
        }
        while ( v22 );
        *v20 = *v21;
        v20[1] = v21[1];
        *((_QWORD *)v20 + 4) = *((_QWORD *)v21 + 4);
        ++*(_DWORD *)(v5 + 4);
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v5 + 8), 0x100uLL, v13, 0LL, 0LL, 0x900u);
        PnpCtxRegEnumKeyWithCallback(a1, Handle, (__int64)&DrvDbGetObjectSubKeyCallback, v5);
        *(_QWORD *)(a4 + 536) = *(_QWORD *)(v5 + 536);
        *(_DWORD *)(a4 + 544) = *(_DWORD *)(v5 + 544);
        *(_DWORD *)(a4 + 548) = *(_DWORD *)(v5 + 548);
      }
      if ( v28 )
      {
        v24 = *(unsigned __int8 (__fastcall **)(__int64, wchar_t *, _QWORD, _QWORD))(a4 + 520);
        if ( (!v24 || v24(a1, v13, 0LL, *(_QWORD *)(a4 + 528))) && RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
        {
          v25 = *(_DWORD *)(a4 + 544);
          v26 = DestinationString.MaximumLength >> 1;
          *(_DWORD *)(a4 + 548) += v26;
          if ( v25 > v26 )
          {
            RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v25, v13, 0LL, 0LL, 0x900u);
            *(_QWORD *)(a4 + 536) += 2LL * v26;
            *(_DWORD *)(a4 + 544) -= v26;
          }
        }
      }
      if ( v5 )
        ExFreePoolWithTag((PVOID)v5, 0);
      goto LABEL_28;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
