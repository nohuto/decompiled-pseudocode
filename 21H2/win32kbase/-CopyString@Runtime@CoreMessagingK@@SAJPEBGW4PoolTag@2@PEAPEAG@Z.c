/*
 * XREFs of ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00736DC
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C007434C (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00738AC (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0073980 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall CoreMessagingK::Runtime::CopyString(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  size_t v6; // rsi
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  v4 = RtlStringCbLengthW(L"Kernel\\MIT\\InputPort", 0xFFFFFFFEuLL, (unsigned __int64 *)&v8);
  if ( v4 >= 0 )
  {
    v5 = (unsigned __int64)v8;
    if ( (unsigned __int64)v8 >= 0xFFFFFFFC )
    {
      return (unsigned int)-1073741585;
    }
    else
    {
      v8 = 0LL;
      v6 = v5 + 2;
      v4 = CoreMessagingK::Runtime::AllocUninitialized(v5 + 2, 1314082115LL, &v8);
      if ( v4 >= 0 )
      {
        *a3 = v8;
        memmove(*a3, L"Kernel\\MIT\\InputPort", v6);
      }
    }
  }
  return (unsigned int)v4;
}
