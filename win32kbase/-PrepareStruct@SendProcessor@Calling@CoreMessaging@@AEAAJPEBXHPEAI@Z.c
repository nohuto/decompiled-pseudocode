/*
 * XREFs of ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z @ 0x1C00AE7BC
 * Callers:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C00AE620 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareStruct(
        CoreMessaging::Calling::SendProcessor *this,
        const void *a2,
        int a3,
        unsigned int *a4)
{
  unsigned __int8 *v4; // rax
  int v5; // r8d
  int v6; // edx

  *a4 = 0;
  if ( !a3 && !a2 )
    return 2147500035LL;
  v4 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v5 = *v4++;
  *((_QWORD *)this + 1) = v4;
  v6 = v5 | (*v4 << 8);
  *((_QWORD *)this + 1) = v4 + 1;
  *a4 = v6;
  return 0LL;
}
