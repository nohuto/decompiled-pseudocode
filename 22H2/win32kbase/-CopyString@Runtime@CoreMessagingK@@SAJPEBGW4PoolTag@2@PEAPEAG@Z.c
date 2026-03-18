/*
 * XREFs of ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00B1154
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00B0FD8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C006C7E0 (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00B1290 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall CoreMessagingK::Runtime::CopyString(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  void *v5; // rax
  size_t v6; // rsi
  void *v7; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v4 = RtlStringCbLengthW(L"Kernel\\MIT\\InputPort", 0xFFFFFFFEuLL, (unsigned __int64 *)&v9);
  if ( v4 >= 0 )
  {
    v5 = v9;
    if ( (unsigned __int64)v9 >= 0xFFFFFFFC )
    {
      return (unsigned int)-1073741585;
    }
    else
    {
      v9 = 0LL;
      v6 = (size_t)v5 + 2;
      v4 = CoreMessagingK::Runtime::AllocUninitialized((__int64)v5 + 2, 0x4E534D43u, (__int64 *)&v9);
      if ( v4 >= 0 )
      {
        v7 = v9;
        *a3 = v9;
        memmove(v7, L"Kernel\\MIT\\InputPort", v6);
      }
    }
  }
  return (unsigned int)v4;
}
