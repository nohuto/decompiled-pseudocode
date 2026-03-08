/*
 * XREFs of PipGetDriverTagPriority @ 0x140B57DAC
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1407707FC (PnpRegSzToString.c)
 *     IopOpenRegistryKeyEx @ 0x14081BCC0 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetDriverTagPriority(HANDLE KeyHandle)
{
  unsigned __int16 i; // di
  _WORD *v3; // rsi
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // r14d
  NTSTATUS RegistryValue; // ebx
  NTSTATUS v9; // ebx
  unsigned __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // r9d
  _DWORD *v13; // rdx
  PVOID v14; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  PVOID v18; // [rsp+88h] [rbp+48h] BYREF

  P = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  *(_DWORD *)(&v15.MaximumLength + 1) = 0;
  Handle = 0LL;
  v15.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GroupOrderList";
  i = -1;
  *(_DWORD *)&v15.Length = 8650882;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v15, 0x20019u) < 0 )
    return i;
  if ( IopGetRegistryValue(KeyHandle, L"Group", 0, &P) < 0 )
  {
LABEL_8:
    ZwClose(Handle);
    return i;
  }
  v3 = P;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    v4 = *((_DWORD *)P + 3);
    if ( v4 )
    {
      v5 = *((unsigned int *)P + 2);
      LODWORD(P) = 0;
      PnpRegSzToString((_WORD *)((char *)v3 + v5), v4, (int *)&P);
      v15.Length = (unsigned __int16)P;
      v15.MaximumLength = v3[6];
      v15.Buffer = (_WORD *)((char *)v3 + *((unsigned int *)v3 + 2));
    }
  }
  v6 = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Tag", 80, &v18);
  if ( RegistryValue < 0
    || (*((_DWORD *)v18 + 1) != 4 || *((_DWORD *)v18 + 3) != 4
      ? (RegistryValue = -1073741823)
      : (v6 = *(_DWORD *)((char *)v18 + *((unsigned int *)v18 + 2))),
        ExFreePoolWithTag(v18, 0),
        RegistryValue < 0) )
  {
    ExFreePoolWithTag(v3, 0);
    goto LABEL_8;
  }
  v9 = IopGetRegistryValue(Handle, v15.Buffer, 80, &v14);
  ExFreePoolWithTag(v3, 0);
  ZwClose(Handle);
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)v14 + 1) == 3 )
    {
      v10 = *((unsigned int *)v14 + 3);
      if ( (unsigned int)v10 >= 4 )
      {
        v11 = (unsigned int *)((char *)v14 + *((unsigned int *)v14 + 2));
        v12 = *v11;
        if ( 4 * (unsigned __int64)(*v11 + 1) <= v10 )
        {
          v13 = v11 + 1;
          for ( i = 1; i <= v12; ++v13 )
          {
            if ( v6 == *v13 )
              break;
            ++i;
          }
        }
      }
    }
    ExFreePoolWithTag(v14, 0);
  }
  return i;
}
