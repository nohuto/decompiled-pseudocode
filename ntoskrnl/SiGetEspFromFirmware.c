/*
 * XREFs of SiGetEspFromFirmware @ 0x140A5D1A4
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140A5CDB0 (SiGetEfiSystemDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x140413FB0 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x140414C10 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x140414C30 (ZwQueryBootOptions.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x14082F810 (BiReleasePrivilege.c)
 *     SiGetDeviceNumberInformation @ 0x140A5C84C (SiGetDeviceNumberInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x140A5CC24 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x140A5CD90 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x140A5D620 (SiIsValidWindowsBootEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEspFromFirmware(int a1, void *a2, unsigned int a3)
{
  unsigned int v3; // r14d
  void *v4; // r15
  void *v5; // r12
  int *v6; // r13
  wchar_t *v7; // rdi
  wchar_t *v8; // rsi
  __int64 result; // rax
  signed int i; // ebx
  unsigned int v11; // eax
  __int64 Pool2; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // r14d
  int BootOptions; // eax
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v18; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  unsigned int v21; // r14d
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned int *v25; // rax
  unsigned int v26; // r8d
  unsigned int *v27; // r14
  int v28; // eax
  _WORD *v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // [rsp+30h] [rbp-28h] BYREF
  int v33; // [rsp+34h] [rbp-24h] BYREF
  PVOID v34; // [rsp+38h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v36[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v39; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v40; // [rsp+B8h] [rbp+60h] BYREF

  v39 = a3;
  v3 = 0;
  v40 = 0;
  v4 = 0LL;
  v32 = 0;
  v5 = 0LL;
  v33 = 0;
  v6 = 0LL;
  *(_QWORD *)v36 = 0LL;
  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  result = BiAcquirePrivilege(0x16u, (__int64)v36);
  if ( (int)result >= 0 )
  {
    v39 = 0;
    i = ZwEnumerateBootEntries(0LL, (__int64)&v39);
    if ( i == -1073741789 )
    {
      while ( 1 )
      {
        v11 = v39;
        if ( v3 >= v39 )
          break;
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          v11 = v39;
        }
        Pool2 = ExAllocatePool2(256LL, v11, 1263556947LL);
        v4 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_11;
        v3 = v39;
        i = ZwEnumerateBootEntries(Pool2, (__int64)&v39);
        if ( i != -1073741789 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( i >= 0 )
      {
        if ( v39 )
        {
          v13 = 24;
          v39 = 24;
          while ( 1 )
          {
            if ( v6 )
            {
              ExFreePoolWithTag(v6, 0);
              v13 = v39;
            }
            v14 = ExAllocatePool2(256LL, v13, 1263556947LL);
            v6 = (int *)v14;
            if ( !v14 )
              break;
            v15 = v39;
            BootOptions = ZwQueryBootOptions(v14, (__int64)&v39);
            i = BootOptions;
            if ( BootOptions != -1073741789 )
            {
              if ( BootOptions < 0 )
                goto LABEL_46;
              EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v4, v6[3]);
              v18 = EfiBootEntryById;
              if ( EfiBootEntryById
                && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, &P),
                    v7 = (wchar_t *)P,
                    i = NtFilePath,
                    NtFilePath >= 0) )
              {
                IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v18, P);
                v21 = 0;
                if ( IsValidWindowsBootEntry )
                  goto LABEL_46;
                ExFreePoolWithTag(v7, 0);
                v7 = 0LL;
              }
              else
              {
                v21 = 0;
              }
              for ( i = ZwQueryBootEntryOrder(0LL, (__int64)&v40);
                    i == -1073741789;
                    i = ZwQueryBootEntryOrder(v23, (__int64)&v40) )
              {
                v22 = v40;
                if ( v21 >= v40 )
                  goto LABEL_46;
                if ( v5 )
                {
                  ExFreePoolWithTag(v5, 0);
                  v22 = v40;
                }
                v23 = ExAllocatePool2(256LL, 4LL * v22, 1263556947LL);
                v5 = (void *)v23;
                if ( !v23 )
                  goto LABEL_11;
                v21 = v40;
              }
              if ( i )
                goto LABEL_46;
              if ( v40 )
              {
                v24 = 0;
                do
                {
                  v25 = SiGetEfiBootEntryById((unsigned int *)v4, *((_DWORD *)v5 + v24));
                  v27 = v25;
                  if ( v25 )
                  {
                    v28 = SiBootEntryGetNtFilePath((__int64)v25, &v34);
                    v8 = (wchar_t *)v34;
                    if ( v28 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v27, v34) )
                    {
                      if ( v7 )
                      {
                        if ( wcsicmp(v7 + 6, v8 + 6) )
                        {
                          i = -1073740719;
                          goto LABEL_46;
                        }
                      }
                      else
                      {
                        v7 = v8;
                        v34 = 0LL;
                        v8 = 0LL;
                      }
                    }
                    if ( v8 )
                    {
                      ExFreePoolWithTag(v8, 0);
                      v8 = 0LL;
                      v34 = 0LL;
                    }
                    v26 = v40;
                  }
                  ++v24;
                }
                while ( v24 < v26 );
                i = v7 == 0LL ? 0xC0000225 : 0;
                goto LABEL_46;
              }
              goto LABEL_10;
            }
            v13 = v39;
            if ( v15 >= v39 )
              goto LABEL_46;
          }
LABEL_11:
          i = -1073741801;
        }
        else
        {
LABEL_10:
          i = -1073741275;
        }
      }
    }
LABEL_46:
    BiReleasePrivilege(v36);
    if ( i >= 0 )
    {
      if ( v7 )
      {
        if ( a1 )
        {
          v29 = v7 + 6;
          v30 = -1LL;
          do
            ++v30;
          while ( v29[v30] );
          v31 = 2 * v30 + 2;
          v39 = v31;
          if ( v31 <= 0x6A )
            memmove(a2, v29, v31);
          else
            i = -1073741789;
        }
        else
        {
          i = SiGetDeviceNumberInformation(v7 + 6, &v32, &v33);
          if ( i >= 0 )
            i = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)a2, 0x6AuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v32, 0LL);
        }
      }
      else
      {
        i = -1073741823;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return (unsigned int)i;
  }
  return result;
}
