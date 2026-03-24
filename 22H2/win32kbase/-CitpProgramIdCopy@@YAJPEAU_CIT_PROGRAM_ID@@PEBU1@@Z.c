/*
 * XREFs of ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C01FE750
 * Callers:
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C01FE164 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C008F0EC (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0090B10 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     Feature_3138188600__private_IsEnabledDeviceUsage @ 0x1C00CE7B4 (Feature_3138188600__private_IsEnabledDeviceUsage.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FDFC0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProgramIdCopy(struct _CIT_PROGRAM_ID *a1, const struct _CIT_PROGRAM_ID *a2)
{
  const unsigned __int16 *v4; // rdx
  const char *v5; // rdx
  int v6; // ebx
  size_t v7; // rdi
  size_t v8; // r8
  const unsigned __int16 *v9; // rdx

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  v4 = *(const unsigned __int16 **)a2;
  if ( v4 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( v4[v8] );
    v6 = CitpStringDuplicate((unsigned __int16 **)a1, v4, v8);
    if ( v6 < 0 )
      goto LABEL_20;
    v9 = (const unsigned __int16 *)*((_QWORD *)a2 + 1);
    if ( !v9 )
      goto LABEL_21;
    do
      ++v7;
    while ( v9[v7] );
    v6 = CitpStringDuplicate((unsigned __int16 **)a1 + 1, v9, v7);
    if ( v6 < 0 )
    {
LABEL_20:
      if ( (unsigned int)Feature_3138188600__private_IsEnabledDeviceUsage() )
        return (unsigned int)v6;
    }
    else
    {
LABEL_21:
      if ( (unsigned int)Feature_3138188600__private_IsEnabledDeviceUsage() )
        return (unsigned int)v6;
      v6 = 0;
    }
    if ( v6 >= 0 )
      return (unsigned int)v6;
LABEL_16:
    CitpProgramIdCleanup(a1);
    return (unsigned int)v6;
  }
  v6 = -1073741637;
  if ( !(unsigned int)Feature_3138188600__private_IsEnabledDeviceUsage() )
  {
    CitpLogFailureWorker(3221225659LL, v5);
    goto LABEL_16;
  }
  CitpLogFailureWorker(3221225659LL, v5);
  return (unsigned int)v6;
}
