/*
 * XREFs of PiGetDeviceRegProperty @ 0x1406C6230
 * Callers:
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     IopPnPDispatch @ 0x1407F7890 (IopPnPDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     wcsstr @ 0x1403D6020 (wcsstr.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PnpFindAlternateStringData @ 0x1407811C0 (PnpFindAlternateStringData.c)
 *     RtlFormatMessageEx @ 0x1409B6C28 (RtlFormatMessageEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(int a1, __int64 a2, int a3, int a4, wchar_t *Src, int *a6)
{
  size_t v8; // r13
  int DeviceRegProp; // eax
  unsigned int v10; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  wchar_t *v14; // r12
  int AlternateStringData; // eax
  size_t v16; // r15
  char v17; // cl
  wchar_t *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r13
  const wchar_t *v22; // rcx
  unsigned int i; // r13d
  __int64 v24; // rax
  __int64 v25; // rcx
  wchar_t *v26; // rax
  size_t Size; // [rsp+54h] [rbp-ACh] BYREF
  size_t v28; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR v30; // [rsp+70h] [rbp-90h]
  __int64 v31[20]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(v28) = a4;
  v8 = 0LL;
  Size = (unsigned int)*a6;
  v30 = Src;
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, a4, (__int64)&Size + 4, (__int64)Src, (__int64)&Size, 0);
  v10 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741789 )
        return v10;
    }
    else if ( HIDWORD(Size) != 1 )
    {
      return (unsigned int)-1073741584;
    }
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)Size, 1869181008LL);
    v13 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( v10 != -1073741789 )
    {
      memmove(Pool2, Src, (unsigned int)Size);
      goto LABEL_13;
    }
    v19 = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, v28, (__int64)&Size + 4, (__int64)Pool2, (__int64)&Size, 0);
    v10 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1073741789 )
        *a6 = Size;
    }
    else
    {
      if ( HIDWORD(Size) == 1 )
      {
LABEL_13:
        LODWORD(v28) = Size;
        Str = v13;
        LODWORD(v14) = (_DWORD)v13;
        AlternateStringData = PnpFindAlternateStringData(v13, (unsigned int)Size, &Str, &v28);
        v16 = (unsigned int)v28;
        if ( AlternateStringData
          && (v14 = Str, v18 = wcsstr(Str, L";("), (v8 = (size_t)v18) != 0)
          && (v20 = ((unsigned int)v16 >> 1) - 2, v14[v20] == 41) )
        {
          *v18 = 0;
          v21 = (__int64)(v18 + 2);
          v14[v20] = 0;
          v28 = (size_t)(v18 + 2);
          memset(&v31[1], 0, 0x98uLL);
          v22 = (const wchar_t *)v28;
          v31[0] = v21;
          for ( i = 1; ; ++i )
          {
            v26 = wcschr(v22, 0x2Cu);
            if ( !v26 )
            {
              v8 = v28;
              goto LABEL_14;
            }
            *v26 = 0;
            v24 = (__int64)(v26 + 1);
            if ( i >= 0x13 )
              break;
            v25 = i;
            v31[v25] = v24;
            v22 = (const wchar_t *)v24;
          }
          v8 = v28;
          v17 = 1;
        }
        else
        {
LABEL_14:
          v17 = 0;
        }
        if ( *a6 < (unsigned int)v16 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v17 )
            v10 = -1073741619;
          else
            v10 = RtlFormatMessageEx((int)v14, 0, 0, 0, 1, (__int64)v31, v30, *a6, (__int64)a6);
        }
        else
        {
          memmove(v30, Str, v16);
        }
        *a6 = v16;
        goto LABEL_19;
      }
      v10 = -1073741584;
    }
LABEL_19:
    ExFreePoolWithTag(v13, 0);
    return v10;
  }
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp != -1073741789 )
      return v10;
    goto LABEL_6;
  }
  if ( HIDWORD(Size) != a3 )
    return (unsigned int)-1073741584;
LABEL_6:
  *a6 = Size;
  return v10;
}
