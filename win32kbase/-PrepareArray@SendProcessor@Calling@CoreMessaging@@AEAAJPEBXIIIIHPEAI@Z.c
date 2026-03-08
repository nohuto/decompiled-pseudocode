/*
 * XREFs of ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1C00AE0C4
 * Callers:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C00AE620 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 * Callees:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C00AE620 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareArray(
        CoreMessaging::Calling::SendProcessor *this,
        const void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rsi
  unsigned int v11; // edi
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v8 = a8;
  v14 = 0;
  v11 = a5;
  *a8 = 0;
  if ( !a2 && a3 )
    goto LABEL_10;
  result = CoreMessaging::Calling::SendProcessor::ReadParameterSize(this, 0LL, 1, a4, v11, a6, &v14);
  if ( (int)result < 0 )
    return result;
  if ( !a7 )
    v11 = a3;
  v13 = v14 * (unsigned __int64)v11;
  if ( !is_mul_ok(v14, v11) || v13 > 0xFFFFFFFF )
  {
LABEL_10:
    *((_DWORD *)this + 30) = 7;
    return 2147942487LL;
  }
  *v8 = v13;
  return 0LL;
}
