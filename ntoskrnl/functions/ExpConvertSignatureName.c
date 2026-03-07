__int64 __fastcall ExpConvertSignatureName(int a1, void *a2, unsigned int *a3, wchar_t *a4, void *Src)
{
  __int64 result; // rax
  char v9; // di
  int v10; // eax
  int v11; // r12d
  wchar_t *Pool2; // rax
  WCHAR *v13; // rdi
  NTSTATUS v14; // r12d
  unsigned int OutputNT; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+20h] [rbp-69h]
  char v18; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v19[11]; // [rsp+41h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v21; // [rsp+50h] [rbp-39h] BYREF
  __int64 v22; // [rsp+58h] [rbp-31h] BYREF
  __int64 v23; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v26; // [rsp+80h] [rbp-9h] BYREF

  *(_DWORD *)&v19[3] = 0;
  v20 = 0;
  v21 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v18 = 0;
  v19[0] = 0;
  *(_OWORD *)P = 0LL;
  result = ExpParseSignatureName(a4, (__int64)&v21, (__int64)&v22, (__int64)&v18, (__int64)v19);
  if ( (int)result >= 0 )
  {
    if ( v19[0] == 1 && a1 == 4 )
      return ExpCreateOutputEFI(a2, (__int64)&v21, (__int64)&v22, Src, v18);
    v9 = v18;
    v10 = 0;
    if ( !v18 )
      v10 = *(_DWORD *)&v19[3];
    *(_DWORD *)&v19[7] = v10;
    result = ExpFindDiskSignature(
               (unsigned int)&v26,
               (unsigned int)&v19[7],
               (unsigned int)&v20,
               (unsigned int)&v24,
               (__int64)&v23,
               v18);
    if ( (int)result >= 0 )
    {
      v11 = *(_DWORD *)&v19[7];
      if ( v19[0] == 1 && (*(_DWORD *)&v19[3] != *(_DWORD *)&v19[7] || v21 != v24 || v22 != v23) )
        return 3221225485LL;
      if ( a1 == 4 )
        return ExpCreateOutputEFI(a2, (__int64)&v24, (__int64)&v23, Src, v9);
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, 94LL, 1920364101LL);
      v13 = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      LODWORD(v17) = v11;
      swprintf_s(Pool2, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v20, v17);
      v14 = ExpTranslateSymbolicLink(v13, (UNICODE_STRING *)P);
      ExFreePoolWithTag(v13, 0);
      if ( v14 < 0 )
        return (unsigned int)v14;
      if ( a1 == 3 )
      {
        OutputNT = ExpCreateOutputNT((__int64)a2, a3, (const wchar_t **)P, (const wchar_t *)Src);
      }
      else
      {
        if ( a1 != 1 )
        {
          v16 = -1073741811;
          goto LABEL_26;
        }
        OutputNT = ExpCreateOutputARC(a2, a3, P, Src);
      }
      v16 = OutputNT;
LABEL_26:
      ExFreePoolWithTag(P[1], 0);
      return v16;
    }
  }
  return result;
}
