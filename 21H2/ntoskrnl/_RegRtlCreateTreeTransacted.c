/*
 * XREFs of _RegRtlCreateTreeTransacted @ 0x140633154
 * Callers:
 *     _SysCtxRegCreateTree @ 0x1406330E0 (_SysCtxRegCreateTree.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlUnalignedStringCchLengthW @ 0x140253984 (RtlUnalignedStringCchLengthW.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _RegRtlCreateKeyTransacted @ 0x14063336C (_RegRtlCreateKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlCreateTreeTransacted(
        HANDLE Handle,
        NTSTRSAFE_PCWSTR pszSrc,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v10; // r13d
  NTSTATUS KeyTransacted; // edi
  size_t v14; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  unsigned __int64 v19; // rdi
  wchar_t *v20; // rax
  __int64 v21; // r9
  char v22; // cl
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // r8
  ULONG dwFlags; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v10 = a3;
  pcchLength = 0LL;
  v27 = 0LL;
  KeyTransacted = RegRtlCreateKeyTransacted(Handle, pszSrc, a3, a4, a5, a6, a7, a8, a9);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RtlUnalignedStringCchLengthW(pszSrc, 0x7FFFuLL, &pcchLength);
    if ( KeyTransacted >= 0 )
    {
      v14 = pcchLength + 1;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength + 1), 0x4C474552u);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        KeyTransacted = RtlStringCchCopyExW(PoolWithTag, v14, pszSrc, 0LL, 0LL, 0x100u);
        if ( !KeyTransacted )
        {
          v17 = (unsigned __int64)v16;
          v18 = (__int64)Handle;
          if ( !Handle && !wcsnicmp(v16, L"\\REGISTRY\\MACHINE\\", 0x12uLL) )
          {
            v18 = 2147483650LL;
            v17 = (unsigned __int64)(v16 + 18);
          }
          while ( 1 )
          {
            v19 = v17;
            v20 = wcschr((const wchar_t *)v17, 0x5Cu);
            v17 = (unsigned __int64)v20;
            if ( v20 )
            {
              *v20 = 0;
              do
                v17 += 2LL;
              while ( *(_WORD *)v17 == 92 );
              v17 &= -(__int64)(*(_WORD *)v17 != 0);
            }
            v21 = v29;
            v22 = a6;
            v23 = a8;
            if ( v17 )
            {
              v21 = 4LL;
              v22 = 0;
            }
            v24 = a5;
            if ( v17 )
              v23 = 0LL;
            v25 = v10;
            if ( v17 )
              v24 = 0LL;
            LOBYTE(dwFlags) = v22;
            if ( v17 )
              v25 = v10 & 0xFFFFFFFC;
            KeyTransacted = RegRtlCreateKeyTransacted(v18, v19, v25, v21, v24, dwFlags, &v27, v23, a9);
            if ( (HANDLE)v18 != Handle && v18 != 2147483650LL )
              ZwClose((HANDLE)v18);
            if ( KeyTransacted )
              break;
            if ( !v17 )
            {
              *a7 = v27;
              break;
            }
            v18 = v27;
          }
        }
        ExFreePoolWithTag(v16, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)KeyTransacted;
}
