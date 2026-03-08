/*
 * XREFs of EtwpCheckGuidAccessAndDoRundown @ 0x1409EBA08
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x14068FF34 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpCheckGuidAccess @ 0x1406910EC (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EBB50 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1409EBEA0 (EtwpLogKernelTraceRundown.c)
 */

__int64 __fastcall EtwpCheckGuidAccessAndDoRundown(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int16 **a5,
        unsigned int a6)
{
  __int64 result; // rax
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  size_t v13; // r8
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v18; // r9d
  _OWORD v19[2]; // [rsp+30h] [rbp-68h] BYREF

  memset(v19, 0, sizeof(v19));
  result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
  v11 = result;
  if ( (int)result >= 0 )
  {
    if ( a3 >= *(_DWORD *)(a1 + 16) )
      return 3221225480LL;
    v12 = *((_DWORD *)a5 + 3);
    if ( v12 == -2147483647 )
    {
      v13 = *((unsigned int *)a5 + 2);
      if ( (unsigned int)v13 <= 0x20 && (v13 & 3) == 0 )
      {
        v14 = 1;
        if ( a6 > 1 )
        {
          v15 = a5 + 3;
          while ( v15[1] != -2147483644 || (*v15 & 3) == 0 )
          {
            ++v14;
            v15 += 4;
            if ( v14 >= a6 )
              goto LABEL_12;
          }
          return 3221225485LL;
        }
LABEL_12:
        memmove(v19, *a5, v13);
        v16 = a6 - 1;
        v17 = (__int64)(a5 + 2);
        LOBYTE(v18) = a4;
        if ( a6 <= 1 )
        {
          v16 = 0;
          v17 = 0LL;
        }
        EtwpLogKernelTraceRundown(a1, a3, (unsigned int)v19, v18, v17, v16);
        return v11;
      }
      return 3221225485LL;
    }
    if ( v12 == -2147483646 )
    {
      if ( *((_DWORD *)a5 + 2) != 8 )
        return 3221225485LL;
      LOBYTE(v10) = a4;
      return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, **a5, a3, v10);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return result;
}
